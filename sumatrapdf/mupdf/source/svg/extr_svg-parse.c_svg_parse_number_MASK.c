
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char*) ;

float
FUNC_2(const char *VAR_0, float VAR_1, float VAR_2, float VAR_3)
{
 float VAR_4;
 if (!FUNC_1(VAR_0, "inherit"))
  return VAR_3;
 VAR_4 = FUNC_0(VAR_0);
 if (VAR_4 < VAR_1) return VAR_1;
 if (VAR_4 > VAR_2) return VAR_2;
 return VAR_4;
}
