
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink_fmsg_item {int attrtype; int list; } ;
struct devlink_fmsg {int item_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct devlink_fmsg_item* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct devlink_fmsg *VAR_2,
        int VAR_3)
{
 struct devlink_fmsg_item *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->attrtype = VAR_3;
 FUNC_1(&VAR_4->list, &VAR_2->item_list);

 return 0;
}
