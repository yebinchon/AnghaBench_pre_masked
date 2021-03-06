
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct sk_buff {int dummy; } ;
struct sip_handler {int (* request ) (struct sk_buff*,unsigned int,unsigned int,char const**,unsigned int*,unsigned int) ;int len; int method; } ;
struct nf_ct_sip_master {scalar_t__ forced_dport; } ;
struct nf_conn {TYPE_5__* tuplehash; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;
typedef scalar_t__ __be16 ;
struct TYPE_6__ {scalar_t__ port; } ;
struct TYPE_7__ {TYPE_1__ udp; } ;
struct TYPE_8__ {int u3; TYPE_2__ u; } ;
struct TYPE_9__ {TYPE_3__ src; } ;
struct TYPE_10__ {TYPE_4__ tuple; } ;


 unsigned int ARRAY_SIZE (struct sip_handler*) ;
 int CTINFO2DIR (int) ;
 int NF_ACCEPT ;
 int NF_DROP ;
 int SIP_HDR_CSEQ ;
 int SIP_HDR_VIA_UDP ;
 scalar_t__ ct_sip_get_header (struct nf_conn*,char const*,int ,unsigned int,int ,unsigned int*,unsigned int*) ;
 scalar_t__ ct_sip_parse_header_uri (struct nf_conn*,char const*,int *,unsigned int,int ,int *,unsigned int*,unsigned int*,union nf_inet_addr*,scalar_t__*) ;
 int isalpha (char const) ;
 struct nf_conn* nf_ct_get (struct sk_buff*,int*) ;
 int nf_ct_helper_log (struct sk_buff*,struct nf_conn*,char*) ;
 scalar_t__ nf_inet_addr_cmp (union nf_inet_addr*,int *) ;
 struct nf_ct_sip_master* nfct_help_data (struct nf_conn*) ;
 unsigned int simple_strtoul (char const*,int *,int) ;
 struct sip_handler* sip_handlers ;
 scalar_t__ strncasecmp (char const*,int ,int) ;
 int stub1 (struct sk_buff*,unsigned int,unsigned int,char const**,unsigned int*,unsigned int) ;

__attribute__((used)) static int process_sip_request(struct sk_buff *skb, unsigned int protoff,
          unsigned int dataoff,
          const char **dptr, unsigned int *datalen)
{
 enum ip_conntrack_info ctinfo;
 struct nf_conn *ct = nf_ct_get(skb, &ctinfo);
 struct nf_ct_sip_master *ct_sip_info = nfct_help_data(ct);
 enum ip_conntrack_dir dir = CTINFO2DIR(ctinfo);
 unsigned int matchoff, matchlen;
 unsigned int cseq, i;
 union nf_inet_addr addr;
 __be16 port;







 if (ct_sip_parse_header_uri(ct, *dptr, ((void*)0), *datalen,
        SIP_HDR_VIA_UDP, ((void*)0), &matchoff,
        &matchlen, &addr, &port) > 0 &&
     port != ct->tuplehash[dir].tuple.src.u.udp.port &&
     nf_inet_addr_cmp(&addr, &ct->tuplehash[dir].tuple.src.u3))
  ct_sip_info->forced_dport = port;

 for (i = 0; i < ARRAY_SIZE(sip_handlers); i++) {
  const struct sip_handler *handler;

  handler = &sip_handlers[i];
  if (handler->request == ((void*)0))
   continue;
  if (*datalen < handler->len + 2 ||
      strncasecmp(*dptr, handler->method, handler->len))
   continue;
  if ((*dptr)[handler->len] != ' ' ||
      !isalpha((*dptr)[handler->len+1]))
   continue;

  if (ct_sip_get_header(ct, *dptr, 0, *datalen, SIP_HDR_CSEQ,
          &matchoff, &matchlen) <= 0) {
   nf_ct_helper_log(skb, ct, "cannot parse cseq");
   return NF_DROP;
  }
  cseq = simple_strtoul(*dptr + matchoff, ((void*)0), 10);
  if (!cseq && *(*dptr + matchoff) != '0') {
   nf_ct_helper_log(skb, ct, "cannot get cseq");
   return NF_DROP;
  }

  return handler->request(skb, protoff, dataoff, dptr, datalen,
     cseq);
 }
 return NF_ACCEPT;
}
