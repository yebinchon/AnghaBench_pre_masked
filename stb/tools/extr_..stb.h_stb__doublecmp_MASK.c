
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

int FUNC_0(const void *VAR_1, const void *VAR_2)
{
   const double VAR_3 = *(const double *) ((const char *) VAR_1 + VAR_0);
   const double VAR_4 = *(const double *) ((const char *) VAR_2 + VAR_0);
   return VAR_3 < VAR_4 ? -1 : VAR_3 > VAR_4;
}
