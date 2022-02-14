
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int bcHeight; int bcWidth; int bcBitCount; int bcPlanes; int bcSize; } ;
struct TYPE_7__ {int biHeight; int biWidth; int biBitCount; int biPlanes; int biSize; } ;
struct TYPE_9__ {TYPE_2__ bmciHeader; TYPE_1__ bmiHeader; } ;
typedef int HDC ;
typedef int * HBITMAP ;
typedef int BITMAPV5HEADER ;
typedef int BITMAPV4HEADER ;
typedef int BITMAPINFOHEADER ;
typedef TYPE_3__ BITMAPINFO ;
typedef TYPE_3__ BITMAPCOREINFO ;
typedef int BITMAPCOREHEADER ;


 int * FUNC_0 (int ,TYPE_3__*,int ,int *,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (TYPE_3__*,int ,int) ;
 int FUNC_8 (int,char*,...) ;

__attribute__((used)) static void FUNC_9(void)
{
    HBITMAP VAR_0;
    BITMAPINFO VAR_1;
    BITMAPCOREINFO VAR_2;
    HDC VAR_3 = FUNC_2(0);

    FUNC_7(&VAR_1, 0, sizeof(BITMAPINFO));
    VAR_1.bmiHeader.biHeight = 100;
    VAR_1.bmiHeader.biWidth = 512;
    VAR_1.bmiHeader.biBitCount = 24;
    VAR_1.bmiHeader.biPlanes = 1;

    VAR_1.bmiHeader.biSize = sizeof(BITMAPINFOHEADER) - 1;

    VAR_0 = FUNC_0(VAR_3, &VAR_1, 0, ((void*)0), ((void*)0), 0);
    FUNC_8(VAR_0 == ((void*)0), "CreateDIBSection succeeded\n");

    VAR_1.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);

    FUNC_5(0xdeadbeef);
    VAR_0 = FUNC_0(VAR_3, &VAR_1, 0, ((void*)0), ((void*)0), 0);
    FUNC_8(VAR_0 != ((void*)0), "CreateDIBSection error %d\n", FUNC_3());
    FUNC_1(VAR_0);

    VAR_1.bmiHeader.biSize++;

    FUNC_5(0xdeadbeef);
    VAR_0 = FUNC_0(VAR_3, &VAR_1, 0, ((void*)0), ((void*)0), 0);
    FUNC_8(VAR_0 != ((void*)0) ||
       FUNC_6(!VAR_0),
       "CreateDIBSection error %d\n", FUNC_3());
    FUNC_1(VAR_0);

    VAR_1.bmiHeader.biSize = sizeof(BITMAPINFO);

    FUNC_5(0xdeadbeef);
    VAR_0 = FUNC_0(VAR_3, &VAR_1, 0, ((void*)0), ((void*)0), 0);
    FUNC_8(VAR_0 != ((void*)0) ||
       FUNC_6(!VAR_0),
       "CreateDIBSection error %d\n", FUNC_3());
    FUNC_1(VAR_0);

    VAR_1.bmiHeader.biSize++;

    FUNC_5(0xdeadbeef);
    VAR_0 = FUNC_0(VAR_3, &VAR_1, 0, ((void*)0), ((void*)0), 0);
    FUNC_8(VAR_0 != ((void*)0) ||
       FUNC_6(!VAR_0),
       "CreateDIBSection error %d\n", FUNC_3());
    FUNC_1(VAR_0);

    VAR_1.bmiHeader.biSize = sizeof(BITMAPV4HEADER);

    FUNC_5(0xdeadbeef);
    VAR_0 = FUNC_0(VAR_3, &VAR_1, 0, ((void*)0), ((void*)0), 0);
    FUNC_8(VAR_0 != ((void*)0), "CreateDIBSection error %d\n", FUNC_3());
    FUNC_1(VAR_0);

    VAR_1.bmiHeader.biSize = sizeof(BITMAPV5HEADER);

    FUNC_5(0xdeadbeef);
    VAR_0 = FUNC_0(VAR_3, &VAR_1, 0, ((void*)0), ((void*)0), 0);
    FUNC_8(VAR_0 != ((void*)0) ||
       FUNC_6(!VAR_0),
       "CreateDIBSection error %d\n", FUNC_3());
    FUNC_1(VAR_0);

    FUNC_7(&VAR_2, 0, sizeof(BITMAPCOREINFO));
    VAR_2.bmciHeader.bcHeight = 100;
    VAR_2.bmciHeader.bcWidth = 512;
    VAR_2.bmciHeader.bcBitCount = 24;
    VAR_2.bmciHeader.bcPlanes = 1;

    VAR_2.bmciHeader.bcSize = sizeof(BITMAPCOREHEADER) - 1;

    VAR_0 = FUNC_0(VAR_3, (BITMAPINFO *)&VAR_2, 0, ((void*)0), ((void*)0), 0);
    FUNC_8(VAR_0 == ((void*)0), "CreateDIBSection succeeded\n");

    VAR_2.bmciHeader.bcSize = sizeof(BITMAPCOREHEADER);

    FUNC_5(0xdeadbeef);
    VAR_0 = FUNC_0(VAR_3, (BITMAPINFO *)&VAR_2, 0, ((void*)0), ((void*)0), 0);
    FUNC_8(VAR_0 != ((void*)0), "CreateDIBSection error %d\n", FUNC_3());
    FUNC_1(VAR_0);

    VAR_2.bmciHeader.bcSize++;

    VAR_0 = FUNC_0(VAR_3, (BITMAPINFO *)&VAR_2, 0, ((void*)0), ((void*)0), 0);
    FUNC_8(VAR_0 == ((void*)0), "CreateDIBSection succeeded\n");

    VAR_2.bmciHeader.bcSize = sizeof(BITMAPCOREINFO);

    VAR_0 = FUNC_0(VAR_3, (BITMAPINFO *)&VAR_2, 0, ((void*)0), ((void*)0), 0);
    FUNC_8(VAR_0 == ((void*)0), "CreateDIBSection succeeded\n");

    FUNC_4(0, VAR_3);
}
