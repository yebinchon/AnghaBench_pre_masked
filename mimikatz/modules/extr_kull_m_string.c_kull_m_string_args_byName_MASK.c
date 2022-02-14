
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ SIZE_T ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const*,int const*,scalar_t__) ;
 int* FUNC_1 (int const*,int) ;
 int FUNC_2 (int const*) ;

BOOL FUNC_3(const int VAR_2, const wchar_t * VAR_3[], const wchar_t * VAR_4, const wchar_t ** VAR_5, const wchar_t * VAR_6)
{
 BOOL VAR_7 = VAR_0;
 const wchar_t *VAR_8, *VAR_9;
 SIZE_T VAR_10, VAR_11 = FUNC_2(VAR_4);
 int VAR_12;
 for(VAR_12 = 0; VAR_12 < VAR_2; VAR_12++)
 {
  if((FUNC_2(VAR_3[VAR_12]) > 1) && ((VAR_3[VAR_12][0] == L'/') || (VAR_3[VAR_12][0] == L'-')))
  {
   VAR_8 = VAR_3[VAR_12] + 1;
   if(!(VAR_9 = FUNC_1(VAR_3[VAR_12], L':')))
    VAR_9 = FUNC_1(VAR_3[VAR_12], L'=');

   VAR_10 = (VAR_9) ? (VAR_9 - VAR_8) : FUNC_2(VAR_8);
   if((VAR_10 == VAR_11) && FUNC_0(VAR_4, VAR_8, VAR_10) == 0)
   {
    if(VAR_5)
    {
     if(VAR_9)
     {
      *VAR_5 = VAR_9 + 1;
      VAR_7 = *VAR_5[0] != L'\0';
     }
    }
    else
     VAR_7 = VAR_1;
    break;
   }
  }
 }
 if(!VAR_7 && VAR_5)
 {
  if(VAR_6)
  {
   *VAR_5 = VAR_6;
   VAR_7 = VAR_1;
  }
  else *VAR_5 = ((void*)0);
 }
 return VAR_7;
}
