
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_2__ {int emergency_restart_threshold; scalar_t__ emergency_restart_interval; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;

int FUNC_3()
{
 if (VAR_2.emergency_restart_threshold &&
  VAR_2.emergency_restart_interval) {

  VAR_3 = FUNC_1(sizeof(time_t) * VAR_2.emergency_restart_threshold);

  if (!VAR_3) {
   return -1;
  }

  FUNC_2(VAR_3, 0, sizeof(time_t) * VAR_2.emergency_restart_threshold);
 }

 if (0 > FUNC_0(VAR_0, VAR_1, 0)) {
  return -1;
 }

 return 0;
}
