
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct libinput_device {int dummy; } ;
struct TYPE_2__ {int matrix; scalar_t__ configured; } ;
struct input_config {scalar_t__ send_events; TYPE_1__ calibration_matrix; int identifier; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct libinput_device*,int ) ;
 int FUNC_1 (struct libinput_device*,scalar_t__) ;
 int FUNC_2 (int ,char*,int ,char const*) ;

__attribute__((used)) static bool FUNC_3(struct libinput_device *VAR_2,
  struct input_config *VAR_3, const char *VAR_4) {
 FUNC_2(VAR_1, "config_libinput_touch('%s' on  '%s')",
   VAR_3->identifier, VAR_4);
 bool VAR_5 = 0;
 if (VAR_3->send_events != VAR_0) {
  VAR_5 |= FUNC_1(VAR_2, VAR_3->send_events);
 }
 if (VAR_3->calibration_matrix.configured) {
  VAR_5 |= FUNC_0(VAR_2, VAR_3->calibration_matrix.matrix);
 }
 return VAR_5;
}
