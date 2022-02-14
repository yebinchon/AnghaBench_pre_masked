
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct devlink_port {int index; int devlink; int param_list; } ;
struct devlink_param_item {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct devlink_param_item* FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ,struct devlink_param_item*,int ) ;

void FUNC_3(struct devlink_port *VAR_1,
          u32 VAR_2)
{
 struct devlink_param_item *VAR_3;

 VAR_3 = FUNC_1(&VAR_1->param_list,
           VAR_2);
 FUNC_0(!VAR_3);

 FUNC_2(VAR_1->devlink, VAR_1->index,
        VAR_3, VAR_0);
}
