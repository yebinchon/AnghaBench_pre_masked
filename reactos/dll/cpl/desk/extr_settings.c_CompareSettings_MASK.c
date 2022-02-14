
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dmPelsWidth; scalar_t__ dmPelsHeight; scalar_t__ dmBitsPerPel; scalar_t__ dmDisplayFrequency; } ;
typedef TYPE_1__* PSETTINGS_ENTRY ;
typedef scalar_t__ DWORD ;



__attribute__((used)) static int
FUNC_0(PSETTINGS_ENTRY VAR_0, DWORD VAR_1, DWORD VAR_2,
                DWORD VAR_3, DWORD VAR_4)
{
    if (VAR_0->dmPelsWidth == VAR_1 &&
        VAR_0->dmPelsHeight == VAR_2 &&
        VAR_0->dmBitsPerPel == VAR_3 &&
        VAR_0->dmDisplayFrequency == VAR_4)
    {
        return 0;
    }
    else
    if ((VAR_0->dmPelsWidth < VAR_1) ||
        (VAR_0->dmPelsWidth == VAR_1 && VAR_0->dmPelsHeight < VAR_2) ||
        (VAR_0->dmPelsWidth == VAR_1 && VAR_0->dmPelsHeight == VAR_2 &&
         VAR_0->dmBitsPerPel < VAR_3))
    {
        return 1;
    }
    return -1;
}
