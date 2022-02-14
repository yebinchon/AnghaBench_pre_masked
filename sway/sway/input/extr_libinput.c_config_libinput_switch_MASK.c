
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libinput_device {int dummy; } ;
struct input_config {scalar_t__ send_events; int identifier; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct libinput_device*,scalar_t__) ;
 int FUNC_1 (int ,char*,int ,char const*) ;

__attribute__((used)) static bool FUNC_2(struct libinput_device *VAR_2,
  struct input_config *VAR_3, const char *VAR_4) {
 FUNC_1(VAR_1, "config_libinput_switch('%s' on  '%s')",
   VAR_3->identifier, VAR_4);
 if (VAR_3->send_events != VAR_0) {
  return FUNC_0(VAR_2, VAR_3->send_events);
 }
 return 0;
}
