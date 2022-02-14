
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(void)
{
 int VAR_3 = 0;

 for (; VAR_3 < VAR_2; ++VAR_3)
  if (VAR_1[VAR_3].flags & VAR_0)
   VAR_1[VAR_3].flags &= ~VAR_0;
}
