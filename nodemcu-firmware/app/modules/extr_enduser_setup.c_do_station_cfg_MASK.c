
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ task_param_t ;
struct station_config {int dummy; } ;
struct TYPE_2__ {int connecting; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,struct station_config*) ;
 int FUNC_2 () ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct station_config*) ;

__attribute__((used)) static void FUNC_6 (task_param_t VAR_1, uint8_t VAR_2)
{
  FUNC_0("do_station_cfg");

  VAR_0->connecting = 1;
  struct station_config *VAR_3 = (struct station_config *)VAR_1;
  (void)VAR_2;
  FUNC_4 ();
  FUNC_5 (VAR_3);
  FUNC_3 ();
  FUNC_1(FUNC_2(), VAR_3);
}
