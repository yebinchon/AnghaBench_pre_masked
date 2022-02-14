
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_20__ {int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; int biCompression; } ;
struct TYPE_21__ {TYPE_1__ bmiHeader; } ;
typedef TYPE_2__ UINT32 ;
typedef int INT ;
typedef int HDC ;
typedef int BITMAPINFOHEADER ;
typedef TYPE_2__ BITMAPINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int,int,int,int,int,int,int,TYPE_2__*,TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (int,char*,TYPE_2__,TYPE_2__,TYPE_2__,TYPE_2__,TYPE_2__,TYPE_2__,TYPE_2__,TYPE_2__,int,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static INT FUNC_4( HDC VAR_3, UINT32 *VAR_4, UINT32 *VAR_5,
                                        int VAR_6, int VAR_7, int VAR_8, int VAR_9,
                                        int VAR_10, int VAR_11, int VAR_12, int VAR_13,
                                        UINT32 VAR_14[4], int VAR_15)
{
    BITMAPINFO VAR_16;
    INT VAR_17;

    FUNC_2(&VAR_16, 0, sizeof(BITMAPINFO));
    VAR_16.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    VAR_16.bmiHeader.biWidth = 2;
    VAR_16.bmiHeader.biHeight = -2;
    VAR_16.bmiHeader.biPlanes = 1;
    VAR_16.bmiHeader.biBitCount = 32;
    VAR_16.bmiHeader.biCompression = VAR_0;

    FUNC_2(VAR_4, 0, 16);
    VAR_17 = FUNC_0(VAR_3, VAR_6, VAR_7, VAR_8, VAR_9,
                        VAR_10, VAR_11, VAR_12, VAR_13,
                        VAR_5, &VAR_16, VAR_1, VAR_2);
    FUNC_3(FUNC_1(VAR_4, VAR_14, 16) == 0,
        "StretchDIBits expected { %08X, %08X, %08X, %08X } got { %08X, %08X, %08X, %08X } "
        "stretching { %d, %d, %d, %d } to { %d, %d, %d, %d } from line %d\n",
        VAR_14[0], VAR_14[1], VAR_14[2], VAR_14[3],
        VAR_4[0], VAR_4[1], VAR_4[2], VAR_4[3],
        VAR_10, VAR_11, VAR_12, VAR_13,
        VAR_6, VAR_7, VAR_8, VAR_9, VAR_15);
    return VAR_17;
}
