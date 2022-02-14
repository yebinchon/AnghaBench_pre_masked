
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct genl_info {int snd_seq; int snd_portid; struct devlink** user_ptr; } ;
struct devlink_param_item {int dummy; } ;
struct devlink {int param_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,struct devlink*,int ,struct devlink_param_item*,int ,int ,int ,int ) ;
 struct devlink_param_item* FUNC_1 (int *,struct genl_info*) ;
 int FUNC_2 (struct sk_buff*,struct genl_info*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_5,
      struct genl_info *VAR_6)
{
 struct devlink *VAR_7 = VAR_6->user_ptr[0];
 struct devlink_param_item *VAR_8;
 struct sk_buff *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_1(&VAR_7->param_list, VAR_6);
 if (!VAR_8)
  return -VAR_1;

 VAR_9 = FUNC_4(VAR_4, VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_10 = FUNC_0(VAR_9, VAR_7, 0, VAR_8,
        VAR_0,
        VAR_6->snd_portid, VAR_6->snd_seq, 0);
 if (VAR_10) {
  FUNC_3(VAR_9);
  return VAR_10;
 }

 return FUNC_2(VAR_9, VAR_6);
}
