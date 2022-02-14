
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct devlink_fmsg_item {int list; scalar_t__ len; int value; int attrtype; int nla_type; } ;
struct devlink_fmsg {int item_list; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct devlink_fmsg_item* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,void const*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct devlink_fmsg *VAR_5,
      const void *VAR_6, u16 VAR_7,
      u8 VAR_8)
{
 struct devlink_fmsg_item *VAR_9;

 if (VAR_7 > VAR_1)
  return -VAR_2;

 VAR_9 = FUNC_0(sizeof(*VAR_9) + VAR_7, VAR_4);
 if (!VAR_9)
  return -VAR_3;

 VAR_9->nla_type = VAR_8;
 VAR_9->len = VAR_7;
 VAR_9->attrtype = VAR_0;
 FUNC_2(&VAR_9->value, VAR_6, VAR_9->len);
 FUNC_1(&VAR_9->list, &VAR_5->item_list);

 return 0;
}
