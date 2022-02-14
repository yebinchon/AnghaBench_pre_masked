
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

int FUNC_0(const void *VAR_1, const void *VAR_2)
{
   const float VAR_3 = *(const float *) ((const char *) VAR_1 + VAR_0);
   const float VAR_4 = *(const float *) ((const char *) VAR_2 + VAR_0);
   return VAR_3 < VAR_4 ? -1 : VAR_3 > VAR_4;
}
