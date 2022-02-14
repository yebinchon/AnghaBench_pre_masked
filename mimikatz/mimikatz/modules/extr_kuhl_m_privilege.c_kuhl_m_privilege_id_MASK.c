
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int NTSTATUS ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int ) ;

NTSTATUS FUNC_3(int VAR_1, wchar_t * VAR_2[])
{
 NTSTATUS VAR_3 = VAR_0;
 if(VAR_1)
  VAR_3 = FUNC_1(FUNC_2(VAR_2[0], ((void*)0), 0));
 else FUNC_0(L"Missing \'id\'\n");
 return VAR_3;
}
