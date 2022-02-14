
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int Format; int RefreshRate; int Height; int Width; } ;
struct TYPE_5__ {int dmBitsPerPel; int dmDisplayFrequency; int dmPelsHeight; int dmPelsWidth; } ;
typedef int LPCSTR ;
typedef scalar_t__ DWORD ;
typedef TYPE_1__ DEVMODEA ;
typedef int D3DFORMAT ;
typedef TYPE_2__ D3DDISPLAYMODE ;
typedef int D3D9_Unknown6BC ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,TYPE_1__*) ;
 scalar_t__ VAR_1 ;

void FUNC_1(LPCSTR VAR_2, D3DDISPLAYMODE* VAR_3, DWORD* VAR_4, D3DFORMAT VAR_5, D3D9_Unknown6BC* VAR_6)
{
    DEVMODEA VAR_7;
    DWORD VAR_8 = 0;
    DWORD VAR_9 = 0;

    while (VAR_1 == FUNC_0(VAR_2, VAR_8, &VAR_7))
    {
        D3DFORMAT VAR_10;

        if (VAR_7.dmBitsPerPel != 15 &&
            VAR_7.dmBitsPerPel != 16 &&
            VAR_7.dmBitsPerPel != 32)
        {
            ++VAR_8;
            continue;
        }

        ++VAR_9;

        if (VAR_7.dmBitsPerPel == 15 || VAR_7.dmBitsPerPel == 16)
        {
            if (((void*)0) == VAR_6)
            {
                ++VAR_8;
                continue;
            }

            VAR_10 = VAR_5;
        }
        else
        {
            VAR_10 = VAR_0;
        }

        if (((void*)0) != VAR_3)
        {
            if (VAR_9 == *VAR_4)
                break;

            VAR_3->Width = VAR_7.dmPelsWidth;
            VAR_3->Height = VAR_7.dmPelsHeight;
            VAR_3->RefreshRate = VAR_7.dmDisplayFrequency;
            VAR_3->Format = VAR_10;
            ++VAR_3;
        }

        ++VAR_8;
    }

    *VAR_4 = VAR_9;
}
