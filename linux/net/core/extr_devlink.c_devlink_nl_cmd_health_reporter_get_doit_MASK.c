
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct genl_info {int snd_seq; int snd_portid; struct devlink** user_ptr; } ;
struct devlink_health_reporter {int dummy; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct devlink_health_reporter* FUNC_0 (struct devlink*,struct genl_info*) ;
 int FUNC_1 (struct devlink_health_reporter*) ;
 int FUNC_2 (struct sk_buff*,struct devlink*,struct devlink_health_reporter*,int ,int ,int ,int ) ;
 int FUNC_3 (struct sk_buff*,struct genl_info*) ;
 int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_5,
         struct genl_info *VAR_6)
{
 struct devlink *VAR_7 = VAR_6->user_ptr[0];
 struct devlink_health_reporter *VAR_8;
 struct sk_buff *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_0(VAR_7, VAR_6);
 if (!VAR_8)
  return -VAR_1;

 VAR_9 = FUNC_5(VAR_4, VAR_3);
 if (!VAR_9) {
  VAR_10 = -VAR_2;
  goto out;
 }

 VAR_10 = FUNC_2(VAR_9, VAR_7, VAR_8,
           VAR_0,
           VAR_6->snd_portid, VAR_6->snd_seq,
           0);
 if (VAR_10) {
  FUNC_4(VAR_9);
  goto out;
 }

 VAR_10 = FUNC_3(VAR_9, VAR_6);
out:
 FUNC_1(VAR_8);
 return VAR_10;
}
