
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PVOID ;
typedef int PDWORD ;
typedef int PCWSTR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int,int ,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__,int ,int ,int ,int *,int ,int ) ;

BOOL FUNC_4(PCWSTR VAR_5, DWORD VAR_6, PVOID VAR_7, DWORD VAR_8, PVOID * VAR_9, PDWORD VAR_10, BOOL VAR_11)
{
 BOOL VAR_12 = VAR_0;
 HANDLE VAR_13;
 VAR_13 = FUNC_1(VAR_5, VAR_1 | VAR_2, 0, ((void*)0), VAR_4, 0, ((void*)0));
 if(VAR_13 && VAR_13 != VAR_3)
 {
  VAR_12 = FUNC_3(VAR_13, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
  FUNC_0(VAR_13);
 }
 else
  FUNC_2(L"CreateFile");
 return VAR_12;
}
