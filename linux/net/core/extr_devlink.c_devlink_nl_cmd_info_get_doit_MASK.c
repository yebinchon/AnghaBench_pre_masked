
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct genl_info {int extack; int snd_seq; int snd_portid; struct devlink** user_ptr; } ;
struct devlink {TYPE_1__* ops; } ;
struct TYPE_2__ {int info_get; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,struct devlink*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct sk_buff*,struct genl_info*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_5,
     struct genl_info *VAR_6)
{
 struct devlink *VAR_7 = VAR_6->user_ptr[0];
 struct sk_buff *VAR_8;
 int VAR_9;

 if (!VAR_7->ops->info_get)
  return -VAR_2;

 VAR_8 = FUNC_3(VAR_4, VAR_3);
 if (!VAR_8)
  return -VAR_1;

 VAR_9 = FUNC_0(VAR_8, VAR_7, VAR_0,
       VAR_6->snd_portid, VAR_6->snd_seq, 0,
       VAR_6->extack);
 if (VAR_9) {
  FUNC_2(VAR_8);
  return VAR_9;
 }

 return FUNC_1(VAR_8, VAR_6);
}
