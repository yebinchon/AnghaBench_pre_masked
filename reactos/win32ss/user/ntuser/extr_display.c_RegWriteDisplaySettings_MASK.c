
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_4__ {int y; int x; } ;
struct TYPE_5__ {TYPE_1__ dmPosition; int dmDisplayFixedOutput; int dmDisplayOrientation; int dmPanningHeight; int dmPanningWidth; int dmDisplayFrequency; int dmDisplayFlags; int dmPelsHeight; int dmPelsWidth; int dmBitsPerPel; } ;
typedef TYPE_2__* PDEVMODEW ;
typedef int HKEY ;


 int FUNC_0 (int ,char*,int ) ;

VOID
FUNC_1(HKEY VAR_0, PDEVMODEW VAR_1)
{
    FUNC_0(VAR_0, L"DefaultSettings.BitsPerPel", VAR_1->dmBitsPerPel);
    FUNC_0(VAR_0, L"DefaultSettings.XResolution", VAR_1->dmPelsWidth);
    FUNC_0(VAR_0, L"DefaultSettings.YResolution", VAR_1->dmPelsHeight);
    FUNC_0(VAR_0, L"DefaultSettings.Flags", VAR_1->dmDisplayFlags);
    FUNC_0(VAR_0, L"DefaultSettings.VRefresh", VAR_1->dmDisplayFrequency);
    FUNC_0(VAR_0, L"DefaultSettings.XPanning", VAR_1->dmPanningWidth);
    FUNC_0(VAR_0, L"DefaultSettings.YPanning", VAR_1->dmPanningHeight);
    FUNC_0(VAR_0, L"DefaultSettings.Orientation", VAR_1->dmDisplayOrientation);
    FUNC_0(VAR_0, L"DefaultSettings.FixedOutput", VAR_1->dmDisplayFixedOutput);
    FUNC_0(VAR_0, L"Attach.RelativeX", VAR_1->dmPosition.x);
    FUNC_0(VAR_0, L"Attach.RelativeY", VAR_1->dmPosition.y);

}
