
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int biSize; scalar_t__ biCompression; int biHeight; } ;
struct TYPE_7__ {int * bmiColors; TYPE_1__ bmiHeader; } ;
typedef int RGBQUAD ;
typedef int LPCSTR ;
typedef TYPE_2__* LPBITMAPINFO ;
typedef int * HDC ;
typedef int * HBITMAP ;
typedef int DWORD ;
typedef int D3DFORMAT ;
typedef int BITMAPINFOHEADER ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *,int,int) ;
 int * FUNC_1 (int *,int ,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,int ,int ,int *,TYPE_2__*,int ) ;
 int FUNC_5 () ;
 int VAR_4 ;
 TYPE_2__* FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,TYPE_2__*) ;

__attribute__((used)) static D3DFORMAT FUNC_8(LPCSTR VAR_5)
{
    HDC VAR_6;
    HBITMAP VAR_7;
    LPBITMAPINFO VAR_8;
    D3DFORMAT VAR_9 = VAR_1;

    if (((void*)0) == (VAR_6 = FUNC_1(((void*)0), VAR_5, ((void*)0), ((void*)0))))
    {
        return VAR_9;
    }

    if (((void*)0) == (VAR_7 = FUNC_0(VAR_6, 1, 1)))
    {
        FUNC_2(VAR_6);
        return VAR_9;
    }

    VAR_8 = FUNC_6(FUNC_5(), VAR_4, sizeof(BITMAPINFOHEADER) + 4 * sizeof(RGBQUAD));
    if (((void*)0) == VAR_8)
    {
        FUNC_3(VAR_7);
        FUNC_2(VAR_6);
        return VAR_9;
    }

    VAR_8->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    if (FUNC_4(VAR_6, VAR_7, 0, 0, ((void*)0), VAR_8, VAR_3) > 0)
    {
        if (VAR_8->bmiHeader.biCompression == VAR_0)
        {
            if (FUNC_4(VAR_6, VAR_7, 0, VAR_8->bmiHeader.biHeight, ((void*)0), VAR_8, VAR_3) > 0)
            {

                if (*(DWORD*)(&VAR_8->bmiColors[1]) == 0x000003E0)
                {
                    VAR_9 = VAR_2;
                }
            }
        }
    }

    FUNC_7(FUNC_5(), 0, VAR_8);
    FUNC_3(VAR_7);
    FUNC_2(VAR_6);

    return VAR_9;
}
