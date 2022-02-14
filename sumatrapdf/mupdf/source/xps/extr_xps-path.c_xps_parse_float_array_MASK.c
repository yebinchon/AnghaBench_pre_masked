
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xps_document ;
typedef int fz_context ;


 float FUNC_0 (char*,char**) ;

__attribute__((used)) static char *
FUNC_1(fz_context *VAR_0, xps_document *VAR_1, char *VAR_2, int VAR_3, float *VAR_4)
{
 int VAR_5 = 0;

 if (VAR_2 == ((void*)0) || *VAR_2 == 0)
  return ((void*)0);

 while (*VAR_2)
 {
  while (*VAR_2 == 0x0d || *VAR_2 == '\t' || *VAR_2 == ' ' || *VAR_2 == 0x0a)
   VAR_2++;
  VAR_4[VAR_5] = FUNC_0(VAR_2, &VAR_2);
  while (*VAR_2 == 0x0d || *VAR_2 == '\t' || *VAR_2 == ' ' || *VAR_2 == 0x0a)
   VAR_2++;
  if (*VAR_2 == ',')
   VAR_2++;
  if (++VAR_5 == VAR_3)
   break;
 }
 return VAR_2;
}
