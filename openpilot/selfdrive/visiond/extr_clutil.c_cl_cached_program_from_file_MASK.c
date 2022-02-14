
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int cl_program ;
typedef int cl_device_id ;
typedef int cl_context ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,char*,char const*,int *) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,int *) ;

cl_program FUNC_4(cl_context VAR_0, cl_device_id VAR_1, const char* VAR_2, const char* VAR_3,
                                       uint64_t *VAR_4) {
  char* VAR_5 = FUNC_3(VAR_2, ((void*)0));
  FUNC_0(VAR_5);
  cl_program VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_5, VAR_3, VAR_4);
  FUNC_2(VAR_5);
  return VAR_6;
}
