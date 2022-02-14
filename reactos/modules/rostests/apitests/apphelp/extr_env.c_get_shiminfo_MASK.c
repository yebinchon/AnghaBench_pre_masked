
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int ShimDataSize; TYPE_3__* pShimData; int AppCompatInfo; int AppCompatFlagsUser; int AppCompatFlags; } ;
typedef TYPE_1__ test_RemoteShimInfo ;
typedef int peb ;
typedef int pbi ;
typedef int mbi ;
typedef int ULONG ;
struct TYPE_15__ {int RegionSize; int member_0; } ;
struct TYPE_14__ {int * pShimData; int AppCompatInfo; int AppCompatFlagsUser; int AppCompatFlags; int member_0; } ;
struct TYPE_13__ {int * PebBaseAddress; int member_0; } ;
typedef int SIZE_T ;
typedef TYPE_2__ PROCESS_BASIC_INFORMATION ;
typedef TYPE_3__ PEB ;
typedef int NTSTATUS ;
typedef TYPE_4__ MEMORY_BASIC_INFORMATION ;
typedef int LPCVOID ;
typedef int HANDLE ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,TYPE_2__*,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,TYPE_4__*,int) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (int,char*,int,...) ;
 scalar_t__ FUNC_7 (int ,int *,TYPE_3__*,int) ;

__attribute__((used)) static BOOL FUNC_8(HANDLE VAR_3, test_RemoteShimInfo* VAR_4)
{
    PROCESS_BASIC_INFORMATION VAR_5 = { 0 };
    ULONG VAR_6 = 0;
    NTSTATUS VAR_7 = FUNC_1(VAR_3, VAR_1, &VAR_5, sizeof(VAR_5), &VAR_6);
    FUNC_6(FUNC_0(VAR_7), "Expected NtQI to succeed, but failed with: %x\n", VAR_7);
    FUNC_5(VAR_4, 0, sizeof(*VAR_4));
    if (FUNC_0(VAR_7))
    {
        PEB VAR_8 = { 0 };
        if (FUNC_7(VAR_3, VAR_5.PebBaseAddress, &VAR_8, sizeof(VAR_8)))
        {
            MEMORY_BASIC_INFORMATION VAR_9 = { 0 };
            SIZE_T VAR_10;

            VAR_4->AppCompatFlags = VAR_8.AppCompatFlags;
            VAR_4->AppCompatFlagsUser = VAR_8.AppCompatFlagsUser;
            VAR_4->AppCompatInfo = VAR_8.AppCompatInfo;
            if (VAR_8.pShimData == ((void*)0))
                return VAR_2;

            VAR_10 = FUNC_2(VAR_3, (LPCVOID)VAR_8.pShimData, &VAR_9, sizeof(VAR_9));
            FUNC_6(VAR_10 == sizeof(VAR_9), "Expected VQE to return %u, got %lu\n", sizeof(VAR_9), VAR_10);
            if (VAR_10 == sizeof(VAR_9) || VAR_8.pShimData == ((void*)0))
            {
                VAR_4->ShimDataSize = VAR_9.RegionSize;
                VAR_4->pShimData = FUNC_4(VAR_9.RegionSize);
                if (FUNC_7(VAR_3, VAR_8.pShimData, VAR_4->pShimData, VAR_9.RegionSize))
                    return VAR_2;
                FUNC_3(VAR_4->pShimData);
                VAR_4->pShimData = ((void*)0);
            }
        }
    }
    return VAR_0;
}
