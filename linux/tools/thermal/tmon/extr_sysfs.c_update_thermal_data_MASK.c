
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tz_name ;
struct TYPE_10__ {double t_target; } ;
struct TYPE_9__ {unsigned long cur_state; int instance; } ;
struct TYPE_8__ {int nr_tz_sensor; int nr_cooling_dev; TYPE_4__* cdi; TYPE_1__* tzi; } ;
struct TYPE_7__ {int* temp; int tv; } ;
struct TYPE_6__ {int instance; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,...) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*,int ,int) ;
 TYPE_5__ VAR_6 ;
 int FUNC_4 (TYPE_4__*,char*) ;
 TYPE_3__ VAR_7 ;
 int FUNC_5 (char*,int,char*,char*,char*,int ) ;
 int FUNC_6 (char*,char*,int*) ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ VAR_8 ;
 TYPE_2__* VAR_9 ;

int FUNC_8()
{
 int VAR_10;
 int VAR_11 = VAR_5 + 1;
 char VAR_12[256];
 static unsigned long VAR_13;

 if (!VAR_7.nr_tz_sensor) {
  FUNC_7(VAR_1, "No thermal zones found!\n");
  return -1;
 }


 if (VAR_11 >= VAR_2)
  VAR_11 = 0;
 FUNC_2(&VAR_9[VAR_11].tv, ((void*)0));
 if (VAR_8) {
  FUNC_1(VAR_8, "%lu ", ++VAR_13);
  FUNC_1(VAR_8, "%3.1f ", VAR_6.t_target);
 }
 for (VAR_10 = 0; VAR_10 < VAR_7.nr_tz_sensor; VAR_10++) {
  FUNC_3(VAR_12, 0, sizeof(VAR_12));
  FUNC_5(VAR_12, 256, "%s/%s%d", VAR_3, VAR_4,
   VAR_7.tzi[VAR_10].instance);
  FUNC_6(VAR_12, "temp",
    &VAR_9[VAR_11].temp[VAR_10]);
  if (VAR_8)
   FUNC_1(VAR_8, "%d ",
    VAR_9[VAR_11].temp[VAR_10] / 1000);
 }
 VAR_5 = VAR_11;
 for (VAR_10 = 0; VAR_10 < VAR_7.nr_cooling_dev; VAR_10++) {
  char VAR_14[256];
  unsigned long VAR_15;

  FUNC_5(VAR_14, 256, "%s/%s%d", VAR_3, VAR_0,
   VAR_7.cdi[VAR_10].instance);
  FUNC_4(&VAR_7.cdi[VAR_10], VAR_14);
  VAR_15 = VAR_7.cdi[VAR_10].cur_state;
  if (VAR_15 > 1000000)
   VAR_15 = 0;
  if (VAR_8)
   FUNC_1(VAR_8, "%lu ", VAR_15);
 }

 if (VAR_8) {
  FUNC_1(VAR_8, "\n");
  FUNC_0(VAR_8);
 }

 return 0;
}
