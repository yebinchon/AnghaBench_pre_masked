
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct stat {scalar_t__ st_uid; int st_mode; } ;
typedef int binding_str ;
struct TYPE_8__ {int nr_tz_sensor; int nr_cooling_dev; TYPE_3__* cdi; TYPE_2__* tzi; } ;
struct TYPE_7__ {char* type; int instance; } ;
struct TYPE_6__ {int cdev_binding; char* type; char* instance; int nr_trip_pts; TYPE_1__* tp; } ;
struct TYPE_5__ {size_t type; int temp; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,char*,...) ;
 scalar_t__ FUNC_4 () ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int ,struct stat*) ;
 int FUNC_6 (char*,int ,int) ;
 TYPE_4__ VAR_3 ;
 int FUNC_7 (int ,char*,...) ;
 int * VAR_4 ;
 char** VAR_5 ;

__attribute__((used)) static void FUNC_8(void)
{
 int VAR_6;
 struct stat VAR_7;

 if (!VAR_2)
  return;

 VAR_4 = FUNC_2(VAR_1, "w+");
 if (!VAR_4) {
  FUNC_7(VAR_0, "failed to open log file %s\n", VAR_1);
  return;
 }

 if (FUNC_5(VAR_1, &VAR_7) < 0) {
  FUNC_7(VAR_0, "Unable to stat log file %s\n", VAR_1);
  FUNC_1(VAR_4);
  VAR_4 = ((void*)0);
  return;
 }


 if (FUNC_0(VAR_7.st_mode)) {
  FUNC_7(VAR_0, "Log file is a symlink.  Will not log\n");
  FUNC_1(VAR_4);
  VAR_4 = ((void*)0);
  return;
 }

 if (VAR_7.st_uid != FUNC_4()) {
  FUNC_7(VAR_0, "We don't own the log file.  Not logging\n");
  FUNC_1(VAR_4);
  VAR_4 = ((void*)0);
  return;
 }


 FUNC_3(VAR_4, "#----------- THERMAL SYSTEM CONFIG -------------\n");
 for (VAR_6 = 0; VAR_6 < VAR_3.nr_tz_sensor; VAR_6++) {
  char VAR_8[33];
  int VAR_9;

  FUNC_6(VAR_8, 0, sizeof(VAR_8));
  for (VAR_9 = 0; VAR_9 < 32; VAR_9++)
   VAR_8[VAR_9] = (VAR_3.tzi[VAR_6].cdev_binding & 1<<VAR_9) ?
    '1' : '0';

  FUNC_3(VAR_4, "#thermal zone %s%2s cdevs binding: %32s\n",
   VAR_3.tzi[VAR_6].type,
   VAR_3.tzi[VAR_6].instance,
   VAR_8);
  for (VAR_9 = 0; VAR_9 < VAR_3.tzi[VAR_6].nr_trip_pts; VAR_9++) {
   FUNC_3(VAR_4, "#\tTP%02d type:%s, temp:%d\n", VAR_9,
    VAR_5[VAR_3.tzi[VAR_6].tp[VAR_9].type],
    VAR_3.tzi[VAR_6].tp[VAR_9].temp);
  }

 }

 for (VAR_6 = 0; VAR_6 < VAR_3.nr_cooling_dev; VAR_6++)
  FUNC_3(VAR_4, "#cooling devices%02d: %s\n",
   VAR_6, VAR_3.cdi[VAR_6].type);

 FUNC_3(VAR_4, "#---------- THERMAL DATA LOG STARTED -----------\n");
 FUNC_3(VAR_4, "Samples TargetTemp ");
 for (VAR_6 = 0; VAR_6 < VAR_3.nr_tz_sensor; VAR_6++) {
  FUNC_3(VAR_4, "%s%s    ", VAR_3.tzi[VAR_6].type,
   VAR_3.tzi[VAR_6].instance);
 }
 for (VAR_6 = 0; VAR_6 < VAR_3.nr_cooling_dev; VAR_6++)
  FUNC_3(VAR_4, "%s%d ", VAR_3.cdi[VAR_6].type,
   VAR_3.cdi[VAR_6].instance);

 FUNC_3(VAR_4, "\n");
}
