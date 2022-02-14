
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int minor; } ;
struct TYPE_4__ {TYPE_1__ pm_qos_power_miscdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__** VAR_2 ;

__attribute__((used)) static int FUNC_0(int VAR_3)
{
 int VAR_4;

 for (VAR_4 = VAR_0;
  VAR_4 < VAR_1; VAR_4++) {
  if (VAR_3 ==
   VAR_2[VAR_4]->pm_qos_power_miscdev.minor)
   return VAR_4;
 }
 return -1;
}
