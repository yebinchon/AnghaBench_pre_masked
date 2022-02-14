
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bmBitsPixel; int bmHeight; int bmPlanes; int bmType; int bmWidth; int bmWidthBytes; scalar_t__ bmBits; } ;
typedef scalar_t__ HBITMAP ;
typedef TYPE_1__ BITMAP ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int,char*) ;

void FUNC_4()
{
    HBITMAP VAR_0;
    BITMAP VAR_1;

    VAR_1.bmBits = 0;
    VAR_1.bmBitsPixel = 1;
    VAR_1.bmHeight = 0;
    VAR_1.bmPlanes = 1;
    VAR_1.bmType = 1;
    VAR_1.bmWidth = 0;
    VAR_1.bmWidthBytes = 2;
    VAR_0 = FUNC_0(&VAR_1);
    FUNC_3(VAR_0 != 0, "CreateBitmapIndirect failed\n");

    FUNC_1(VAR_0);

    FUNC_2(&VAR_1,sizeof(BITMAP));
    VAR_1.bmBits = 0;
    VAR_1.bmBitsPixel = 1;
    VAR_1.bmHeight = 0;
    VAR_1.bmPlanes = 1;
    VAR_1.bmType = 1;
    VAR_1.bmWidth = 0;
    VAR_1.bmWidthBytes = 1;
    VAR_0 = FUNC_0(&VAR_1);
    FUNC_3(VAR_0 == 0, "CreateBitmapIndirect succeeded\n");

    FUNC_2(&VAR_1,sizeof(BITMAP));
    VAR_1.bmBits = 0;
    VAR_1.bmBitsPixel = 1;
    VAR_1.bmHeight = 0;
    VAR_1.bmPlanes = 1;
    VAR_1.bmType = 1;
    VAR_1.bmWidth = 0;
    VAR_1.bmWidthBytes = 3;
    VAR_0 = FUNC_0(&VAR_1);
    FUNC_3(VAR_0 == 0, "CreateBitmapIndirect succeeded\n");

    FUNC_2(&VAR_1,sizeof(BITMAP));
    VAR_1.bmBits = 0;
    VAR_1.bmBitsPixel = 1;
    VAR_1.bmHeight = 0;
    VAR_1.bmPlanes = 1;
    VAR_1.bmType = 1;
    VAR_1.bmWidth = 0;
    VAR_1.bmWidthBytes = 4;
    VAR_0 = FUNC_0(&VAR_1);
    FUNC_3(VAR_0 != 0, "CreateBitmapIndirect failed\n");

    FUNC_2(&VAR_1,sizeof(BITMAP));
    VAR_1.bmBits = 0;
    VAR_1.bmBitsPixel = 8;
    VAR_1.bmHeight = 0xF000;
    VAR_1.bmPlanes = 1;
    VAR_1.bmType = 1;
    VAR_1.bmWidth = 0x8000;
    VAR_1.bmWidthBytes = VAR_1.bmWidth;
    VAR_0 = FUNC_0(&VAR_1);


    FUNC_1(VAR_0);
}
