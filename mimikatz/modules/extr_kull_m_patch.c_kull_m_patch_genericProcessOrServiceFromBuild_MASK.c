
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_26__ {int address; int * member_1; int * member_0; } ;
struct TYPE_18__ {int size; int kull_m_memoryAdress; } ;
struct TYPE_25__ {TYPE_1__ kull_m_memoryRange; } ;
struct TYPE_24__ {int SizeOfImage; int DllBase; } ;
struct TYPE_21__ {int off0; } ;
struct TYPE_20__ {int Length; int Pattern; } ;
struct TYPE_19__ {int Length; int Pattern; } ;
struct TYPE_23__ {TYPE_4__ Offsets; TYPE_3__ Patch; TYPE_2__ Search; } ;
struct TYPE_22__ {scalar_t__ dwCurrentState; int dwProcessId; } ;
typedef int SIZE_T ;
typedef TYPE_5__ SERVICE_STATUS_PROCESS ;
typedef TYPE_6__* PKULL_M_PATCH_GENERIC ;
typedef int PKULL_M_MEMORY_HANDLE ;
typedef int PCWSTR ;
typedef TYPE_7__ KULL_M_PROCESS_VERY_BASIC_MODULE_INFORMATION ;
typedef TYPE_8__ KULL_M_MEMORY_SEARCH ;
typedef TYPE_9__ KULL_M_MEMORY_ADDRESS ;
typedef int HANDLE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (TYPE_8__*,TYPE_9__*,int ,TYPE_9__*,int ,int ,int *,int ,int *,int *) ;
 TYPE_6__* FUNC_7 (TYPE_6__*,int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ,TYPE_7__*) ;
 scalar_t__ FUNC_9 (int ,TYPE_5__*) ;

BOOL FUNC_10(PKULL_M_PATCH_GENERIC VAR_9, SIZE_T VAR_10, PCWSTR VAR_11, PCWSTR VAR_12, BOOL VAR_13)
{
 BOOL VAR_14 = VAR_0;
 SERVICE_STATUS_PROCESS VAR_15;
 PKULL_M_MEMORY_HANDLE VAR_16;
 KULL_M_PROCESS_VERY_BASIC_MODULE_INFORMATION VAR_17;
 HANDLE VAR_18;
 KULL_M_MEMORY_ADDRESS
  VAR_19 = {((void*)0), &VAR_1},
  VAR_20 = {((void*)0), &VAR_1};
 KULL_M_MEMORY_SEARCH VAR_21;

 PKULL_M_PATCH_GENERIC VAR_22;

 if((VAR_22 = FUNC_7(VAR_9, VAR_10, VAR_3)))
 {
  VAR_19.address = VAR_22->Search.Pattern;
  VAR_20.address = VAR_22->Patch.Pattern;
  if(FUNC_9(VAR_11, &VAR_15))
  {
   if(VAR_15.dwCurrentState >= VAR_8)
   {
    if((VAR_18 = FUNC_0(VAR_6 | VAR_7 | VAR_5 | VAR_4, VAR_0, VAR_15.dwProcessId)))
    {
     if(FUNC_5(VAR_2, VAR_18, &VAR_16))
     {
      if(FUNC_8(VAR_16, VAR_12, &VAR_17))
      {
       VAR_21.kull_m_memoryRange.kull_m_memoryAdress = VAR_17.DllBase;
       VAR_21.kull_m_memoryRange.size = VAR_17.SizeOfImage;

       if((VAR_14 = FUNC_6(&VAR_21, &VAR_19, VAR_22->Search.Length, &VAR_20, VAR_22->Patch.Length, VAR_22->Offsets.off0, ((void*)0), 0, ((void*)0), ((void*)0))))
        FUNC_3(L"\"%s\" service patched\n", VAR_11);
       else
        FUNC_2(L"kull_m_patch");
      } else FUNC_2(L"kull_m_process_getVeryBasicModuleInformationsForName");
      FUNC_4(VAR_16);
     }
    } else FUNC_2(L"OpenProcess");
   } else FUNC_1(L"Service is not running\n");
  } else FUNC_2(L"kull_m_service_getUniqueForName");
 } else FUNC_1(L"Incorrect version in references\n");

 return VAR_14;
}
