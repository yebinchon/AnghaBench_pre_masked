
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int wchar_t ;
typedef int passwordHash ;
typedef int derivedkey ;
struct TYPE_16__ {int guid; } ;
struct TYPE_19__ {int * pSid; TYPE_3__ header; } ;
struct TYPE_15__ {int flags; int * sha1hashDerived; } ;
struct TYPE_18__ {TYPE_2__ data; } ;
struct TYPE_14__ {int guid; } ;
struct TYPE_17__ {int __dwCount; TYPE_6__** entries; TYPE_1__ current; } ;
typedef int * PWSTR ;
typedef int * PSID ;
typedef TYPE_4__* PKULL_M_DPAPI_CREDHIST ;
typedef TYPE_5__* PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY ;
typedef int * PBYTE ;
typedef int NTSTATUS ;
typedef int * LPCWSTR ;
typedef int * LPCGUID ;
typedef int DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int **) ;
 scalar_t__ FUNC_1 (int *,int **) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (TYPE_6__*,int *,int *) ;
 int FUNC_7 (int *,int *,int *,int *,int *,int *) ;
 int FUNC_8 (TYPE_5__*,int *) ;
 int FUNC_9 (TYPE_5__*) ;
 TYPE_5__* FUNC_10 (int *,int *) ;
 scalar_t__ FUNC_11 (int ,int *,int,int *,int) ;
 scalar_t__ FUNC_12 (int ,int *,int,int *,int,int *,int) ;
 TYPE_4__* FUNC_13 (int *,int) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (int ,TYPE_4__*) ;
 scalar_t__ FUNC_16 (TYPE_6__*,int *,int,int *,int *) ;
 scalar_t__ FUNC_17 (int *,int **,int*) ;
 scalar_t__ FUNC_18 (int,int **,char*,int **,int *) ;
 scalar_t__ FUNC_19 (int *,int *,int) ;
 int FUNC_20 (int *,int,int ) ;
 scalar_t__ FUNC_21 (int *) ;

NTSTATUS FUNC_22(int VAR_6, wchar_t * VAR_7[])
{
 PBYTE VAR_8;
 DWORD VAR_9, VAR_10;
 LPCWSTR VAR_11 = ((void*)0), VAR_12 = ((void*)0), VAR_13 = ((void*)0), VAR_14 = ((void*)0);
 PWSTR VAR_15 = ((void*)0);
 PSID VAR_16 = ((void*)0), VAR_17 = ((void*)0);
 LPCGUID VAR_18;
 PKULL_M_DPAPI_CREDHIST VAR_19;
 PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY VAR_20 = ((void*)0);
 BYTE VAR_21[VAR_4], VAR_22[VAR_4], VAR_23[VAR_4], VAR_24[VAR_3];
 BOOL VAR_25 = VAR_1;

 if(FUNC_18(VAR_6, VAR_7, L"in", &VAR_11, ((void*)0)))
 {
  if(FUNC_17(VAR_11, &VAR_8, &VAR_9))
  {
   if((VAR_19 = FUNC_13(VAR_8, VAR_9)))
   {
    FUNC_15(0, VAR_19);

    if(FUNC_18(VAR_6, VAR_7, L"sid", &VAR_12, ((void*)0)))
    {
     if(FUNC_1(VAR_12, &VAR_16))
      VAR_17 = VAR_16;
     else FUNC_4(L"ConvertStringSidToSid");
    }

    if(FUNC_18(VAR_6, VAR_7, L"password", &VAR_14, ((void*)0)))
     VAR_25 = FUNC_11(VAR_0, VAR_14, (DWORD) FUNC_21(VAR_14) * sizeof(wchar_t), VAR_21, sizeof(VAR_21));
    else if(FUNC_18(VAR_6, VAR_7, L"sha1", &VAR_13, ((void*)0)))
     VAR_25 = FUNC_19(VAR_13, VAR_21, sizeof(VAR_21));

    VAR_18 = &VAR_19->current.guid;
    if(!VAR_17 && VAR_19->__dwCount)
     VAR_17 = VAR_19->entries[0]->pSid;

    for(VAR_10 = 0; VAR_17 && (VAR_10 < VAR_19->__dwCount); VAR_10++)
    {
     if(FUNC_0(VAR_17, &VAR_15))
     {
      VAR_20 = FUNC_10(((void*)0), VAR_18);
      if(!VAR_20)
       VAR_20 = FUNC_10(VAR_15, ((void*)0));
      if(VAR_20 && (VAR_20->data.flags & VAR_2))
      {
       FUNC_5(L"\n  [entry %u] with volatile cache: ", VAR_10); FUNC_9(VAR_20);
       if(FUNC_16(VAR_19->entries[VAR_10], VAR_20->data.sha1hashDerived, sizeof(VAR_20->data.sha1hashDerived), VAR_24, VAR_23))
       {
        FUNC_8(VAR_20, VAR_18);
        FUNC_6(VAR_19->entries[VAR_10], VAR_24, VAR_23);
       }
      }
      else if(VAR_25)
      {
       FUNC_5(L"\n  [entry %u] with SHA1 and SID: ", VAR_10); FUNC_20(VAR_21, sizeof(VAR_21), 0); FUNC_5(L"\n");
       if(FUNC_12(VAR_0, VAR_21, sizeof(VAR_21), VAR_15, (DWORD) (FUNC_21(VAR_15) + 1) * sizeof(wchar_t), VAR_22, sizeof(VAR_22)))
        if(FUNC_16(VAR_19->entries[VAR_10], VAR_22, sizeof(VAR_22), VAR_24, VAR_23))
        {
         FUNC_7(VAR_15, VAR_18, ((void*)0), VAR_21, ((void*)0), VAR_14);
         FUNC_6(VAR_19->entries[VAR_10], VAR_24, VAR_23);
        }
      }
      FUNC_2(VAR_15);
     }
     VAR_18 = &VAR_19->entries[VAR_10]->header.guid;
     VAR_17 = VAR_19->entries[VAR_10]->pSid;
    }

    if(VAR_16)
     FUNC_2(VAR_16);

    FUNC_14(VAR_19);
   }
   FUNC_2(VAR_8);
  }
 }
 else FUNC_3(L"Input credhist file needed (/in:file)\n");
 return VAR_5;
}
