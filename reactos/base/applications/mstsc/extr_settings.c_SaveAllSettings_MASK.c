
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
typedef int VOID ;
struct TYPE_7__ {int pRdpSettings; int hGeneralPage; int hDisplayPage; TYPE_2__* DisplayDeviceList; } ;
struct TYPE_6__ {TYPE_1__* Resolutions; } ;
struct TYPE_5__ {int dmPelsWidth; int dmPelsHeight; } ;
typedef TYPE_3__* PINFO ;
typedef int INT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int ,int,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,char*,int *) ;
 int VAR_8 ;
 int VAR_9 ;

VOID
FUNC_5(PINFO VAR_10)
{
    INT VAR_11;
    WCHAR VAR_12[VAR_7];


    if (FUNC_0(VAR_10->hGeneralPage,
                       VAR_6,
                       VAR_12,
                       VAR_7))
    {
        FUNC_4(VAR_10->pRdpSettings,
                            L"full address",
                            VAR_12);
    }


    VAR_11 = FUNC_1(VAR_10->hDisplayPage,
                             VAR_4,
                             VAR_8,
                             0,
                             0);
    if (VAR_11 != -1)
    {
        FUNC_3(VAR_10->pRdpSettings,
                             L"screen mode id",
                             (VAR_11 == FUNC_2(VAR_10->hDisplayPage, VAR_4, VAR_9, 0, 0)) ? 2 : 1);
        FUNC_3(VAR_10->pRdpSettings,
                             L"desktopwidth",
                             VAR_10->DisplayDeviceList->Resolutions[VAR_11].dmPelsWidth);
        FUNC_3(VAR_10->pRdpSettings,
                             L"desktopheight",
                             VAR_10->DisplayDeviceList->Resolutions[VAR_11].dmPelsHeight);
    }


    VAR_11 = FUNC_1(VAR_10->hDisplayPage,
                             VAR_3,
                             VAR_1,
                             0,
                             0);
    if (VAR_11 != VAR_0)
    {
        VAR_11 = FUNC_1(VAR_10->hDisplayPage,
                                 VAR_3,
                                 VAR_2,
                                 VAR_11,
                                 0);
        if (VAR_11 != VAR_0)
        {
            FUNC_3(VAR_10->pRdpSettings,
                                 L"session bpp",
                                 VAR_11);
        }
    }


    if (FUNC_0(VAR_10->hGeneralPage,
                       VAR_5,
                       VAR_12,
                       VAR_7))
    {
        FUNC_4(VAR_10->pRdpSettings,
                            L"username",
                            VAR_12);
    }
}
