
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cl_mem ;
typedef int cl_event ;
typedef int cl_command_queue ;
struct TYPE_3__ {int width; int height; int rgb_to_yuv_krnl; } ;
typedef TYPE_1__ RGBToYUVState ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int,int *,size_t const*,int *,int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int,int *) ;
 int FUNC_4 (int,int *) ;

void FUNC_5(RGBToYUVState* VAR_0, cl_command_queue VAR_1, cl_mem VAR_2, cl_mem VAR_3) {
  int VAR_4 = 0;
  VAR_4 = FUNC_3(VAR_0->rgb_to_yuv_krnl, 0, sizeof(cl_mem), &VAR_2);
  FUNC_0(VAR_4 == 0);
  VAR_4 = FUNC_3(VAR_0->rgb_to_yuv_krnl, 1, sizeof(cl_mem), &VAR_3);
  FUNC_0(VAR_4 == 0);
  const size_t VAR_5[2] = {
    (size_t)(VAR_0->width + (VAR_0->width % 4 == 0 ? 0 : (4 - VAR_0->width % 4))) / 4,
    (size_t)(VAR_0->height + (VAR_0->height % 4 == 0 ? 0 : (4 - VAR_0->height % 4))) / 4
  };
  cl_event VAR_6;
  VAR_4 = FUNC_1(VAR_1, VAR_0->rgb_to_yuv_krnl, 2, ((void*)0), &VAR_5[0], ((void*)0), 0, 0, &VAR_6);
  FUNC_0(VAR_4 == 0);
  FUNC_4(1, &VAR_6);
  FUNC_2(VAR_6);
}
