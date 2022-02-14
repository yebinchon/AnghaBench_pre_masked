
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct genl_info {int snd_seq; int snd_portid; struct devlink_sb** user_ptr; } ;
struct devlink_sb {struct devlink* devlink; } ;
struct devlink_port {struct devlink* devlink; } ;
struct devlink {TYPE_1__* ops; } ;
struct TYPE_2__ {int sb_port_pool_get; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,struct devlink*,struct devlink_sb*,struct devlink_sb*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct devlink_sb*,struct genl_info*,int *) ;
 int FUNC_2 (struct sk_buff*,struct genl_info*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_5,
      struct genl_info *VAR_6)
{
 struct devlink_port *VAR_7 = VAR_6->user_ptr[0];
 struct devlink *VAR_8 = VAR_7->devlink;
 struct devlink_sb *VAR_9 = VAR_6->user_ptr[1];
 struct sk_buff *VAR_10;
 u16 VAR_11;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_9, VAR_6,
        &VAR_11);
 if (VAR_12)
  return VAR_12;

 if (!VAR_8->ops->sb_port_pool_get)
  return -VAR_2;

 VAR_10 = FUNC_4(VAR_4, VAR_3);
 if (!VAR_10)
  return -VAR_1;

 VAR_12 = FUNC_0(VAR_10, VAR_8, VAR_7,
        VAR_9, VAR_11,
        VAR_0,
        VAR_6->snd_portid, VAR_6->snd_seq, 0);
 if (VAR_12) {
  FUNC_3(VAR_10);
  return VAR_12;
 }

 return FUNC_2(VAR_10, VAR_6);
}
