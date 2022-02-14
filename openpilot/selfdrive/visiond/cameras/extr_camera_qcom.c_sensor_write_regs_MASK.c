
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct msm_camera_i2c_reg_setting* setting; } ;
struct sensorb_cfg_data {TYPE_1__ cfg; int cfgtype; int member_0; } ;
struct msm_camera_i2c_reg_setting {size_t size; int data_type; int delay; int addr_type; struct msm_camera_i2c_reg_array* reg_setting; } ;
struct msm_camera_i2c_reg_array {int dummy; } ;
struct TYPE_5__ {int sensor_fd; } ;
typedef TYPE_2__ CameraState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct sensorb_cfg_data*) ;

int FUNC_1(CameraState *VAR_3, struct msm_camera_i2c_reg_array* VAR_4, size_t VAR_5, int VAR_6) {
  struct msm_camera_i2c_reg_setting VAR_7 = {
    .reg_setting = VAR_4,
    .size = VAR_5,
    .addr_type = VAR_1,
    .data_type = VAR_6,
    .delay = 0,
  };
  struct sensorb_cfg_data VAR_8 = {0};
  VAR_8.cfgtype = VAR_0;
  VAR_8.cfg.setting = &VAR_7;
  return FUNC_0(VAR_3->sensor_fd, VAR_2, &VAR_8);
}
