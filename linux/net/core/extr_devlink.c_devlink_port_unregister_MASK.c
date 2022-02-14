
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink_port {int list; struct devlink* devlink; } ;
struct devlink {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct devlink_port*,int ) ;
 int FUNC_1 (struct devlink_port*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct devlink_port *VAR_1)
{
 struct devlink *VAR_2 = VAR_1->devlink;

 FUNC_1(VAR_1);
 FUNC_0(VAR_1, VAR_0);
 FUNC_3(&VAR_2->lock);
 FUNC_2(&VAR_1->list);
 FUNC_4(&VAR_2->lock);
}
