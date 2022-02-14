
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int cl_program ;
typedef int cl_device_id ;
typedef int cl_context ;
typedef int args ;
struct TYPE_4__ {int width; int height; int rgb_to_yuv_krnl; } ;
typedef TYPE_1__ RGBToYUVState ;


 int FUNC_0 (int ,int ,char*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (char*,int,char*,int,int,int,int,int,int) ;

void FUNC_6(RGBToYUVState* VAR_0, cl_context VAR_1, cl_device_id VAR_2, int VAR_3, int VAR_4, int VAR_5) {
  int VAR_6 = 0;
  FUNC_4(VAR_0, 0, sizeof(*VAR_0));
  FUNC_1(VAR_3 % 2 == 0);
  FUNC_1(VAR_4 % 2 == 0);
  VAR_0->width = VAR_3;
  VAR_0->height = VAR_4;
  char VAR_7[1024];
  FUNC_5(VAR_7, sizeof(VAR_7),
           "-cl-fast-relaxed-math -cl-denorms-are-zero "



           "-DWIDTH=%d -DHEIGHT=%d -DUV_WIDTH=%d -DUV_HEIGHT=%d -DRGB_STRIDE=%d -DRGB_SIZE=%d",
           VAR_3, VAR_4, VAR_3/ 2, VAR_4 / 2, VAR_5, VAR_3 * VAR_4);
  cl_program VAR_8 = FUNC_0(VAR_1, VAR_2, "transforms/rgb_to_yuv.cl", VAR_7);

  VAR_0->rgb_to_yuv_krnl = FUNC_2(VAR_8, "rgb_to_yuv", &VAR_6);
  FUNC_1(VAR_6 == 0);

  VAR_6 = FUNC_3(VAR_8);
  FUNC_1(VAR_6 == 0);
}
