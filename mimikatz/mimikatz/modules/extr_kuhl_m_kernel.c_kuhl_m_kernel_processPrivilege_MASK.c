
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ ULONG ;
typedef int PCWCHAR ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__*,int) ;
 scalar_t__ FUNC_1 (int,int **,char*,int *,int *) ;
 scalar_t__ FUNC_2 (int ,int *,int ) ;

NTSTATUS FUNC_3(int VAR_2, wchar_t * VAR_3[])
{
 PCWCHAR VAR_4;
 ULONG VAR_5 = 0;

 if(FUNC_1(VAR_2, VAR_3, L"pid", &VAR_4, ((void*)0)))
  VAR_5 = FUNC_2(VAR_4, ((void*)0), 0);

 FUNC_0(VAR_0, VAR_5 ? &VAR_5 : ((void*)0), VAR_5 ? sizeof(ULONG) : 0);
 return VAR_1;
}
