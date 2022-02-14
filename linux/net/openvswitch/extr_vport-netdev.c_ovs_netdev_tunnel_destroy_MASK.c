
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vport {int rcu; TYPE_1__* dev; } ;
struct TYPE_4__ {scalar_t__ reg_state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct vport*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_1 ;

void FUNC_7(struct vport *VAR_2)
{
 FUNC_5();
 if (FUNC_2(VAR_2->dev))
  FUNC_3(VAR_2);





 if (VAR_2->dev->reg_state == VAR_0)
  FUNC_4(VAR_2->dev);
 FUNC_1(VAR_2->dev);
 VAR_2->dev = ((void*)0);
 FUNC_6();

 FUNC_0(&VAR_2->rcu, VAR_1);
}
