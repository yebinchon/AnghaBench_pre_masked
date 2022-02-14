
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union nf_inet_addr {int ip6; int ip; } ;
typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nf_hook_state {scalar_t__ pf; int net; } ;
struct nf_conntrack_zone {int dummy; } ;
struct nf_conntrack_tuple_hash {int dummy; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct nf_conn {TYPE_3__* tuplehash; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;
struct TYPE_4__ {union nf_inet_addr u3; } ;
struct TYPE_5__ {TYPE_1__ dst; } ;
struct TYPE_6__ {TYPE_2__ tuple; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nf_conntrack_tuple_hash const*) ;
 int FUNC_1 (int ) ;
 struct nf_conntrack_tuple_hash* FUNC_2 (int ,struct nf_conntrack_zone const*,struct nf_conntrack_tuple*) ;
 int FUNC_3 (struct sk_buff*,unsigned int,scalar_t__,int ,struct nf_conntrack_tuple*) ;
 int FUNC_4 (struct nf_conntrack_tuple*,struct nf_conntrack_tuple*) ;
 int FUNC_5 (struct nf_conn*) ;
 int FUNC_6 (struct sk_buff*,struct nf_conn*,int) ;
 struct nf_conn* FUNC_7 (struct nf_conntrack_tuple_hash const*) ;
 struct nf_conntrack_zone* FUNC_8 (struct nf_conn*,struct sk_buff*,struct nf_conntrack_zone*) ;
 int FUNC_9 (union nf_inet_addr*,union nf_inet_addr*) ;
 int FUNC_10 (struct sk_buff*,int ,scalar_t__,int ,char*,int *,int *) ;
 int FUNC_11 (struct sk_buff*) ;

int FUNC_12(struct nf_conn *VAR_6, struct sk_buff *VAR_7,
       unsigned int VAR_8,
       const struct nf_hook_state *VAR_9,
       u8 VAR_10, union nf_inet_addr *VAR_11)
{
 struct nf_conntrack_tuple VAR_12, VAR_13;
 const struct nf_conntrack_tuple_hash *VAR_14;
 const struct nf_conntrack_zone *VAR_15;
 enum ip_conntrack_info VAR_16;
 struct nf_conntrack_zone VAR_17;
 union nf_inet_addr *VAR_18;
 enum ip_conntrack_dir VAR_19;
 struct nf_conn *VAR_20;

 FUNC_1(FUNC_11(VAR_7));
 VAR_15 = FUNC_8(VAR_6, VAR_7, &VAR_17);


 if (!FUNC_3(VAR_7, VAR_8,
          VAR_9->pf, VAR_9->net, &VAR_13))
  return -VAR_5;



 if (!FUNC_4(&VAR_12, &VAR_13))
  return -VAR_5;

 VAR_14 = FUNC_2(VAR_9->net, VAR_15, &VAR_12);
 if (!VAR_14)
  return -VAR_5;
 VAR_20 = FUNC_7(VAR_14);
 VAR_19 = FUNC_0(VAR_14);
 VAR_18 = &VAR_20->tuplehash[VAR_19].tuple.dst.u3;
 if (!FUNC_9(VAR_11, VAR_18)) {
  if (VAR_9->pf == VAR_0) {
   FUNC_10(VAR_7, VAR_9->net, VAR_9->pf,
            VAR_10,
            "outer daddr %pI4 != inner %pI4",
            &VAR_11->ip, &VAR_18->ip);
  } else if (VAR_9->pf == VAR_1) {
   FUNC_10(VAR_7, VAR_9->net, VAR_9->pf,
            VAR_10,
            "outer daddr %pI6 != inner %pI6",
            &VAR_11->ip6, &VAR_18->ip6);
  }
  FUNC_5(VAR_20);
  return -VAR_5;
 }

 VAR_16 = VAR_4;
 if (VAR_19 == VAR_2)
  VAR_16 += VAR_3;


 FUNC_6(VAR_7, VAR_20, VAR_16);
 return VAR_5;
}
