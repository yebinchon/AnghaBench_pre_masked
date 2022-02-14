
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int sk; } ;
struct netns_ipvs {int dummy; } ;
struct net {int dummy; } ;
struct ip_vs_timeout_user {int udp_timeout; int tcp_fin_timeout; int tcp_timeout; } ;
struct ip_vs_service {int dummy; } ;
struct genl_info {int * attrs; TYPE_1__* genlhdr; } ;
struct TYPE_2__ {int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct ip_vs_service*) ;
 int VAR_15 ;
 int FUNC_1 (struct ip_vs_service*) ;
 int FUNC_2 (struct netns_ipvs*,struct ip_vs_timeout_user*) ;
 int VAR_16 ;
 int FUNC_3 (struct sk_buff*,void*) ;
 void* FUNC_4 (struct sk_buff*,struct genl_info*,int *,int ,int) ;
 int FUNC_5 (struct sk_buff*,struct genl_info*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_6 (struct sk_buff*,struct ip_vs_service*) ;
 struct ip_vs_service* FUNC_7 (struct netns_ipvs*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct netns_ipvs* FUNC_10 (struct net*) ;
 int FUNC_11 (struct sk_buff*,int ,int ) ;
 int FUNC_12 (struct sk_buff*) ;
 struct sk_buff* FUNC_13 (int ,int ) ;
 int FUNC_14 (char*) ;
 struct net* FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct sk_buff *VAR_19, struct genl_info *VAR_20)
{
 struct sk_buff *VAR_21;
 void *VAR_22;
 int VAR_23, VAR_24, VAR_25;
 struct net *VAR_26 = FUNC_15(VAR_19->sk);
 struct netns_ipvs *VAR_27 = FUNC_10(VAR_26);

 VAR_24 = VAR_20->genlhdr->cmd;

 if (VAR_24 == 128)
  VAR_25 = VAR_9;
 else if (VAR_24 == 129)
  VAR_25 = VAR_11;
 else if (VAR_24 == 130)
  VAR_25 = VAR_10;
 else {
  FUNC_14("unknown Generic Netlink command\n");
  return -VAR_0;
 }

 VAR_21 = FUNC_13(VAR_15, VAR_4);
 if (!VAR_21)
  return -VAR_2;

 FUNC_8(&VAR_16);

 VAR_22 = FUNC_4(VAR_21, VAR_20, &VAR_18, 0, VAR_25);
 if (VAR_22 == ((void*)0))
  goto nla_put_failure;

 switch (VAR_24) {
 case 128:
 {
  struct ip_vs_service *VAR_28;

  VAR_28 = FUNC_7(VAR_27,
           VAR_20->attrs[VAR_5]);
  if (FUNC_0(VAR_28)) {
   VAR_23 = FUNC_1(VAR_28);
   goto out_err;
  } else if (VAR_28) {
   VAR_23 = FUNC_6(VAR_21, VAR_28);
   if (VAR_23)
    goto nla_put_failure;
  } else {
   VAR_23 = -VAR_3;
   goto out_err;
  }

  break;
 }

 case 130:
 {
  struct ip_vs_timeout_user VAR_29;

  FUNC_2(VAR_27, &VAR_29);
  break;
 }

 case 129:
  if (FUNC_11(VAR_21, VAR_13,
    VAR_14) ||
      FUNC_11(VAR_21, VAR_12,
    VAR_17))
   goto nla_put_failure;
  break;
 }

 FUNC_3(VAR_21, VAR_22);
 VAR_23 = FUNC_5(VAR_21, VAR_20);
 goto out;

nla_put_failure:
 FUNC_14("not enough space in Netlink message\n");
 VAR_23 = -VAR_1;

out_err:
 FUNC_12(VAR_21);
out:
 FUNC_9(&VAR_16);

 return VAR_23;
}
