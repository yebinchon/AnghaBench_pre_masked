
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum libinput_config_status { ____Placeholder_libinput_config_status } libinput_config_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_2(enum libinput_config_status VAR_2) {
 if (VAR_2 != VAR_0) {
  FUNC_1(VAR_1, "Failed to apply libinput config: %s",
   FUNC_0(VAR_2));
 }
}
