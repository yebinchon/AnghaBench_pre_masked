
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_2__ {int biSize; int biBitCount; int biCompression; } ;
typedef int PBITMAPINFO ;
typedef int HDC ;
typedef int HBITMAP ;
typedef TYPE_1__ BITMAPINFOHEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int,int) ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int,int *,int ,int ) ;

ULONG
FUNC_4()
{
    HBITMAP VAR_9;
    HDC VAR_10;
    struct
    {
        BITMAPINFOHEADER bmiHeader;
        ULONG aulMasks[3];
    } VAR_11;
    PBITMAPINFO VAR_12 = (PBITMAPINFO)&VAR_11;
    ULONG VAR_13;


    VAR_10 = FUNC_2(((void*)0));


    VAR_9 = FUNC_0(VAR_10, 1, 1);


    VAR_11.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    FUNC_3(VAR_10, VAR_9, 0, 1, ((void*)0), VAR_12, VAR_8);


    FUNC_3(VAR_10, VAR_9, 0, 1, ((void*)0), VAR_12, VAR_8);


    VAR_13 = VAR_11.bmiHeader.biBitCount;

    FUNC_1(VAR_9);

    switch (VAR_13)
    {
        case 1:
            return VAR_3;
        case 4:
            return VAR_6;
        case 8:
            return VAR_7;
        case 16:

            if (VAR_11.aulMasks[0] == 0x7c00)
                return VAR_1;
            else
                return VAR_2;
        case 24:
            return VAR_6;
        case 32:
            if (VAR_11.bmiHeader.biCompression == VAR_0 &&
                VAR_11.aulMasks[0] == 0xff)
                return VAR_5;
            else
                return VAR_4;
    }


    return VAR_5;
}
