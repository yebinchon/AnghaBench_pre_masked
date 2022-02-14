
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pkg_id; int die_id; int punit_cpu_core; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

int FUNC_0(int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6) {
  if (VAR_1[VAR_6].pkg_id == VAR_3 &&
      VAR_1[VAR_6].die_id == VAR_4 &&
      VAR_1[VAR_6].punit_cpu_core == VAR_5)
   return VAR_6;
 }

 return -VAR_0;
}
