
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* szModule; scalar_t__ dwMagic; int dwSize; int dwCustomSDBMap; } ;
typedef TYPE_1__ ShimData_Win2k3 ;
typedef scalar_t__ PVOID ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int,char*,int,...) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(PVOID VAR_1, size_t VAR_2, const char* VAR_3[])
{

    ShimData_Win2k3* VAR_4 = (ShimData_Win2k3*)VAR_1;

    FUNC_1(!FUNC_0(VAR_4->szModule, L"ShimEng.dll"), "Expected pShimData->Module to be %s, was %s\n", FUNC_2(L"ShimEng.dll"), FUNC_2(VAR_4->szModule));
    FUNC_1(VAR_4->dwMagic == VAR_0, "Expected pShimData->dwMagic to be 0x%x, was 0x%x\n", VAR_0, VAR_4->dwMagic);
    FUNC_1(VAR_4->dwSize == sizeof(ShimData_Win2k3), "Expected pShimData->dwSize to be %u, was %u\n", sizeof(ShimData_Win2k3), VAR_4->dwSize);
    FUNC_1(VAR_4->dwCustomSDBMap == 1, "Expected pShimData->dwCustomSDBMap to be 1, was %u\n", VAR_4->dwCustomSDBMap);
}
