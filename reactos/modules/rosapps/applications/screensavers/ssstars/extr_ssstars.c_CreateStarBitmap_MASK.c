
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int bi ;
typedef size_t UINT ;
struct TYPE_9__ {int bmWidth; int bmHeight; } ;
struct TYPE_7__ {int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; int biCompression; } ;
struct TYPE_8__ {TYPE_1__ bmiHeader; } ;
typedef scalar_t__ LPBYTE ;
typedef int HWND ;
typedef scalar_t__ HINSTANCE ;
typedef scalar_t__ HGDIOBJ ;
typedef int HDC ;
typedef scalar_t__ HBITMAP ;
typedef int DWORD ;
typedef int BITMAPINFOHEADER ;
typedef TYPE_2__ BITMAPINFO ;
typedef TYPE_3__ BITMAP ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int,int,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,TYPE_2__*,int ,void**,int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_5 (scalar_t__,int,TYPE_3__*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (scalar_t__,int ,int ,int ,int ,int) ;
 int FUNC_8 (int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (TYPE_2__*,int) ;

__attribute__((used)) static HBITMAP FUNC_11(HWND VAR_8, HDC VAR_9)
{
    BITMAPINFO VAR_10;
    LPBYTE VAR_11;
    LPBYTE *VAR_12;
    HBITMAP VAR_13, VAR_14;
    HDC VAR_15, VAR_16;
    HGDIOBJ VAR_17, VAR_18;
    UINT VAR_19;
    DWORD *VAR_20;
    BITMAP VAR_21;
    HINSTANCE VAR_22;


    VAR_22 = (HINSTANCE)FUNC_6(VAR_8, VAR_2);


    VAR_14 = (HBITMAP)
              FUNC_7(
                    VAR_22,
                    FUNC_8(VAR_3),
                    VAR_4,
                    0, 0,
                    VAR_5 | VAR_6
              );


    FUNC_5(VAR_14, sizeof(BITMAP), &VAR_21);


    FUNC_10(&VAR_10, sizeof(VAR_10));

    VAR_10.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    VAR_10.bmiHeader.biWidth = VAR_21.bmWidth;
    VAR_10.bmiHeader.biHeight = -VAR_21.bmHeight;
    VAR_10.bmiHeader.biPlanes = 1;
    VAR_10.bmiHeader.biBitCount = 32;
    VAR_10.bmiHeader.biCompression = VAR_0;


    VAR_12 = &VAR_11;

    VAR_13 = FUNC_2(VAR_9,
                                (BITMAPINFO*)&VAR_10,
                                VAR_1,
                                (void**)VAR_12,
                                ((void*)0),
                                0);






    VAR_15 = FUNC_1(VAR_9);
    VAR_16 = FUNC_1(VAR_9);

    VAR_17 = FUNC_9(VAR_15, VAR_13);
    VAR_18 = FUNC_9(VAR_16, VAR_14);

    FUNC_0(VAR_15, 0, 0, VAR_21.bmWidth, VAR_21.bmHeight, VAR_16, 0, 0, VAR_7);

    FUNC_9(VAR_15, VAR_17);
    FUNC_9(VAR_16, VAR_18);

    FUNC_3(VAR_15);
    FUNC_3(VAR_16);


    FUNC_4(VAR_14);

    FUNC_5(VAR_13, sizeof(BITMAP), &VAR_21);


    for (VAR_20=(DWORD *)VAR_11, VAR_19=0; VAR_19 < (UINT)(VAR_21.bmWidth * VAR_21.bmHeight); VAR_19++)
    {
        DWORD VAR_23 = VAR_20[VAR_19] & 0x00FFFFFF;
        DWORD VAR_24 = VAR_23 & 0xFF;

        VAR_23 |= VAR_24 << 24;

        VAR_20[VAR_19] = VAR_23;
    }

    return VAR_13;
}
