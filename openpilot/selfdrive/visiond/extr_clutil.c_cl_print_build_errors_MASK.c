
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cl_program ;
typedef int cl_device_id ;
typedef int cl_build_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t,int) ;
 int FUNC_2 (int ,int ,int ,size_t,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,char*) ;

void FUNC_5(cl_program VAR_2, cl_device_id VAR_3) {
  cl_build_status VAR_4;
  FUNC_2(VAR_2, VAR_3, VAR_1,
          sizeof(cl_build_status), &VAR_4, ((void*)0));

  size_t VAR_5;
  FUNC_2(VAR_2, VAR_3,
          VAR_0, 0, ((void*)0), &VAR_5);

  char* VAR_6 = FUNC_1(VAR_5+1, 1);
  FUNC_0(VAR_6);

  FUNC_2(VAR_2, VAR_3,
          VAR_0, VAR_5+1, VAR_6, ((void*)0));

  FUNC_4("build failed; status=%d, log:\n%s\n",
          VAR_4, VAR_6);

  FUNC_3(VAR_6);
}
