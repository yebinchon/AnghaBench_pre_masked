
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_cpu_num; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__* VAR_0 ;
 int FUNC_1 (scalar_t__*) ;
 TYPE_1__ VAR_1 ;

void FUNC_2(void)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1.max_cpu_num + 1; ++VAR_2) {
  if (VAR_0[VAR_2] != 0)
   FUNC_0(VAR_0[VAR_2]);
 }

 FUNC_1(VAR_0);
}
