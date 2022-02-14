
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* png_const_charp ;


 scalar_t__ FUNC_0 (scalar_t__*,size_t,int*,size_t*) ;

int
FUNC_1(png_const_charp VAR_0, size_t VAR_1)
{
   int VAR_2=0;
   size_t VAR_3=0;

   if (FUNC_0(VAR_0, VAR_1, &VAR_2, &VAR_3) != 0 &&
      (VAR_3 == VAR_1 || VAR_0[VAR_3] == 0))
      return VAR_2 ;

   return 0;
}
