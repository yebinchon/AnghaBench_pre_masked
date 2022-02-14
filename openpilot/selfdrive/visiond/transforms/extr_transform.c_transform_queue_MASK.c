
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ v; } ;
typedef TYPE_1__ mat3 ;
typedef int const cl_mem ;
typedef int cl_int ;
typedef int cl_command_queue ;
struct TYPE_8__ {int const m_y_cl; int const m_uv_cl; int krnl; } ;
typedef TYPE_2__ Transform ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int,int *,size_t const*,int *,int ,int ,int *) ;
 int FUNC_2 (int ,int const,int ,int ,int,void*,int ,int *,int *) ;
 int FUNC_3 (int ,int,int,int const*) ;
 TYPE_1__ FUNC_4 (TYPE_1__,double) ;

void FUNC_5(Transform* VAR_1,
                     cl_command_queue VAR_2,
                     cl_mem VAR_3, int VAR_4, int VAR_5,
                     cl_mem VAR_6, cl_mem VAR_7, cl_mem VAR_8,
                     int VAR_9, int VAR_10,
                     mat3 VAR_11) {
  int VAR_12 = 0;
  const int VAR_13 = 0;




  mat3 VAR_14 = VAR_11;


  mat3 VAR_15 = FUNC_4(VAR_11, 0.5);

  VAR_12 = FUNC_2(VAR_2, VAR_1->m_y_cl, VAR_0, 0, 3*3*sizeof(float), (void*)VAR_14.v, 0, ((void*)0), ((void*)0));
  FUNC_0(VAR_12 == 0);
  VAR_12 = FUNC_2(VAR_2, VAR_1->m_uv_cl, VAR_0, 0, 3*3*sizeof(float), (void*)VAR_15.v, 0, ((void*)0), ((void*)0));
  FUNC_0(VAR_12 == 0);

  const int VAR_16 = VAR_4;
  const int VAR_17 = VAR_5;
  const int VAR_18 = VAR_4/2;
  const int VAR_19 = VAR_5/2;
  const int VAR_20 = 0;
  const int VAR_21 = VAR_20 + VAR_16*VAR_17;
  const int VAR_22 = VAR_21 + VAR_18*VAR_19;

  const int VAR_23 = VAR_9;
  const int VAR_24 = VAR_10;
  const int VAR_25 = VAR_9/2;
  const int VAR_26 = VAR_10/2;

  VAR_12 = FUNC_3(VAR_1->krnl, 0, sizeof(cl_mem), &VAR_3);
  FUNC_0(VAR_12 == 0);

  VAR_12 = FUNC_3(VAR_1->krnl, 1, sizeof(cl_int), &VAR_16);
  FUNC_0(VAR_12 == 0);
  VAR_12 = FUNC_3(VAR_1->krnl, 2, sizeof(cl_int), &VAR_20);
  FUNC_0(VAR_12 == 0);
  VAR_12 = FUNC_3(VAR_1->krnl, 3, sizeof(cl_int), &VAR_17);
  FUNC_0(VAR_12 == 0);
  VAR_12 = FUNC_3(VAR_1->krnl, 4, sizeof(cl_int), &VAR_16);
  FUNC_0(VAR_12 == 0);

  VAR_12 = FUNC_3(VAR_1->krnl, 5, sizeof(cl_mem), &VAR_6);
  FUNC_0(VAR_12 == 0);

  VAR_12 = FUNC_3(VAR_1->krnl, 6, sizeof(cl_int), &VAR_23);
  FUNC_0(VAR_12 == 0);
  VAR_12 = FUNC_3(VAR_1->krnl, 7, sizeof(cl_int), &VAR_13);
  FUNC_0(VAR_12 == 0);
  VAR_12 = FUNC_3(VAR_1->krnl, 8, sizeof(cl_int), &VAR_24);
  FUNC_0(VAR_12 == 0);
  VAR_12 = FUNC_3(VAR_1->krnl, 9, sizeof(cl_int), &VAR_23);
  FUNC_0(VAR_12 == 0);

  VAR_12 = FUNC_3(VAR_1->krnl, 10, sizeof(cl_mem), &VAR_1->m_y_cl);
  FUNC_0(VAR_12 == 0);

  const size_t VAR_27[2] = {VAR_23, VAR_24};

  VAR_12 = FUNC_1(VAR_2, VAR_1->krnl, 2, ((void*)0),
                              (const size_t*)&VAR_27, ((void*)0), 0, 0, ((void*)0));
  FUNC_0(VAR_12 == 0);


  const size_t VAR_28[2] = {VAR_25, VAR_26};

  VAR_12 = FUNC_3(VAR_1->krnl, 1, sizeof(cl_int), &VAR_18);
  FUNC_0(VAR_12 == 0);
  VAR_12 = FUNC_3(VAR_1->krnl, 2, sizeof(cl_int), &VAR_21);
  FUNC_0(VAR_12 == 0);
  VAR_12 = FUNC_3(VAR_1->krnl, 3, sizeof(cl_int), &VAR_19);
  FUNC_0(VAR_12 == 0);
  VAR_12 = FUNC_3(VAR_1->krnl, 4, sizeof(cl_int), &VAR_18);
  FUNC_0(VAR_12 == 0);

  VAR_12 = FUNC_3(VAR_1->krnl, 5, sizeof(cl_mem), &VAR_7);
  FUNC_0(VAR_12 == 0);

  VAR_12 = FUNC_3(VAR_1->krnl, 6, sizeof(cl_int), &VAR_25);
  FUNC_0(VAR_12 == 0);
  VAR_12 = FUNC_3(VAR_1->krnl, 7, sizeof(cl_int), &VAR_13);
  FUNC_0(VAR_12 == 0);
  VAR_12 = FUNC_3(VAR_1->krnl, 8, sizeof(cl_int), &VAR_26);
  FUNC_0(VAR_12 == 0);
  VAR_12 = FUNC_3(VAR_1->krnl, 9, sizeof(cl_int), &VAR_25);
  FUNC_0(VAR_12 == 0);

  VAR_12 = FUNC_3(VAR_1->krnl, 10, sizeof(cl_mem), &VAR_1->m_uv_cl);
  FUNC_0(VAR_12 == 0);

  VAR_12 = FUNC_1(VAR_2, VAR_1->krnl, 2, ((void*)0),
                              (const size_t*)&VAR_28, ((void*)0), 0, 0, ((void*)0));
  FUNC_0(VAR_12 == 0);


  VAR_12 = FUNC_3(VAR_1->krnl, 2, sizeof(cl_int), &VAR_22);
  FUNC_0(VAR_12 == 0);
  VAR_12 = FUNC_3(VAR_1->krnl, 5, sizeof(cl_mem), &VAR_8);
  FUNC_0(VAR_12 == 0);


  VAR_12 = FUNC_1(VAR_2, VAR_1->krnl, 2, ((void*)0),
                              (const size_t*)&VAR_28, ((void*)0), 0, 0, ((void*)0));
  FUNC_0(VAR_12 == 0);
}
