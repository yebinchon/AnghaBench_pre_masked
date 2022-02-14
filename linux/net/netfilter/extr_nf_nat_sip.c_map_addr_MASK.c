
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct sk_buff {int dummy; } ;
struct nf_ct_sip_master {scalar_t__ forced_dport; } ;
struct nf_conn {TYPE_8__* tuplehash; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;
typedef scalar_t__ __be16 ;
struct TYPE_12__ {scalar_t__ port; } ;
struct TYPE_13__ {TYPE_4__ udp; } ;
struct TYPE_14__ {TYPE_5__ u; union nf_inet_addr u3; } ;
struct TYPE_9__ {scalar_t__ port; } ;
struct TYPE_10__ {TYPE_1__ udp; } ;
struct TYPE_11__ {TYPE_2__ u; union nf_inet_addr u3; } ;
struct TYPE_15__ {TYPE_6__ src; TYPE_3__ dst; } ;
struct TYPE_16__ {TYPE_7__ tuple; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*,unsigned int,unsigned int,char const**,unsigned int*,unsigned int,unsigned int,char*,unsigned int) ;
 struct nf_conn* FUNC_2 (struct sk_buff*,int*) ;
 scalar_t__ FUNC_3 (union nf_inet_addr*,union nf_inet_addr*) ;
 struct nf_ct_sip_master* FUNC_4 (struct nf_conn*) ;
 int FUNC_5 (scalar_t__) ;
 unsigned int FUNC_6 (struct nf_conn*,char*,union nf_inet_addr*,int ) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_1, unsigned int VAR_2,
      unsigned int VAR_3,
      const char **VAR_4, unsigned int *VAR_5,
      unsigned int VAR_6, unsigned int VAR_7,
      union nf_inet_addr *VAR_8, __be16 VAR_9)
{
 enum ip_conntrack_info VAR_10;
 struct nf_conn *VAR_11 = FUNC_2(VAR_1, &VAR_10);
 enum ip_conntrack_dir VAR_12 = FUNC_0(VAR_10);
 struct nf_ct_sip_master *VAR_13 = FUNC_4(VAR_11);
 char VAR_14[VAR_0 + sizeof("[]:nnnnn")];
 unsigned int VAR_15;
 union nf_inet_addr VAR_16;
 __be16 VAR_17;

 if (FUNC_3(&VAR_11->tuplehash[VAR_12].tuple.src.u3, VAR_8) &&
     VAR_11->tuplehash[VAR_12].tuple.src.u.udp.port == VAR_9) {
  VAR_16 = VAR_11->tuplehash[!VAR_12].tuple.dst.u3;
  VAR_17 = VAR_11->tuplehash[!VAR_12].tuple.dst.u.udp.port;
 } else if (FUNC_3(&VAR_11->tuplehash[VAR_12].tuple.dst.u3, VAR_8) &&
     VAR_11->tuplehash[VAR_12].tuple.dst.u.udp.port == VAR_9) {
  VAR_16 = VAR_11->tuplehash[!VAR_12].tuple.src.u3;
  VAR_17 = VAR_13->forced_dport ? :
     VAR_11->tuplehash[!VAR_12].tuple.src.u.udp.port;
 } else
  return 1;

 if (FUNC_3(&VAR_16, VAR_8) && VAR_17 == VAR_9)
  return 1;

 VAR_15 = FUNC_6(VAR_11, VAR_14, &VAR_16, FUNC_5(VAR_17));
 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
        VAR_6, VAR_7, VAR_14, VAR_15);
}
