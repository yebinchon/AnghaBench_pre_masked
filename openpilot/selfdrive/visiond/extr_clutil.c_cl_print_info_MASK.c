
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int type ;
typedef int sz ;
typedef int str ;
typedef int cl_platform_id ;
typedef int cl_device_type ;
typedef int cl_device_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int,...) ;
 int FUNC_1 (int ,int ,int,char*,int *) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;

void FUNC_5(cl_platform_id VAR_7, cl_device_id VAR_8) {
  char VAR_9[4096];

  FUNC_1(VAR_7, VAR_6, sizeof(VAR_9), VAR_9, ((void*)0));
  FUNC_4("vendor: '%s'\n", VAR_9);

  char* VAR_10 = FUNC_3(VAR_7);
  FUNC_4("platform version: '%s'\n", VAR_10);
  FUNC_2(VAR_10);

  FUNC_1(VAR_7, VAR_5, sizeof(VAR_9), VAR_9, ((void*)0));
  FUNC_4("profile: '%s'\n", VAR_9);

  FUNC_1(VAR_7, VAR_4, sizeof(VAR_9), VAR_9, ((void*)0));
  FUNC_4("extensions: '%s'\n", VAR_9);

  FUNC_0(VAR_8, VAR_1, sizeof(VAR_9), VAR_9, ((void*)0));
  FUNC_4("name: '%s'\n", VAR_9);

  FUNC_0(VAR_8, VAR_3, sizeof(VAR_9), VAR_9, ((void*)0));
  FUNC_4("device version: '%s'\n", VAR_9);

  size_t VAR_11;
  FUNC_0(VAR_8, VAR_0, sizeof(VAR_11), &VAR_11, ((void*)0));
  FUNC_4("max work group size: %u\n", VAR_11);

  cl_device_type VAR_12;
  FUNC_0(VAR_8, VAR_2, sizeof(VAR_12), &VAR_12, ((void*)0));
  FUNC_4("type = 0x%04x = ", (unsigned int)VAR_12);
  switch(VAR_12) {
  case 129:
    FUNC_4("CL_DEVICE_TYPE_CPU\n");
    break;
  case 128:
    FUNC_4("CL_DEVICE_TYPE_GPU\n");
    break;
  case 130:
    FUNC_4("CL_DEVICE_TYPE_ACCELERATOR\n");
    break;
  default:
    FUNC_4("Other...\n" );
    break;
  }
}
