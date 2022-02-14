
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HWND ;
typedef scalar_t__ DWORD ;


 int * FUNC_0 (int *,int *,int *,int *) ;
 int FUNC_1 (int *,scalar_t__*) ;

HWND FUNC_2(HWND VAR_0)
{
 DWORD VAR_1 = 0;
 HWND VAR_2;

 FUNC_1(VAR_0, &VAR_1);
 VAR_2 = FUNC_0(VAR_0, ((void*)0), ((void*)0), ((void*)0));

 while (VAR_2) {
  DWORD VAR_3 = 0;
  FUNC_1(VAR_2, &VAR_3);

  if (VAR_3 != VAR_1)
   return VAR_2;

  VAR_2 = FUNC_0(VAR_0, VAR_2, ((void*)0), ((void*)0));
 }

 return ((void*)0);
}
