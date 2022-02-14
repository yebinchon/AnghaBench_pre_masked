
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cl_device_id ;
typedef int cl_context ;
struct TYPE_3__ {int transformed_width; int transformed_height; int net_input_size; int loadyuv; int context; void* net_input; void* transformed_v_cl; void* transformed_u_cl; void* transformed_y_cl; int transform; int device_id; } ;
typedef TYPE_1__ ModelInput ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int ,int ,int,void*,int*) ;
 int FUNC_2 (int *,int ,int ,int,int) ;
 int FUNC_3 (int *,int ,int ) ;

void FUNC_4(ModelInput* VAR_1, int VAR_2, int VAR_3,
                      cl_device_id VAR_4, cl_context VAR_5) {
  int VAR_6;
  VAR_1->device_id = VAR_4;
  VAR_1->context = VAR_5;

  FUNC_3(&VAR_1->transform, VAR_5, VAR_4);
  VAR_1->transformed_width = VAR_2;
  VAR_1->transformed_height = VAR_3;

  VAR_1->transformed_y_cl = FUNC_1(VAR_1->context, VAR_0,
                                       VAR_1->transformed_width*VAR_1->transformed_height, ((void*)0), &VAR_6);
  FUNC_0(VAR_6 == 0);
  VAR_1->transformed_u_cl = FUNC_1(VAR_1->context, VAR_0,
                                       (VAR_1->transformed_width/2)*(VAR_1->transformed_height/2), ((void*)0), &VAR_6);
  FUNC_0(VAR_6 == 0);
  VAR_1->transformed_v_cl = FUNC_1(VAR_1->context, VAR_0,
                                       (VAR_1->transformed_width/2)*(VAR_1->transformed_height/2), ((void*)0), &VAR_6);
  FUNC_0(VAR_6 == 0);

  VAR_1->net_input_size = ((VAR_2*VAR_3*3)/2)*sizeof(float);
  VAR_1->net_input = FUNC_1(VAR_1->context, VAR_0,
                                VAR_1->net_input_size, (void*)((void*)0), &VAR_6);
  FUNC_0(VAR_6 == 0);

  FUNC_2(&VAR_1->loadyuv, VAR_5, VAR_4, VAR_1->transformed_width, VAR_1->transformed_height);
}
