
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int cl_program ;
typedef int cl_device_id ;
typedef int cl_context ;
typedef int args ;
struct TYPE_4__ {int width; int height; void* loaduv_krnl; void* loadys_krnl; } ;
typedef TYPE_1__ LoadYUVState ;


 int FUNC_0 (int ,int ,char*,char*) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int ,char*,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (char*,int,char*,int,int) ;

void FUNC_6(LoadYUVState* VAR_0, cl_context VAR_1, cl_device_id VAR_2, int VAR_3, int VAR_4) {
  int VAR_5 = 0;
  FUNC_4(VAR_0, 0, sizeof(*VAR_0));

  VAR_0->width = VAR_3;
  VAR_0->height = VAR_4;

  char VAR_6[1024];
  FUNC_5(VAR_6, sizeof(VAR_6),
           "-cl-fast-relaxed-math -cl-denorms-are-zero "
           "-DTRANSFORMED_WIDTH=%d -DTRANSFORMED_HEIGHT=%d",
           VAR_3, VAR_4);
  cl_program VAR_7 = FUNC_0(VAR_1, VAR_2, "transforms/loadyuv.cl", VAR_6);

  VAR_0->loadys_krnl = FUNC_2(VAR_7, "loadys", &VAR_5);
  FUNC_1(VAR_5 == 0);
  VAR_0->loaduv_krnl = FUNC_2(VAR_7, "loaduv", &VAR_5);
  FUNC_1(VAR_5 == 0);


  VAR_5 = FUNC_3(VAR_7);
  FUNC_1(VAR_5 == 0);
}
