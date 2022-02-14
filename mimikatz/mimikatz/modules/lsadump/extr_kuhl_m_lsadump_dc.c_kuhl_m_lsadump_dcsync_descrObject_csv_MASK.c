
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SCHEMA_PREFIX_TABLE ;
typedef int PVOID ;
typedef int PBYTE ;
typedef int DWORD ;
typedef int BYTE ;
typedef int ATTRBLOCK ;


 int VAR_0 ;
 int * FUNC_0 (int ,scalar_t__) ;
 scalar_t__* FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (int *,int *,int ,int *,int *) ;
 int FUNC_7 (int *,int *,int *,int ,int ) ;
 int FUNC_8 (int *,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_9(SCHEMA_PREFIX_TABLE *VAR_5, ATTRBLOCK *VAR_6)
{
 DWORD VAR_7 = 0;
 PBYTE VAR_8;
 DWORD VAR_9;
 PVOID VAR_10;
 BYTE VAR_11[VAR_1];
 if(FUNC_6(VAR_5, VAR_6, VAR_3, ((void*)0), ((void*)0)) &&
  FUNC_6(VAR_5, VAR_6, VAR_2, &VAR_10, ((void*)0)) &&
  FUNC_6(VAR_5, VAR_6, VAR_4, &VAR_8, &VAR_9))
 {
  VAR_7 = *FUNC_0(VAR_10, *FUNC_1(VAR_10) - 1);
  FUNC_5(L"%u\t", VAR_7);
  FUNC_7(((void*)0), VAR_5, VAR_6, VAR_3, VAR_0);
  FUNC_5(L"\t");
  if(FUNC_2(FUNC_4(VAR_8, &VAR_7, VAR_11)))
   FUNC_8(VAR_11, VAR_1, 0);
  else FUNC_3(L"RtlDecryptDES2blocks1DWORD");
  FUNC_5(L"\n");
 }
}
