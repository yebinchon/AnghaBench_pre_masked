
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int wchar_t ;
struct TYPE_22__ {scalar_t__ address; } ;
struct TYPE_27__ {TYPE_4__ DllBase; scalar_t__ SizeOfImage; } ;
struct TYPE_25__ {int off0; } ;
struct TYPE_24__ {int Length; int Pattern; } ;
struct TYPE_23__ {int Length; int Pattern; } ;
struct TYPE_26__ {TYPE_7__ Offsets; TYPE_6__ Patch; TYPE_5__ Search; } ;
struct TYPE_21__ {scalar_t__ size; } ;
struct TYPE_20__ {int * member_1; scalar_t__ member_0; } ;
struct TYPE_19__ {int member_1; TYPE_2__ member_0; } ;
struct TYPE_18__ {int address; int * member_1; int * member_0; } ;
struct TYPE_17__ {TYPE_3__ kull_m_memoryRange; int * member_1; TYPE_1__ member_0; } ;
typedef TYPE_8__* PKULL_M_PATCH_GENERIC ;
typedef scalar_t__ PBYTE ;
typedef int NTSTATUS ;
typedef TYPE_9__ KULL_M_PROCESS_VERY_BASIC_MODULE_INFORMATION ;
typedef TYPE_10__ KULL_M_MEMORY_SEARCH ;
typedef TYPE_11__ KULL_M_MEMORY_ADDRESS ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (TYPE_10__*,TYPE_11__*,int ,TYPE_11__*,int ,int ,int *,int ,int *,int *) ;
 TYPE_8__* FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int *,char*,TYPE_9__*) ;

NTSTATUS FUNC_6(int VAR_6, wchar_t * VAR_7[])
{
 KULL_M_PROCESS_VERY_BASIC_MODULE_INFORMATION VAR_8;
 KULL_M_MEMORY_ADDRESS
  VAR_9 = {((void*)0), &VAR_2},
  VAR_10 = {((void*)0), &VAR_2},
  VAR_11 = {((void*)0), &VAR_2},
  VAR_12 = {((void*)0), &VAR_2};
 KULL_M_MEMORY_SEARCH VAR_13 = {{{VAR_3, &VAR_2}, 0}, ((void*)0)};
 PKULL_M_PATCH_GENERIC VAR_14, VAR_15;

 VAR_14 = FUNC_4(VAR_1, FUNC_0(VAR_1), VAR_4);
 VAR_15 = FUNC_4(VAR_0, FUNC_0(VAR_0), VAR_4);
 if(VAR_14 && VAR_15)
 {
  VAR_9.address = VAR_14->Search.Pattern;
  VAR_10.address = VAR_15->Search.Pattern;
  VAR_11.address = VAR_14->Patch.Pattern;
  VAR_12.address = VAR_15->Patch.Pattern;
  if(FUNC_5(&VAR_2, L"rsaenh.dll", &VAR_8))
  {
   VAR_13.kull_m_memoryRange.size = VAR_8.SizeOfImage - ((PBYTE) VAR_3 - (PBYTE) VAR_8.DllBase.address);

   if( FUNC_3(&VAR_13, &VAR_9, VAR_14->Search.Length, &VAR_11, VAR_14->Patch.Length, VAR_14->Offsets.off0, ((void*)0), 0, ((void*)0), ((void*)0)) &&
    FUNC_3(&VAR_13, &VAR_10, VAR_15->Search.Length, &VAR_12, VAR_15->Patch.Length, VAR_15->Offsets.off0, ((void*)0), 0, ((void*)0), ((void*)0)) )
    FUNC_2(L"Local CryptoAPI patched\n");
   else
    FUNC_1(L"kull_m_patch");

  } else FUNC_1(L"kull_m_process_getVeryBasicModuleInformationsForName");
 }
 return VAR_5;
}
