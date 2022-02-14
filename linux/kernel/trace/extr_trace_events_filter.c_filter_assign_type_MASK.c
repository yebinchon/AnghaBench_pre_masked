
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const*,char) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

int FUNC_3(const char *VAR_4)
{
 if (FUNC_2(VAR_4, "__data_loc") && FUNC_2(VAR_4, "char"))
  return VAR_0;

 if (FUNC_0(VAR_4, '[') && FUNC_2(VAR_4, "char"))
  return VAR_3;

 if (FUNC_1(VAR_4, "char *") == 0 || FUNC_1(VAR_4, "const char *") == 0)
  return VAR_2;

 return VAR_1;
}
