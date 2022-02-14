
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_8__ {int member_0; int dwPromptFlags; int * member_3; int * member_2; int member_1; } ;
struct TYPE_7__ {int cbData; scalar_t__ pbData; int * member_1; int member_0; } ;
typedef int PKULL_M_DPAPI_BLOB ;
typedef char* PCWSTR ;
typedef int NTSTATUS ;
typedef int DWORD ;
typedef TYPE_1__ DATA_BLOB ;
typedef TYPE_2__ CRYPTPROTECT_PROMPTSTRUCT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,char*,TYPE_1__*,int *,TYPE_2__*,int,TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int * VAR_3 ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (char*,scalar_t__,int) ;
 scalar_t__ FUNC_10 (int,int **,char*,char**,int *) ;
 int FUNC_11 (char*,scalar_t__*,int*) ;
 int FUNC_12 (scalar_t__,int,int) ;
 int FUNC_13 (char*) ;

NTSTATUS FUNC_14(int VAR_5, wchar_t * VAR_6[])
{
 DATA_BLOB VAR_7, VAR_8, VAR_9 = {0, ((void*)0)};
 PKULL_M_DPAPI_BLOB VAR_10;
 PCWSTR VAR_11 = ((void*)0), VAR_12, VAR_13;
 CRYPTPROTECT_PROMPTSTRUCT VAR_14 = {sizeof(CRYPTPROTECT_PROMPTSTRUCT), VAR_1, ((void*)0), VAR_3}, *VAR_15;
 DWORD VAR_16 = 0, VAR_17 = 1;

 FUNC_10(VAR_5, VAR_6, L"data", (PCWSTR *) &VAR_7.pbData, VAR_3);
 FUNC_10(VAR_5, VAR_6, L"description", &VAR_11, ((void*)0));
 if(FUNC_10(VAR_5, VAR_6, L"entropy", &VAR_12, ((void*)0)))
  FUNC_11(VAR_12, &VAR_9.pbData, &VAR_9.cbData);
 if(FUNC_10(VAR_5, VAR_6, L"machine", ((void*)0), ((void*)0)))
  VAR_16 |= VAR_0;
 if(FUNC_10(VAR_5, VAR_6, L"system", ((void*)0), ((void*)0)))
  VAR_16 |= VAR_2;
 VAR_15 = FUNC_10(VAR_5, VAR_6, L"prompt", ((void*)0), ((void*)0)) ? &VAR_14 : ((void*)0);

 if(FUNC_10(VAR_5, VAR_6, L"c", ((void*)0), ((void*)0)))
  VAR_17 = 2;

 FUNC_3(L"\ndata        : %s\n", VAR_7.pbData);
 FUNC_3(L"description : %s\n", VAR_11 ? VAR_11 : L"");
 FUNC_3(L"flags       : "); FUNC_8(VAR_16); FUNC_3(L"\n");
 FUNC_3(L"prompt flags: "); if(VAR_15) FUNC_7(VAR_15->dwPromptFlags); FUNC_3(L"\n");
 FUNC_3(L"entropy     : "); FUNC_12(VAR_9.pbData, VAR_9.cbData, 0); FUNC_3(L"\n\n");

 VAR_7.cbData = (DWORD) ((FUNC_13((PCWSTR) VAR_7.pbData) + 1) * sizeof(wchar_t));
 if(FUNC_0(&VAR_7, VAR_11, &VAR_9, ((void*)0), VAR_15, VAR_16, &VAR_8))
 {
  if((VAR_10 = FUNC_4(VAR_8.pbData)))
  {
   FUNC_6(0, VAR_10);
   FUNC_5(VAR_10);
  }
  FUNC_3(L"\n");
  if(FUNC_10(VAR_5, VAR_6, L"out", &VAR_13, ((void*)0)))
  {
   if(FUNC_9(VAR_13, VAR_8.pbData, VAR_8.cbData))
    FUNC_3(L"Write to file \'%s\' is OK\n", VAR_13);
  }
  else
  {
   FUNC_3(L"Blob:\n");
   FUNC_12(VAR_8.pbData, VAR_8.cbData, VAR_17 | (16 << 16));
   FUNC_3(L"\n");
  }
  FUNC_1(VAR_8.pbData);
 }
 else FUNC_2(L"CryptProtectData");

 if(VAR_9.pbData)
  FUNC_1(VAR_9.pbData);

 return VAR_4;
}
