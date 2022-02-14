
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcphdr {int seq; int ack; int syn; int ack_seq; int rst; } ;
struct synproxy_options {int options; scalar_t__ tsecr; scalar_t__ tsval; } ;
struct synproxy_net {TYPE_2__* stats; } ;
struct sk_buff {int dummy; } ;
struct nf_hook_state {struct net* net; } ;
struct nf_conn_synproxy {scalar_t__ isn; scalar_t__ its; scalar_t__ tsoff; } ;
struct ip_ct_tcp {int state; } ;
struct TYPE_4__ {struct ip_ct_tcp tcp; } ;
struct nf_conn {TYPE_1__ proto; } ;
struct net {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef int _th ;
struct TYPE_6__ {scalar_t__ protocol; } ;
struct TYPE_5__ {int cookie_retrans; int conn_reopened; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;



 int FUNC_1 (struct sk_buff*) ;
 TYPE_3__* FUNC_2 (struct sk_buff*) ;
 unsigned int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,struct nf_conn*) ;
 struct nf_conn* FUNC_5 (struct sk_buff*,int*) ;
 int FUNC_6 (struct nf_conn*,int,scalar_t__) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 struct nf_conn_synproxy* FUNC_8 (struct nf_conn*) ;
 scalar_t__ FUNC_9 (int ) ;
 struct tcphdr* FUNC_10 (struct sk_buff*,unsigned int,int,struct tcphdr*) ;
 int FUNC_11 (scalar_t__,scalar_t__) ;
 int FUNC_12 (struct sk_buff*,unsigned int,struct tcphdr*,struct synproxy_options*) ;
 struct synproxy_net* FUNC_13 (struct net*) ;
 int FUNC_14 (struct net*,struct sk_buff*,struct tcphdr*,struct synproxy_options*,int ) ;
 int FUNC_15 (struct net*,struct sk_buff*,struct tcphdr*,struct synproxy_options*) ;
 int FUNC_16 (struct net*,struct ip_ct_tcp const*,struct sk_buff*,struct tcphdr*,struct synproxy_options*) ;
 int FUNC_17 (struct sk_buff*,unsigned int,struct tcphdr*,struct nf_conn*,int,struct nf_conn_synproxy*) ;
 int FUNC_18 (int ) ;

unsigned int
FUNC_19(void *VAR_11, struct sk_buff *VAR_12,
     const struct nf_hook_state *VAR_13)
{
 struct net *VAR_14 = VAR_13->net;
 struct synproxy_net *VAR_15 = FUNC_13(VAR_14);
 enum ip_conntrack_info VAR_16;
 struct nf_conn *VAR_17;
 struct nf_conn_synproxy *VAR_18;
 struct synproxy_options VAR_19 = {};
 const struct ip_ct_tcp *VAR_20;
 struct tcphdr *VAR_21, VAR_22;
 unsigned int VAR_23;

 VAR_17 = FUNC_5(VAR_12, &VAR_16);
 if (!VAR_17)
  return VAR_4;

 VAR_18 = FUNC_8(VAR_17);
 if (!VAR_18)
  return VAR_4;

 if (FUNC_7(VAR_12) ||
     FUNC_2(VAR_12)->protocol != VAR_2)
  return VAR_4;

 VAR_23 = FUNC_3(VAR_12);
 VAR_21 = FUNC_10(VAR_12, VAR_23, sizeof(VAR_22), &VAR_22);
 if (!VAR_21)
  return VAR_5;

 VAR_20 = &VAR_17->proto.tcp;
 switch (VAR_20->state) {
 case 130:
  if (VAR_21->rst && FUNC_0(VAR_16) != VAR_3) {
   FUNC_6(VAR_17, VAR_16, VAR_18->isn -
            FUNC_9(VAR_21->seq) + 1);
   break;
  }

  if (!VAR_21->syn || VAR_21->ack ||
      FUNC_0(VAR_16) != VAR_3)
   break;





  FUNC_6(VAR_17, VAR_16, 0);
  VAR_18->tsoff = 0;
  FUNC_18(VAR_15->stats->conn_reopened);


 case 128:
  if (!FUNC_12(VAR_12, VAR_23, VAR_21, &VAR_19))
   return VAR_5;

  if (!VAR_21->syn && VAR_21->ack &&
      FUNC_0(VAR_16) == VAR_3) {




   if (FUNC_14(VAR_14, VAR_12, VAR_21, &VAR_19,
           FUNC_9(VAR_21->seq) + 1)) {
    FUNC_18(VAR_15->stats->cookie_retrans);
    FUNC_1(VAR_12);
    return VAR_6;
   } else {
    return VAR_5;
   }
  }

  VAR_18->isn = FUNC_9(VAR_21->ack_seq);
  if (VAR_19.options & VAR_9)
   VAR_18->its = VAR_19.tsecr;

  FUNC_4(VAR_1, VAR_17);
  break;
 case 129:
  if (!VAR_21->syn || !VAR_21->ack)
   break;

  if (!FUNC_12(VAR_12, VAR_23, VAR_21, &VAR_19))
   return VAR_5;

  if (VAR_19.options & VAR_9) {
   VAR_18->tsoff = VAR_19.tsval - VAR_18->its;
   FUNC_4(VAR_1, VAR_17);
  }

  VAR_19.options &= ~(VAR_7 |
      VAR_10 |
      VAR_8);

  FUNC_11(VAR_19.tsval, VAR_19.tsecr);
  FUNC_16(VAR_14, VAR_20, VAR_12, VAR_21, &VAR_19);

  FUNC_6(VAR_17, VAR_16, VAR_18->isn - FUNC_9(VAR_21->seq));
  FUNC_4(VAR_0, VAR_17);

  FUNC_11(VAR_19.tsval, VAR_19.tsecr);
  FUNC_15(VAR_14, VAR_12, VAR_21, &VAR_19);

  FUNC_1(VAR_12);
  return VAR_6;
 default:
  break;
 }

 FUNC_17(VAR_12, VAR_23, VAR_21, VAR_17, VAR_16, VAR_18);
 return VAR_4;
}
