
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int cl_program ;
typedef int cl_device_id ;
typedef int cl_context ;
struct TYPE_4__ {void* m_uv_cl; void* m_y_cl; int krnl; } ;
typedef TYPE_1__ Transform ;


 int FUNC_0 (int ,int ,char*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int ,int ,int,int *,int*) ;
 int FUNC_3 (int ,char*,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

void FUNC_6(Transform* VAR_1, cl_context VAR_2, cl_device_id VAR_3) {
  int VAR_4 = 0;
  FUNC_5(VAR_1, 0, sizeof(*VAR_1));

  cl_program VAR_5 = FUNC_0(VAR_2, VAR_3, "transforms/transform.cl", "");

  VAR_1->krnl = FUNC_3(VAR_5, "warpPerspective", &VAR_4);
  FUNC_1(VAR_4 == 0);


  VAR_4 = FUNC_4(VAR_5);
  FUNC_1(VAR_4 == 0);

  VAR_1->m_y_cl = FUNC_2(VAR_2, VAR_0, 3*3*sizeof(float), ((void*)0), &VAR_4);
  FUNC_1(VAR_4 == 0);

  VAR_1->m_uv_cl = FUNC_2(VAR_2, VAR_0, 3*3*sizeof(float), ((void*)0), &VAR_4);
  FUNC_1(VAR_4 == 0);
}
