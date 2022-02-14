
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct genl_info {int snd_seq; int snd_portid; } ;
struct devlink_fmsg {int dummy; } ;
typedef enum devlink_command { ____Placeholder_devlink_command } devlink_command ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct devlink_fmsg*,struct sk_buff*,int*) ;
 int VAR_6 ;
 int FUNC_1 (struct sk_buff*,void*) ;
 struct sk_buff* FUNC_2 (int ,int ) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int,int) ;
 int FUNC_4 (struct sk_buff*,struct genl_info*) ;
 int FUNC_5 (struct sk_buff*) ;
 struct nlmsghdr* FUNC_6 (struct sk_buff*,int ,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct devlink_fmsg *VAR_7,
       struct genl_info *VAR_8,
       enum devlink_command VAR_9, int VAR_10)
{
 struct nlmsghdr *VAR_11;
 struct sk_buff *VAR_12;
 bool VAR_13 = 0;
 int VAR_14 = 0;
 void *VAR_15;
 int VAR_16;

 while (!VAR_13) {
  int VAR_17 = VAR_14;

  VAR_12 = FUNC_2(VAR_2, VAR_3);
  if (!VAR_12)
   return -VAR_1;

  VAR_15 = FUNC_3(VAR_12, VAR_8->snd_portid, VAR_8->snd_seq,
      &VAR_6, VAR_10 | VAR_5, VAR_9);
  if (!VAR_15) {
   VAR_16 = -VAR_0;
   goto nla_put_failure;
  }

  VAR_16 = FUNC_0(VAR_7, VAR_12, &VAR_14);
  if (!VAR_16)
   VAR_13 = 1;
  else if (VAR_16 != -VAR_0 || VAR_17 == VAR_14)
   goto nla_put_failure;

  FUNC_1(VAR_12, VAR_15);
  VAR_16 = FUNC_4(VAR_12, VAR_8);
  if (VAR_16)
   return VAR_16;
 }

 VAR_12 = FUNC_2(VAR_2, VAR_3);
 if (!VAR_12)
  return -VAR_1;
 VAR_11 = FUNC_6(VAR_12, VAR_8->snd_portid, VAR_8->snd_seq,
   VAR_4, 0, VAR_10 | VAR_5);
 if (!VAR_11) {
  VAR_16 = -VAR_0;
  goto nla_put_failure;
 }

 return FUNC_4(VAR_12, VAR_8);

nla_put_failure:
 FUNC_5(VAR_12);
 return VAR_16;
}
