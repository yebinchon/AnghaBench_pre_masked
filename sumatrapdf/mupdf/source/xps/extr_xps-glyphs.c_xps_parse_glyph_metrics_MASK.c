
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,float*,int*) ;

__attribute__((used)) static char *
FUNC_1(char *VAR_0, float *VAR_1, float *VAR_2, float *VAR_3, int VAR_4)
{
 int VAR_5;
 if (*VAR_0 == ',')
 {
  VAR_0 = FUNC_0(VAR_0 + 1, VAR_1, &VAR_5);
  if (VAR_5 && (VAR_4 & 1))
   *VAR_1 = -*VAR_1;
 }
 if (*VAR_0 == ',')
  VAR_0 = FUNC_0(VAR_0 + 1, VAR_2, &VAR_5);
 if (*VAR_0 == ',')
  VAR_0 = FUNC_0(VAR_0 + 1, VAR_3, &VAR_5);
 return VAR_0;
}
