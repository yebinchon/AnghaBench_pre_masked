
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int * PWCHAR ;
typedef scalar_t__ PCWCHAR ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__,int *,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int *) ;

PWCHAR FUNC_3(PCWCHAR VAR_1)
{
 PWCHAR VAR_2 = ((void*)0);
 DWORD VAR_3;
 if(VAR_1)
  if((VAR_3 = FUNC_0(VAR_1, ((void*)0), 0)))
   if((VAR_2 = (PWCHAR) FUNC_1(VAR_0, VAR_3 * sizeof(wchar_t))))
    if(VAR_3 != FUNC_0(VAR_1, VAR_2, VAR_3))
     VAR_2 = (PWCHAR) FUNC_2(VAR_2);
 return VAR_2;
}
