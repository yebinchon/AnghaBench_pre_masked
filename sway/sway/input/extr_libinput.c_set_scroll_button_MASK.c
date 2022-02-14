
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct libinput_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct libinput_device*) ;
 scalar_t__ FUNC_1 (struct libinput_device*) ;
 int FUNC_2 (struct libinput_device*,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,scalar_t__) ;

__attribute__((used)) static bool FUNC_5(struct libinput_device *VAR_2, uint32_t VAR_3) {
 uint32_t VAR_4 = FUNC_1(VAR_2);
 if ((VAR_4 & ~VAR_0) == 0 ||
   FUNC_0(VAR_2) == VAR_3) {
  return 0;
 }
 FUNC_4(VAR_1, "scroll_set_button(%d)", VAR_3);
 FUNC_3(FUNC_2(VAR_2, VAR_3));
 return 1;
}
