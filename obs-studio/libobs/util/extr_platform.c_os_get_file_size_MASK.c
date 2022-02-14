
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;

int64_t FUNC_3(const char *VAR_0)
{
 FILE *VAR_1 = FUNC_2(VAR_0, "rb");
 if (!VAR_1)
  return -1;

 int64_t VAR_2 = FUNC_1(VAR_1);
 FUNC_0(VAR_1);

 return VAR_2;
}
