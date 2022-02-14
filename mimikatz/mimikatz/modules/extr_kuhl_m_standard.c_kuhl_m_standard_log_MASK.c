
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int * PCWCHAR ;
typedef int NTSTATUS ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int *,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int,int **,char*,int *,int *) ;

NTSTATUS FUNC_3(int VAR_2, wchar_t * VAR_3[])
{
 PCWCHAR VAR_4 = (FUNC_2(VAR_2, VAR_3, L"stop", ((void*)0), ((void*)0)) ? ((void*)0) : (VAR_2 ? VAR_3[0] : VAR_0));
 FUNC_0(L"Using \'%s\' for logfile : %s\n", VAR_4, FUNC_1(VAR_4) ? L"OK" : L"KO");
 return VAR_1;
}
