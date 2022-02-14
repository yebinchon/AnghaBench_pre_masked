
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int bitmap ;
struct TYPE_7__ {scalar_t__ bmType; int bmWidth; int bmHeight; int bmWidthBytes; int bmPlanes; int bmBitsPixel; int * bmBits; } ;
struct TYPE_6__ {scalar_t__ fIcon; int xHotspot; int yHotspot; int * hbmColor; int * hbmMask; } ;
typedef TYPE_1__ ICONINFO ;
typedef scalar_t__ HICON ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;
typedef TYPE_2__ BITMAP ;


 void* FUNC_0 (int,int,int,int,int *) ;
 void* FUNC_1 (int ,int,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,TYPE_1__*) ;
 int FUNC_7 (int *,int,TYPE_2__*) ;
 int FUNC_8 (int,char*,...) ;

void
FUNC_9(BOOL VAR_0, DWORD VAR_1)
{
    HICON VAR_2;
    ICONINFO VAR_3, VAR_4;
    BITMAP VAR_5;

    VAR_3.fIcon = VAR_0;
    VAR_3.xHotspot = 0;
    VAR_3.yHotspot = 0;
    VAR_3.hbmMask = ((void*)0);
    VAR_3.hbmColor = ((void*)0);

    VAR_2 = FUNC_2(&VAR_3);
    FUNC_8(VAR_2 == 0, "should fail\n");

    VAR_3.hbmMask = FUNC_0(8, 16, 1, 1, ((void*)0));
    VAR_2 = FUNC_2(&VAR_3);
    FUNC_8(VAR_2 != 0, "should not fail\n");

    FUNC_8(FUNC_6(VAR_2, &VAR_4), "\n");
    FUNC_8(VAR_4 == VAR_3.fIcon, "\n");
    if (VAR_0)
    {
        FUNC_8(VAR_4 == 4, "%ld\n", VAR_4);
        FUNC_8(VAR_4 == 4, "%ld\n", VAR_4);
    }
    else
    {
        FUNC_8(VAR_4 == 0, "%ld\n", VAR_4);
        FUNC_8(VAR_4 == 0, "%ld\n", VAR_4);
    }
    FUNC_8(VAR_4 != ((void*)0), "\n");
    FUNC_8(VAR_4 != VAR_3.hbmMask, "\n");
    FUNC_8(VAR_4 == ((void*)0), "\n");
    FUNC_3(VAR_4);

    FUNC_8(FUNC_6(VAR_2, &VAR_4), "\n");
    FUNC_8(VAR_4 == VAR_3.fIcon, "\n");
    if (VAR_0)
    {
        FUNC_8(VAR_4 == 4, "%ld\n", VAR_4);
        FUNC_8(VAR_4 == 4, "%ld\n", VAR_4);
    }
    else
    {
        FUNC_8(VAR_4 == 0, "%ld\n", VAR_4);
        FUNC_8(VAR_4 == 0, "%ld\n", VAR_4);
    }
    FUNC_8(VAR_4 != ((void*)0), "\n");
    FUNC_8(VAR_4 != VAR_3.hbmMask, "\n");
    FUNC_8(VAR_4 == ((void*)0), "\n");
    FUNC_3(VAR_4);
    FUNC_8(FUNC_4(VAR_2), "\n");

    VAR_3.hbmColor = FUNC_0(2, 2, 1, 1, ((void*)0));
    VAR_2 = FUNC_2(&VAR_3);
    FUNC_8(VAR_2 != 0, "should not fail\n");

    FUNC_8(FUNC_6(VAR_2, &VAR_4), "\n");
    FUNC_8(VAR_4 == VAR_3.fIcon, "\n");
    if (VAR_0)
    {
        FUNC_8(VAR_4 == 4, "%ld\n", VAR_4);
        FUNC_8(VAR_4 == 8, "%ld\n", VAR_4);
    }
    else
    {
        FUNC_8(VAR_4 == 0, "%ld\n", VAR_4);
        FUNC_8(VAR_4 == 0, "%ld\n", VAR_4);
    }
    FUNC_8(VAR_4 != ((void*)0), "\n");
    FUNC_8(VAR_4 != VAR_3.hbmMask, "\n");
    FUNC_8(VAR_4 != ((void*)0), "\n");
    FUNC_8(VAR_4 != VAR_3.hbmColor, "\n");

    FUNC_8(FUNC_7(VAR_4, sizeof(VAR_5), &VAR_5), "GetObject failed\n");
    FUNC_8(VAR_5.bmType == 0, "\n");
    FUNC_8(VAR_5.bmWidth == 8, "\n");
    FUNC_8(VAR_5.bmHeight == 16, "\n");
    FUNC_8(VAR_5.bmWidthBytes == 2, "\n");
    FUNC_8(VAR_5.bmPlanes == 1, "\n");
    FUNC_8(VAR_5.bmBitsPixel == 1, "\n");
    FUNC_8(VAR_5.bmBits == ((void*)0), "\n");

    FUNC_8(FUNC_7(VAR_4, sizeof(VAR_5), &VAR_5), "GetObject failed\n");
    FUNC_8(VAR_5.bmType == 0, "\n");
    FUNC_8(VAR_5.bmWidth == 8, "\n");
    FUNC_8(VAR_5.bmHeight == 16, "\n");
    FUNC_8(VAR_5.bmWidthBytes == 8 * VAR_5.bmBitsPixel / 8, "\n");
    FUNC_8(VAR_5.bmPlanes == 1, "\n");
    FUNC_8(VAR_5.bmBitsPixel == VAR_1, "%d\n", VAR_5.bmBitsPixel);
    FUNC_8(VAR_5.bmBits == ((void*)0), "\n");
    FUNC_3(VAR_4);
    FUNC_3(VAR_4);
    FUNC_8(FUNC_4(VAR_2), "\n");

    FUNC_3(VAR_3.hbmMask);
    VAR_3.hbmMask = ((void*)0);
    VAR_2 = FUNC_2(&VAR_3);
    FUNC_8(VAR_2 == 0, "should fail\n");

    FUNC_3(VAR_3.hbmColor);
    VAR_3.hbmColor = FUNC_1(FUNC_5(0), 16, 16);
    VAR_2 = FUNC_2(&VAR_3);
    FUNC_8(VAR_2 == 0, "should fail\n");

    VAR_3.hbmMask = FUNC_1(FUNC_5(0), 8, 16);
    VAR_2 = FUNC_2(&VAR_3);
    FUNC_8(VAR_2 != 0, "should not fail\n");

    FUNC_8(FUNC_6(VAR_2, &VAR_4), "\n");

    FUNC_8(FUNC_7(VAR_4, sizeof(VAR_5), &VAR_5), "GetObject failed\n");
    FUNC_8(VAR_5.bmType == 0, "\n");
    FUNC_8(VAR_5.bmWidth == 8, "%ld\n", VAR_5.bmWidth);
    FUNC_8(VAR_5.bmHeight == 16, "%ld\n", VAR_5.bmHeight);
    FUNC_8(VAR_5.bmWidthBytes == 2, "%ld\n", VAR_5.bmWidthBytes);
    FUNC_8(VAR_5.bmPlanes == 1, "%d\n", VAR_5.bmPlanes);
    FUNC_8(VAR_5.bmBitsPixel == 1, "%d\n", VAR_5.bmBitsPixel);
    FUNC_8(VAR_5.bmBits == ((void*)0), "\n");

    FUNC_8(FUNC_7(VAR_4, sizeof(VAR_5), &VAR_5), "GetObject failed\n");
    FUNC_8(VAR_5.bmType == 0, "\n");
    FUNC_8(VAR_5.bmWidth == 8, "%ld\n", VAR_5.bmWidth);
    FUNC_8(VAR_5.bmHeight == 16, "%ld\n", VAR_5.bmHeight);
    FUNC_8(VAR_5.bmWidthBytes == VAR_1, "%ld\n", VAR_5.bmWidthBytes);
    FUNC_8(VAR_5.bmPlanes == 1, "%d\n", VAR_5.bmPlanes);
    FUNC_8(VAR_5.bmBitsPixel == VAR_1, "%d\n", VAR_5.bmBitsPixel);
    FUNC_8(VAR_5.bmBits == ((void*)0), "\n");
    FUNC_3(VAR_4);
    FUNC_3(VAR_4);
    FUNC_8(FUNC_4(VAR_2), "\n");
}
