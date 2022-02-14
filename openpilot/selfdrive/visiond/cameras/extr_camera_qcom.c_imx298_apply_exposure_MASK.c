
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct msm_camera_i2c_reg_array {int member_0; int member_1; int member_2; } ;
struct TYPE_4__ {double digital_gain; } ;
typedef TYPE_1__ CameraState ;


 int FUNC_0 (struct msm_camera_i2c_reg_array*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_1__*,struct msm_camera_i2c_reg_array*,int ,int ) ;

__attribute__((used)) static int FUNC_4(CameraState *VAR_1, int VAR_2, int VAR_3, int VAR_4) {
  int VAR_5;

  int VAR_6 = FUNC_2(VAR_2, 448);

  if (VAR_2 > 448) {
    VAR_1->digital_gain = (512.0/(512-(VAR_2))) / 8.0;
  } else {
    VAR_1->digital_gain = 1.0;
  }



  int VAR_7 = 0x100;

  float VAR_8[] = {0.4609375, 1.0, 0.546875};


  int VAR_9 = VAR_7 / VAR_8[1];
  int VAR_10 = VAR_7 / VAR_8[1];
  int VAR_11 = VAR_7 / VAR_8[0];
  int VAR_12 = VAR_7 / VAR_8[2];

  struct msm_camera_i2c_reg_array VAR_13[] = {

    {0x104,0x1,0},
    {0x3002,0x0,0},


    {0x340, VAR_4 >> 8, 0}, {0x341, VAR_4 & 0xff, 0},

    {0x202, VAR_3 >> 8, 0}, {0x203, VAR_3 & 0xff,0},


    {0x204, VAR_6 >> 8, 0}, {0x205, VAR_6 & 0xff,0},
    {0x104,0x0,0},
  };

  VAR_5 = FUNC_3(VAR_1, VAR_13, FUNC_0(VAR_13), VAR_0);
  if (VAR_5 != 0) {
    FUNC_1("apply_exposure err %d", VAR_5);
  }
  return VAR_5;
}
