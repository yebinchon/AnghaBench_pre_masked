
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;


 scalar_t__* FUNC_0 (size_t) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,size_t) ;

wchar_t* FUNC_2(wchar_t* VAR_0, size_t VAR_1)
{
   wchar_t *VAR_2 = FUNC_0((VAR_1 + 1) * sizeof(wchar_t));
   if (VAR_2 != ((void*)0))
   {
      FUNC_1(VAR_2, VAR_0, VAR_1*sizeof(wchar_t));
      VAR_2[VAR_1] = 0;
   }
   return VAR_2;
}
