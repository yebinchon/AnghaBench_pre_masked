
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int wchar_t ;
typedef int UNICODE_STRING ;
struct TYPE_10__ {int dwFlag; } ;
struct TYPE_8__ {int dwFlag; int usnTimeChanged; int usnOriginating; int uidOriginatingDsa; } ;
struct TYPE_9__ {TYPE_1__ MetaData; } ;
typedef TYPE_2__* PDCSHADOW_PUSH_REQUEST_OBJECT_ATTRIBUTE ;
typedef TYPE_3__* PDCSHADOW_PUSH_REQUEST_OBJECT ;
typedef int PDCSHADOW_PUSH_REQUEST ;
typedef int NTSTATUS ;
typedef int * LPCWSTR ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int *,TYPE_3__*,TYPE_2__**) ;
 scalar_t__ FUNC_6 (int ,int *,TYPE_3__**) ;
 scalar_t__ FUNC_7 (int *,TYPE_2__*,scalar_t__) ;
 int FUNC_8 (int ,int *,int *) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int,int **,char*,int **,int *) ;
 scalar_t__ FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *,int ) ;

NTSTATUS FUNC_13(PDCSHADOW_PUSH_REQUEST VAR_5, int VAR_6, wchar_t * VAR_7[])
{
 LPCWSTR VAR_8, VAR_9, VAR_10 = ((void*)0), VAR_11 = ((void*)0), VAR_12 = ((void*)0), VAR_13 = ((void*)0), VAR_14 = ((void*)0);
 PDCSHADOW_PUSH_REQUEST_OBJECT VAR_15;
 PDCSHADOW_PUSH_REQUEST_OBJECT_ATTRIBUTE VAR_16;
 BOOL VAR_17 = FUNC_10(VAR_6, VAR_7, L"clean", ((void*)0), ((void*)0)), VAR_18 = FUNC_10(VAR_6, VAR_7, L"multiple", ((void*)0), ((void*)0));
 UNICODE_STRING VAR_19;

 if(FUNC_10(VAR_6, VAR_7, L"object", &VAR_8, ((void*)0)))
 {
  if(FUNC_10(VAR_6, VAR_7, L"attribute", &VAR_9, ((void*)0)))
  {
   if(FUNC_10(VAR_6, VAR_7, L"value", &VAR_10, ((void*)0)))
   {
    if(FUNC_6(VAR_5, VAR_8, &VAR_15))
    {
     if(FUNC_5(VAR_5, VAR_9, VAR_15, &VAR_16))
     {
      if(FUNC_7(VAR_10, VAR_16, VAR_18))
      {
       if(FUNC_10(VAR_6, VAR_7, L"replOriginatingUid", &VAR_12, ((void*)0)))
       {
        FUNC_3(&VAR_19, VAR_12);
        if(FUNC_0(FUNC_2(&VAR_19, &(VAR_16->MetaData.uidOriginatingDsa))))
         VAR_16->MetaData.dwFlag |= VAR_3;
        else FUNC_1(L"unable parse replOriginatingUid\n");
       }
       if(FUNC_10(VAR_6, VAR_7, L"replOriginatingUsn", &VAR_13, ((void*)0)))
       {
        VAR_16->MetaData.usnOriginating = FUNC_12(VAR_13, ((void*)0), 0);
        VAR_16->MetaData.dwFlag |= VAR_4;
       }
       if(FUNC_10(VAR_6, VAR_7, L"replOriginatingTime", &VAR_14, ((void*)0)))
       {
        if(FUNC_11(VAR_14, &VAR_16->MetaData.usnTimeChanged))
         VAR_16->MetaData.dwFlag |= VAR_2;
        else FUNC_1(L"unable parse replOriginatingTime\n");
       }
       if(FUNC_10(VAR_6, VAR_7, L"dynamic", ((void*)0), ((void*)0)))
       {
        VAR_15->dwFlag |= VAR_1;
       }
      }
      else FUNC_1(L"unable to set value\n");
     }
     else FUNC_1(L"unable to add attribute\n");
    }
    else FUNC_1(L"unable to add object\n");
   }
   else if(VAR_17)
   {
    if(!FUNC_8(VAR_5, VAR_8, VAR_9))
     FUNC_1(L"object or attribute not found\n");
   }
   else FUNC_1(L"value missing\n");
  }
  else if(VAR_17)
  {
   if(!FUNC_9(VAR_5, VAR_8))
    FUNC_1(L"object not found\n");
  }
  else FUNC_1(L"attribute missing\n");
 }
 else
 {
  if(VAR_17)
   FUNC_4(VAR_5);
  else FUNC_1(L"object missing\n");
 }
 return VAR_0;
}
