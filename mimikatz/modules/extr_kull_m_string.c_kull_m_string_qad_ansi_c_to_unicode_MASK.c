
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
typedef int SIZE_T ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;

wchar_t * FUNC_1(const char * VAR_1, SIZE_T VAR_2)
{
 wchar_t * VAR_3 = ((void*)0);
 SIZE_T VAR_4;

 if(VAR_1 && VAR_2)
  if((VAR_3 = (wchar_t *) FUNC_0(VAR_0, (VAR_2 + 1) * sizeof(wchar_t))))
   for(VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
    VAR_3[VAR_4] = VAR_1[VAR_4];
 return VAR_3;
}
