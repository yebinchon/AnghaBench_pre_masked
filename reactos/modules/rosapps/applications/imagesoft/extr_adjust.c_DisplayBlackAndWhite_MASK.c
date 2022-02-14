
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int bmWidth; int bmHeight; } ;
struct TYPE_7__ {int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; int biSizeImage; scalar_t__ biClrImportant; scalar_t__ biClrUsed; int biCompression; } ;
struct TYPE_8__ {TYPE_1__ bmiHeader; } ;
typedef int RECT ;
typedef size_t* PBYTE ;
typedef int INT ;
typedef int HWND ;
typedef int HDC ;
typedef int HBITMAP ;
typedef size_t DWORD ;
typedef int BOOL ;
typedef TYPE_2__ BITMAPINFO ;
typedef TYPE_3__ BITMAP ;


 int VAR_0 ;
 int FUNC_0 (size_t*,size_t*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ,int ,int,size_t*,TYPE_2__*,int ) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (int ,int,TYPE_3__*) ;
 int FUNC_6 (size_t) ;
 scalar_t__ FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,size_t*) ;
 int FUNC_9 (int ,int *,int ) ;
 int VAR_3 ;
 size_t FUNC_10 (size_t,size_t,size_t) ;
 int FUNC_11 (int ,int ,int ,int ,size_t*,TYPE_2__*,int ) ;
 int VAR_4 ;

BOOL
FUNC_12(HWND VAR_5,
                     HDC VAR_6,
                     HBITMAP VAR_7)
{
    BITMAPINFO VAR_8;
    BITMAP VAR_9;
    BOOL VAR_10;
    DWORD VAR_11 = 0;
    INT VAR_12, VAR_13;
    PBYTE VAR_14;
    RECT VAR_15;

    FUNC_5(VAR_7,
              sizeof(BITMAP),
              &VAR_9);


    VAR_8.bmiHeader.biSize = sizeof(VAR_8.bmiHeader);
    VAR_8.bmiHeader.biWidth = VAR_9.bmWidth;
    VAR_8.bmiHeader.biHeight = VAR_9.bmHeight;
    VAR_8.bmiHeader.biPlanes = 1;
    VAR_8.bmiHeader.biBitCount = 32;
    VAR_8.bmiHeader.biCompression = VAR_0;
    VAR_8.bmiHeader.biSizeImage = VAR_9.bmWidth * VAR_9.bmHeight * 4;
    VAR_8.bmiHeader.biClrUsed = 0;
    VAR_8.bmiHeader.biClrImportant = 0;


    VAR_14 = (PBYTE)FUNC_7(VAR_3,
                             0,
                             VAR_9.bmWidth * VAR_9.bmHeight * 4);
    if (!VAR_14)
        return VAR_2;


    VAR_10 = FUNC_3(VAR_6,
                     VAR_7,
                     0,
                     VAR_9.bmHeight,
                     VAR_14,
                     &VAR_8,
                     VAR_1);

    for (VAR_12 = 0; VAR_12 < VAR_9.bmHeight; VAR_12++)
    {
        for (VAR_13 = 0; VAR_13 < VAR_9.bmWidth; VAR_13++)
        {
            DWORD VAR_16 = 0;
            INT VAR_17, VAR_18, VAR_19;

            FUNC_0(&VAR_16,
                       &VAR_14[VAR_11],
                       4);


            VAR_17 = FUNC_6(VAR_16);
            VAR_18 = FUNC_4(VAR_16);
            VAR_19 = FUNC_1(VAR_16);


            VAR_16 = (VAR_19 + VAR_18 + VAR_17) / 3;


            VAR_16 = FUNC_10(VAR_16, VAR_16, VAR_16);
            FUNC_0(&VAR_14[VAR_11],
                       &VAR_16,
                       4);

            VAR_11+=4;
        }
    }


    FUNC_11(VAR_6,
              VAR_7,
              0,
              VAR_10,
              VAR_14,
              &VAR_8,
              VAR_1);

    FUNC_8(VAR_3,
             0,
             VAR_14);

    FUNC_2(VAR_5,
                  &VAR_15);

    FUNC_9(VAR_5,
                   &VAR_15,
                   VAR_2);

    return VAR_4;
}
