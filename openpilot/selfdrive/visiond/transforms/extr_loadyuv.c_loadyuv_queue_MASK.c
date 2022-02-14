
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cl_mem ;
typedef int cl_int ;
typedef int cl_command_queue ;
struct TYPE_3__ {int width; int height; int loaduv_krnl; int loadys_krnl; } ;
typedef TYPE_1__ LoadYUVState ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int,int *,size_t const*,int *,int ,int ,int *) ;
 int FUNC_2 (int ,int,int,int*) ;

void FUNC_3(LoadYUVState* VAR_0, cl_command_queue VAR_1,
                   cl_mem VAR_2, cl_mem VAR_3, cl_mem VAR_4,
                   cl_mem VAR_5) {
  int VAR_6 = 0;

  VAR_6 = FUNC_2(VAR_0->loadys_krnl, 0, sizeof(cl_mem), &VAR_2);
  FUNC_0(VAR_6 == 0);
  VAR_6 = FUNC_2(VAR_0->loadys_krnl, 1, sizeof(cl_mem), &VAR_5);
  FUNC_0(VAR_6 == 0);

  const size_t VAR_7 = (VAR_0->width*VAR_0->height)/8;
  VAR_6 = FUNC_1(VAR_1, VAR_0->loadys_krnl, 1, ((void*)0),
                               &VAR_7, ((void*)0), 0, 0, ((void*)0));
  FUNC_0(VAR_6 == 0);

  const size_t VAR_8 = ((VAR_0->width/2)*(VAR_0->height/2))/8;
  cl_int VAR_9 = (VAR_0->width*VAR_0->height);

  VAR_6 = FUNC_2(VAR_0->loaduv_krnl, 0, sizeof(cl_mem), &VAR_3);
  FUNC_0(VAR_6 == 0);
  VAR_6 = FUNC_2(VAR_0->loaduv_krnl, 1, sizeof(cl_mem), &VAR_5);
  FUNC_0(VAR_6 == 0);
  VAR_6 = FUNC_2(VAR_0->loaduv_krnl, 2, sizeof(cl_int), &VAR_9);
  FUNC_0(VAR_6 == 0);

  VAR_6 = FUNC_1(VAR_1, VAR_0->loaduv_krnl, 1, ((void*)0),
                               &VAR_8, ((void*)0), 0, 0, ((void*)0));
  FUNC_0(VAR_6 == 0);

  VAR_9 += (VAR_0->width/2)*(VAR_0->height/2);

  VAR_6 = FUNC_2(VAR_0->loaduv_krnl, 0, sizeof(cl_mem), &VAR_4);
  FUNC_0(VAR_6 == 0);
  VAR_6 = FUNC_2(VAR_0->loaduv_krnl, 1, sizeof(cl_mem), &VAR_5);
  FUNC_0(VAR_6 == 0);
  VAR_6 = FUNC_2(VAR_0->loaduv_krnl, 2, sizeof(cl_int), &VAR_9);
  FUNC_0(VAR_6 == 0);

  VAR_6 = FUNC_1(VAR_1, VAR_0->loaduv_krnl, 1, ((void*)0),
                               &VAR_8, ((void*)0), 0, 0, ((void*)0));
  FUNC_0(VAR_6 == 0);
}
