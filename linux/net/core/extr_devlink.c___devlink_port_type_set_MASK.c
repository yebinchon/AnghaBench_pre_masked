
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink_port {int type; int type_lock; void* type_dev; int registered; } ;
typedef enum devlink_port_type { ____Placeholder_devlink_port_type } devlink_port_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct devlink_port*,int ) ;
 int FUNC_2 (struct devlink_port*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct devlink_port *VAR_1,
        enum devlink_port_type VAR_2,
        void *VAR_3)
{
 if (FUNC_0(!VAR_1->registered))
  return;
 FUNC_2(VAR_1);
 FUNC_3(&VAR_1->type_lock);
 VAR_1->type = VAR_2;
 VAR_1->type_dev = VAR_3;
 FUNC_4(&VAR_1->type_lock);
 FUNC_1(VAR_1, VAR_0);
}
