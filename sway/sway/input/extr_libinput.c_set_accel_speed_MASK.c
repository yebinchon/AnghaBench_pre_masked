
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libinput_device {int dummy; } ;


 int VAR_0 ;
 double FUNC_0 (struct libinput_device*) ;
 int FUNC_1 (struct libinput_device*) ;
 int FUNC_2 (struct libinput_device*,double) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,double) ;

__attribute__((used)) static bool FUNC_5(struct libinput_device *VAR_1, double VAR_2) {
 if (!FUNC_1(VAR_1) ||
   FUNC_0(VAR_1) == VAR_2) {
  return 0;
 }
 FUNC_4(VAR_0, "accel_set_speed(%f)", VAR_2);
 FUNC_3(FUNC_2(VAR_1, VAR_2));
 return 1;
}
