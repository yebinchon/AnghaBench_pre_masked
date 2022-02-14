
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int valCount; TYPE_1__* pAVal; } ;
struct TYPE_4__ {scalar_t__ pVal; } ;
typedef int SCHEMA_PREFIX_TABLE ;
typedef scalar_t__ PVOID ;
typedef int PUSER_PROPERTIES ;
typedef int* PDWORD ;
typedef scalar_t__ PBYTE ;
typedef int LPFILETIME ;
typedef int DWORD ;
typedef TYPE_2__ ATTRVALBLOCK ;
typedef int ATTRBLOCK ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int* FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__* FUNC_2 (scalar_t__) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (scalar_t__,int,int,char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 TYPE_2__* FUNC_7 (int *,int *,int ) ;
 scalar_t__ FUNC_8 (int *,int *,int ,scalar_t__*,int*) ;
 int FUNC_9 (char*,int *,int *,int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

void FUNC_13(SCHEMA_PREFIX_TABLE *VAR_16, ATTRBLOCK *VAR_17)
{
 DWORD VAR_18 = 0, VAR_19;
 PBYTE VAR_20;
 DWORD VAR_21;
 PVOID VAR_22;
 ATTRVALBLOCK *VAR_23;

 FUNC_3(L"** SAM ACCOUNT **\n\n");
 FUNC_9(L"SAM Username         : ", VAR_16, VAR_17, VAR_9, VAR_2);
 FUNC_9(L"User Principal Name  : ", VAR_16, VAR_17, VAR_15, VAR_2);

 if(FUNC_8(VAR_16, VAR_17, VAR_10, &VAR_22, ((void*)0)))
  FUNC_3(L"Account Type         : %08x ( %s )\n", *(PDWORD) VAR_22, FUNC_6(*(PDWORD) VAR_22));

 if(FUNC_8(VAR_16, VAR_17, VAR_14, &VAR_22, ((void*)0)))
 {
  FUNC_3(L"User Account Control : %08x ( ", *(PDWORD) VAR_22);
  for(VAR_19 = 0; VAR_19 < FUNC_12(FUNC_0(VAR_1), sizeof(DWORD) * 8); VAR_19++)
   if((1 << VAR_19) & *(PDWORD) VAR_22)
    FUNC_3(L"%s ", VAR_1[VAR_19]);
  FUNC_3(L")\n");
 }

 if(FUNC_8(VAR_16, VAR_17, VAR_3, &VAR_22, ((void*)0)))
 {
  FUNC_3(L"Account expiration   : ");
  FUNC_10((LPFILETIME) VAR_22);
  FUNC_3(L"\n");
 }

 if(FUNC_8(VAR_16, VAR_17, VAR_8, &VAR_22, ((void*)0)))
 {
  FUNC_3(L"Password last change : ");
  FUNC_10((LPFILETIME) VAR_22);
  FUNC_3(L"\n");
 }

 if((VAR_23 = FUNC_7(VAR_16, VAR_17, VAR_11)))
 {
  FUNC_3(L"SID history:\n");
  for(VAR_19 = 0; VAR_19 < VAR_23->valCount; VAR_19++)
  {
   FUNC_3(L"  ");
   FUNC_11(VAR_23->pAVal[VAR_19].pVal);
   FUNC_3(L"\n");
  }
 }

 if(FUNC_8(VAR_16, VAR_17, VAR_7, &VAR_22, ((void*)0)))
 {
  FUNC_3(L"Object Security ID   : ");
  FUNC_11(VAR_22);
  FUNC_3(L"\n");
  VAR_18 = *FUNC_1(VAR_22, *FUNC_2(VAR_22) - 1);
  FUNC_3(L"Object Relative ID   : %u\n", VAR_18);

  FUNC_3(L"\nCredentials:\n");
  if(FUNC_8(VAR_16, VAR_17, VAR_13, &VAR_20, &VAR_21))
   FUNC_4(VAR_20, VAR_21, VAR_18, L"NTLM", VAR_0);
  if(FUNC_8(VAR_16, VAR_17, VAR_6, &VAR_20, &VAR_21))
   FUNC_4(VAR_20, VAR_21, VAR_18, L"ntlm", VAR_2);
  if(FUNC_8(VAR_16, VAR_17, VAR_4, &VAR_20, &VAR_21))
   FUNC_4(VAR_20, VAR_21, VAR_18, L"LM  ", VAR_0);
  if(FUNC_8(VAR_16, VAR_17, VAR_5, &VAR_20, &VAR_21))
   FUNC_4(VAR_20, VAR_21, VAR_18, L"lm  ", VAR_2);
 }

 if(FUNC_8(VAR_16, VAR_17, VAR_12, &VAR_20, &VAR_21))
 {
  FUNC_3(L"\nSupplemental Credentials:\n");
  FUNC_5((PUSER_PROPERTIES) VAR_20);
 }
}
