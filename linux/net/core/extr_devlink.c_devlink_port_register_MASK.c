
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink_port {unsigned int index; int registered; int type_warn_dw; int param_list; int list; int type_lock; struct devlink* devlink; } ;
struct devlink {int lock; int port_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct devlink*,unsigned int) ;
 int FUNC_3 (struct devlink_port*,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct devlink_port*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct devlink *VAR_3,
     struct devlink_port *VAR_4,
     unsigned int VAR_5)
{
 FUNC_6(&VAR_3->lock);
 if (FUNC_2(VAR_3, VAR_5)) {
  FUNC_7(&VAR_3->lock);
  return -VAR_1;
 }
 VAR_4->devlink = VAR_3;
 VAR_4->index = VAR_5;
 VAR_4->registered = 1;
 FUNC_8(&VAR_4->type_lock);
 FUNC_5(&VAR_4->list, &VAR_3->port_list);
 FUNC_1(&VAR_4->param_list);
 FUNC_7(&VAR_3->lock);
 FUNC_0(&VAR_4->type_warn_dw, &VAR_2);
 FUNC_4(VAR_4);
 FUNC_3(VAR_4, VAR_0);
 return 0;
}
