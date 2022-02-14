
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_camera_i2c_reg_array {int member_0; int member_1; int member_2; } ;
typedef int CameraState ;


 int FUNC_0 (struct msm_camera_i2c_reg_array*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,struct msm_camera_i2c_reg_array*,int ,int ) ;

__attribute__((used)) static int FUNC_4(CameraState *VAR_1, int VAR_2, int VAR_3, int VAR_4) {

  int VAR_5, VAR_6;
  VAR_6 = (1 << FUNC_2(VAR_2)) - 1;
  VAR_3 *= 16;
  struct msm_camera_i2c_reg_array VAR_7[] = {



    {0x380e, VAR_4 >> 8, 0}, {0x380f, VAR_4 & 0xff, 0},

    {0x3500, VAR_3 >> 16, 0}, {0x3501, VAR_3 >> 8, 0}, {0x3502, VAR_3 & 0xff,0},

    {0x3503, 0x4, 0},

    {0x3508, VAR_6, 0}, {0x3509, 0xf8, 0},


  };
  VAR_5 = FUNC_3(VAR_1, VAR_7, FUNC_0(VAR_7), VAR_0);
  if (VAR_5 != 0) {
    FUNC_1("apply_exposure err %d", VAR_5);
  }
  return VAR_5;
}
