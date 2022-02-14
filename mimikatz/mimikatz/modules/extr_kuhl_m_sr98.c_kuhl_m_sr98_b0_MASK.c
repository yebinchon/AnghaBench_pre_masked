
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int * PCWCHAR ;
typedef int NTSTATUS ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int **,char*,int **,int *) ;
 int FUNC_3 (int *,int *,int ) ;

NTSTATUS FUNC_4(int VAR_1, wchar_t * VAR_2[])
{
 PCWCHAR VAR_3;
 if(VAR_1)
 {
  if(!FUNC_2(VAR_1, VAR_2, L"b0", &VAR_3, ((void*)0)))
   VAR_3 = VAR_2[0];
  FUNC_1(FUNC_3(VAR_3, ((void*)0), 0));
 }
 else FUNC_0(L"[/b0:]0x........ argument is needed\n");
 return VAR_0;
}
