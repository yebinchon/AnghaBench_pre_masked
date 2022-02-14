
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libinput_device {int dummy; } ;
typedef enum libinput_config_middle_emulation_state { ____Placeholder_libinput_config_middle_emulation_state } libinput_config_middle_emulation_state ;


 int VAR_0 ;
 int FUNC_0 (struct libinput_device*) ;
 int FUNC_1 (struct libinput_device*) ;
 int FUNC_2 (struct libinput_device*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static bool FUNC_5(struct libinput_device *VAR_1,
  enum libinput_config_middle_emulation_state VAR_2) {
 if (!FUNC_1(VAR_1) ||
   FUNC_0(VAR_1) == VAR_2) {
  return 0;
 }
 FUNC_4(VAR_0, "middle_emulation_set_enabled(%d)", VAR_2);
 FUNC_3(FUNC_2(VAR_1, VAR_2));
 return 1;
}
