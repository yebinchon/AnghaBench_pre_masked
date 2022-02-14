
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;

BOOL FUNC_3(wchar_t ** VAR_2)
{
 BOOL VAR_3 = VAR_0;
 DWORD VAR_4 = FUNC_0(0, ((void*)0));
 if((*VAR_2 = (wchar_t *) FUNC_1(VAR_1, VAR_4 * sizeof(wchar_t))))
  if(!(VAR_3 = (VAR_4 > 0 && (FUNC_0(VAR_4, *VAR_2) == VAR_4 - 1))))
   FUNC_2(*VAR_2);

 return VAR_3;
}
