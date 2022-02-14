
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ExecStatusType ;


 char* FUNC_0 (char*) ;
 char** VAR_0 ;

char *
FUNC_1(ExecStatusType VAR_1)
{
 if ((unsigned int) VAR_1 >= sizeof VAR_0 / sizeof VAR_0[0])
  return FUNC_0("invalid ExecStatusType code");
 return VAR_0[VAR_1];
}
