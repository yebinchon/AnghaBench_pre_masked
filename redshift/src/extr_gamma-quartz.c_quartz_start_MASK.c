
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int display_count; TYPE_1__* displays; } ;
typedef TYPE_2__ quartz_state_t ;
typedef int quartz_display_state_t ;
struct TYPE_4__ {float* saved_ramps; int ramp_size; int display; } ;
typedef scalar_t__ CGError ;
typedef int CGDirectDisplayID ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int,float*,float*,float*,int*) ;
 scalar_t__ FUNC_2 (int,int *,int*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_0 ;
 void* FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_9(quartz_state_t *VAR_2)
{
 CGError VAR_3;
 uint32_t VAR_4;


 VAR_3 = FUNC_2(0, ((void*)0), &VAR_4);
 if (VAR_3 != VAR_0) return -1;

 VAR_2->display_count = VAR_4;

 CGDirectDisplayID* VAR_5 =
  FUNC_7(sizeof(CGDirectDisplayID)*VAR_4);
 if (VAR_5 == ((void*)0)) {
  FUNC_8("malloc");
  return -1;
 }


 VAR_3 = FUNC_2(VAR_4, VAR_5,
           &VAR_4);
 if (VAR_3 != VAR_0) {
  FUNC_6(VAR_5);
  return -1;
 }


 VAR_2->displays = FUNC_7(VAR_4 *
     sizeof(quartz_display_state_t));
 if (VAR_2->displays == ((void*)0)) {
  FUNC_8("malloc");
  FUNC_6(VAR_5);
  return -1;
 }


 for (int VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_2->displays[VAR_6].display = VAR_5[VAR_6];
  VAR_2->displays[VAR_6].saved_ramps = ((void*)0);
 }

 FUNC_6(VAR_5);


 for (int VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  CGDirectDisplayID VAR_8 = VAR_2->displays[VAR_7].display;

  uint32_t VAR_9 = FUNC_0(VAR_8);
  if (VAR_9 == 0) {
   FUNC_4(VAR_1, FUNC_3("Gamma ramp size too small: %i\n"),
    VAR_9);
   return -1;
  }

  VAR_2->displays[VAR_7].ramp_size = VAR_9;


  VAR_2->displays[VAR_7].saved_ramps =
   FUNC_7(3 * VAR_9 * sizeof(float));
  if (VAR_2->displays[VAR_7].saved_ramps == ((void*)0)) {
   FUNC_8("malloc");
   return -1;
  }

  float *VAR_10 = &VAR_2->displays[VAR_7].saved_ramps[0*VAR_9];
  float *VAR_11 = &VAR_2->displays[VAR_7].saved_ramps[1*VAR_9];
  float *VAR_12 = &VAR_2->displays[VAR_7].saved_ramps[2*VAR_9];


  uint32_t VAR_13;
  VAR_3 = FUNC_1(VAR_8, VAR_9,
          VAR_10, VAR_11, VAR_12,
          &VAR_13);
  if (VAR_3 != VAR_0 ||
      VAR_13 != VAR_9) {
   FUNC_5(FUNC_3("Unable to save current gamma ramp.\n"),
         VAR_1);
   return -1;
  }
 }

 return 0;
}
