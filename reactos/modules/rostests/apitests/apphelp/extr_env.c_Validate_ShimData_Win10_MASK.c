
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {size_t dwLayerCount; scalar_t__* atrLayers; } ;
struct TYPE_4__ {scalar_t__ dwMagic; int dwSize; TYPE_1__ Query; int * szModule; } ;
typedef TYPE_2__ ShimData_Win10_v1 ;
typedef scalar_t__ PVOID ;


 int FUNC_0 (char*,char*,int ) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__,char const*) ;
 int FUNC_2 (scalar_t__,int *,size_t,char const**) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int *) ;
 size_t FUNC_5 (size_t,size_t) ;
 int FUNC_6 (int,char*,size_t,size_t) ;
 int FUNC_7 (char*,char*) ;
 size_t FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(PVOID VAR_2, WCHAR VAR_3[256], size_t VAR_4, const char* VAR_5[])
{
    size_t VAR_6;
    ShimData_Win10_v1* VAR_7 = (ShimData_Win10_v1*)VAR_2;

    if (VAR_7->dwMagic != VAR_1)
    {
        FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
        return;
    }


    FUNC_6(!FUNC_4(VAR_7->szModule, VAR_3), "Expected pShimData->Module to be %s, was %s\n",
        FUNC_8(VAR_3), FUNC_8(VAR_7->szModule));
    FUNC_6(VAR_7->dwSize == sizeof(ShimData_Win10_v1), "Expected pShimData->dwSize to be %u, was %u\n",
        sizeof(ShimData_Win10_v1), VAR_7->dwSize);
    if (VAR_7->Query.dwLayerCount != FUNC_5(VAR_4, VAR_0))
    {
        char VAR_8[250] = {0};
        FUNC_0("__COMPAT_LAYER", VAR_8, FUNC_3(VAR_8));
        FUNC_7("At test: %s\n", VAR_8);
    }
    FUNC_6(VAR_7->Query.dwLayerCount == FUNC_5(VAR_4, VAR_0),
        "Expected LayerCount to be %u, was %u\n", FUNC_5(VAR_4, VAR_0), VAR_7->Query.dwLayerCount);
    for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6)
    {
        if (VAR_6 < VAR_4)
        {
            FUNC_6(VAR_7->Query.atrLayers[VAR_6] != 0, "Expected to find a valid layer in index %u / %u\n", VAR_6, VAR_4);
            FUNC_1(VAR_7->Query.atrLayers[VAR_6], VAR_5[VAR_6]);
        }
        else
            FUNC_6(VAR_7->Query.atrLayers[VAR_6] == 0, "Expected to find an empty layer in index %u / %u\n", VAR_6, VAR_4);
    }
}
