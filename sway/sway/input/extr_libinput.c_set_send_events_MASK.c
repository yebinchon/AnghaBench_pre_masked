
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct libinput_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct libinput_device*) ;
 int FUNC_1 (struct libinput_device*,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,scalar_t__) ;

__attribute__((used)) static bool FUNC_4(struct libinput_device *VAR_1, uint32_t VAR_2) {
 if (FUNC_0(VAR_1) == VAR_2) {
  return 0;
 }
 FUNC_3(VAR_0, "send_events_set_mode(%d)", VAR_2);
 FUNC_2(FUNC_1(VAR_1, VAR_2));
 return 1;
}
