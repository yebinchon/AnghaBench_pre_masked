
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_3__ {int Buffer; int Length; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef int NTSTATUS ;
typedef int * LPCWSTR ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *,TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_4 (int,int **,char*,int **,int *) ;
 int FUNC_5 (int ,int ,int) ;

NTSTATUS FUNC_6(int VAR_1, wchar_t * VAR_2[])
{
 NTSTATUS VAR_3;
 UNICODE_STRING VAR_4;
 LPCWSTR VAR_5, VAR_6 = ((void*)0);
 BOOL VAR_7 = FUNC_4(VAR_1, VAR_2, L"export", ((void*)0), ((void*)0));
 BOOL VAR_8 = FUNC_4(VAR_1, VAR_2, L"secret", ((void*)0), ((void*)0));
 if(FUNC_4(VAR_1, VAR_2, L"name", &VAR_5, ((void*)0)))
 {
  FUNC_4(VAR_1, VAR_2, L"system", &VAR_6, ((void*)0));
  VAR_3 = FUNC_3(VAR_6, VAR_5, &VAR_4, VAR_8);
  if(FUNC_1(VAR_3))
  {
   FUNC_5(VAR_4.Buffer, VAR_4.Length, 1 | (16<<16));
   FUNC_0(VAR_4.Buffer);
  }
  else FUNC_2(L"kuhl_m_lsadump_LsaRetrievePrivateData: 0x%08x\n", VAR_3);
 }
 return VAR_0;
}
