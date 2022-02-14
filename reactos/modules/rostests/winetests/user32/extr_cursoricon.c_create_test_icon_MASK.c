
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int bitmapInfo ;
typedef int UINT32 ;
struct TYPE_7__ {int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; int biSizeImage; int biCompression; } ;
struct TYPE_9__ {TYPE_1__ bmiHeader; } ;
struct TYPE_8__ {int hbmMask; int hbmColor; scalar_t__ yHotspot; scalar_t__ xHotspot; int fIcon; } ;
typedef TYPE_2__ ICONINFO ;
typedef int * HICON ;
typedef int HDC ;
typedef scalar_t__ BOOL ;
typedef int BITMAPINFOHEADER ;
typedef TYPE_3__ BITMAPINFO ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int,int*) ;
 int FUNC_1 (int ,TYPE_3__*,int ,void**,int *,int ) ;
 int * FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (void*,int*,int) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;

__attribute__((used)) static HICON FUNC_6(HDC VAR_3, int VAR_4, int VAR_5, int VAR_6,
                              BOOL VAR_7, UINT32 *VAR_8, int VAR_9)
{
    ICONINFO VAR_10;
    BITMAPINFO VAR_11;
    void *VAR_12 = ((void*)0);
    UINT32 VAR_13 = VAR_7 ? 0xFFFFFFFF : 0x00000000;

    FUNC_5(&VAR_11, 0, sizeof(VAR_11));
    VAR_11.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    VAR_11.bmiHeader.biWidth = VAR_4;
    VAR_11.bmiHeader.biHeight = VAR_5;
    VAR_11.bmiHeader.biPlanes = 1;
    VAR_11.bmiHeader.biBitCount = VAR_6;
    VAR_11.bmiHeader.biCompression = VAR_0;
    VAR_11.bmiHeader.biSizeImage = VAR_9;

    VAR_10.fIcon = VAR_2;
    VAR_10.xHotspot = 0;
    VAR_10.yHotspot = 0;

    VAR_10.hbmMask = FUNC_0( VAR_4, VAR_5, 1, 1, &VAR_13 );
    if(!VAR_10.hbmMask) return ((void*)0);

    VAR_10.hbmColor = FUNC_1(VAR_3, &VAR_11, VAR_1, &VAR_12, ((void*)0), 0);
    if(!VAR_10.hbmColor || !VAR_12)
    {
        FUNC_3(VAR_10.hbmMask);
        return ((void*)0);
    }

    FUNC_4(VAR_12, VAR_8, VAR_9);

    return FUNC_2(&VAR_10);
}
