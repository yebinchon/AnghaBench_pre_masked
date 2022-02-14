
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int Format; int RefreshRate; int Height; int Width; } ;
struct TYPE_6__ {int dmSize; int dmBitsPerPel; int dmDisplayFrequency; int dmPelsHeight; int dmPelsWidth; } ;
typedef int LPCSTR ;
typedef TYPE_1__ DEVMODEA ;
typedef TYPE_2__ D3DDISPLAYMODE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,TYPE_1__*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

BOOL FUNC_3(LPCSTR VAR_7, D3DDISPLAYMODE* VAR_8)
{
    DEVMODEA VAR_9;

    FUNC_2(&VAR_9, 0, sizeof(DEVMODEA));
    VAR_9.dmSize = sizeof(DEVMODEA);
    if (VAR_5 == FUNC_0(VAR_7, VAR_4, &VAR_9))
        return VAR_5;

    VAR_8->Width = VAR_9.dmPelsWidth;
    VAR_8->Height = VAR_9.dmPelsHeight;
    VAR_8->RefreshRate = VAR_9.dmDisplayFrequency;

    switch (VAR_9.dmBitsPerPel)
    {
    case 8:
        VAR_8->Format = VAR_0;
        break;

    case 16:
        VAR_8->Format = FUNC_1(VAR_7);
        break;

    case 24:
        VAR_8->Format = VAR_1;
        break;

    case 32:
        VAR_8->Format = VAR_3;
        break;

    default:
        VAR_8->Format = VAR_2;
        break;
    }

    return VAR_6;
}
