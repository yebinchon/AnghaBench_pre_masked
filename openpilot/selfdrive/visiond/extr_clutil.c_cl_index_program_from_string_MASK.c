
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int cl_program ;
typedef int cl_device_id ;
typedef int cl_context ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,char const*,char const*,int *) ;

cl_program FUNC_2(cl_context VAR_0, cl_device_id VAR_1,
                                        const char* VAR_2, const char* VAR_3,
                                        uint64_t VAR_4) {
  uint64_t VAR_5 = 0;
  cl_program VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_5);

  FUNC_0(VAR_4, VAR_5);

  return VAR_6;
}
