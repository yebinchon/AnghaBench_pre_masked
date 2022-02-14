
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libinput_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct libinput_device*,float*) ;
 int FUNC_1 (struct libinput_device*) ;
 int FUNC_2 (struct libinput_device*,float*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,float,float,float,float,float,float) ;

__attribute__((used)) static bool FUNC_5(struct libinput_device *VAR_1, float VAR_2[6]) {
 if (!FUNC_1(VAR_1)) {
  return 0;
 }
 bool VAR_3 = 0;
 float VAR_4[6];
 FUNC_0(VAR_1, VAR_4);
 for (int VAR_5 = 0; VAR_5 < 6; VAR_5++) {
  if (VAR_4[VAR_5] != VAR_2[VAR_5]) {
   VAR_3 = 1;
   break;
  }
 }
 if (VAR_3) {
  FUNC_4(VAR_0, "calibration_set_matrix(%f, %f, %f, %f, %f, %f)",
    VAR_2[0], VAR_2[1], VAR_2[2], VAR_2[3], VAR_2[4], VAR_2[5]);
  FUNC_3(FUNC_2(VAR_1, VAR_2));
 }
 return VAR_3;
}
