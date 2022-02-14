
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float VAR_0 ;
 float FUNC_0 (char const*,char**) ;
 int FUNC_1 (char*,char*) ;

float
FUNC_2(const char *VAR_1)
{
 char *VAR_2;
 float VAR_3;

 VAR_3 = FUNC_0(VAR_1, &VAR_2);
 if (VAR_2 == VAR_1)
  return 0;

 if (!FUNC_1(VAR_2, "deg"))
  return VAR_3;

 if (!FUNC_1(VAR_2, "grad"))
  return VAR_3 * 0.9f;

 if (!FUNC_1(VAR_2, "rad"))
  return VAR_3 * VAR_0;

 return VAR_3;
}
