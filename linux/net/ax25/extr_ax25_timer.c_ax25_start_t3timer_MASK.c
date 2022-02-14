
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ t3; int t3timer; } ;
typedef TYPE_1__ ax25_cb ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;

void FUNC_2(ax25_cb *VAR_1)
{
 if (VAR_1->t3 > 0)
  FUNC_1(&VAR_1->t3timer, VAR_0 + VAR_1->t3);
 else
  FUNC_0(&VAR_1->t3timer);
}
