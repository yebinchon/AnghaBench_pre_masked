
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mat3 ;
typedef int cl_mem ;
typedef int cl_command_queue ;
struct TYPE_3__ {int net_input_size; int net_input; int transformed_v_cl; int transformed_u_cl; int transformed_y_cl; int loadyuv; int transformed_height; int transformed_width; int transform; } ;
typedef TYPE_1__ ModelInput ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int *,int *,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *,int ,int ,int,int,int ,int ,int ,int ,int ,int ) ;

float *FUNC_4(ModelInput* VAR_2, cl_command_queue VAR_3,
                           cl_mem VAR_4, int VAR_5, int VAR_6,
                           mat3 VAR_7) {
  int VAR_8;
  int VAR_9 = 0;
  FUNC_3(&VAR_2->transform, VAR_3,
                  VAR_4, VAR_5, VAR_6,
                  VAR_2->transformed_y_cl, VAR_2->transformed_u_cl, VAR_2->transformed_v_cl,
                  VAR_2->transformed_width, VAR_2->transformed_height,
                  VAR_7);
  FUNC_2(&VAR_2->loadyuv, VAR_3,
                VAR_2->transformed_y_cl, VAR_2->transformed_u_cl, VAR_2->transformed_v_cl,
                VAR_2->net_input);
  float *VAR_10 = (float *)FUNC_0(VAR_3, VAR_2->net_input, VAR_1,
                                            VAR_0, 0, VAR_2->net_input_size,
                                            0, ((void*)0), ((void*)0), &VAR_8);
  FUNC_1(VAR_3);
  return VAR_10;
}
