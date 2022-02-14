
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_op {int flags; scalar_t__ kt_ival1; int timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct bcm_op *VAR_2)
{
 if (VAR_2->flags & VAR_1)
  return;

 if (VAR_2->kt_ival1)
  FUNC_0(&VAR_2->timer, VAR_2->kt_ival1, VAR_0);
}
