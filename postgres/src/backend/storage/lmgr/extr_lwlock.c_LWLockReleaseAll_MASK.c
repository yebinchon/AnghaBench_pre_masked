
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

void
FUNC_2(void)
{
 while (VAR_1 > 0)
 {
  FUNC_0();

  FUNC_1(VAR_0[VAR_1 - 1].lock);
 }
}
