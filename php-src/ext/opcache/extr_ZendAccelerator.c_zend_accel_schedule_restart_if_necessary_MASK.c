
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zend_accel_restart_reason ;
struct TYPE_2__ {double memory_consumption; double max_wasted_percentage; } ;


 TYPE_1__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

void FUNC_3(zend_accel_restart_reason VAR_2)
{
 if ((((double) FUNC_1(VAR_1)) / FUNC_0(VAR_0).memory_consumption) >= FUNC_0(VAR_0).max_wasted_percentage) {
   FUNC_2(VAR_2);
 }
}
