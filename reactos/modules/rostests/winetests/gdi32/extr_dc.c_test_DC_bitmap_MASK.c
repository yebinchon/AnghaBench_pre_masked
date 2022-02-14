
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int descr ;
struct TYPE_4__ {int nSize; } ;
typedef TYPE_1__ PIXELFORMATDESCRIPTOR ;
typedef int * HDC ;
typedef int * HBITMAP ;
typedef int DWORD ;
typedef int COLORREF ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int,int,int,int,int*) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int,TYPE_1__*) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (int ,int *) ;
 int * FUNC_8 (int *,int *) ;
 int FUNC_9 (TYPE_1__*,int ,int) ;
 int FUNC_10 (int,char*,...) ;

__attribute__((used)) static void FUNC_11(void)
{
    PIXELFORMATDESCRIPTOR VAR_2;
    HDC VAR_3, VAR_4;
    DWORD VAR_5[64];
    HBITMAP VAR_6, VAR_7;
    COLORREF VAR_8;
    int VAR_9, VAR_10;
    int VAR_11, VAR_12;


    for( VAR_9 = 0; VAR_9 < 64; VAR_9++) VAR_5[VAR_9] = VAR_9 & 1 ? 0 : 0xffffff;

    VAR_3 = FUNC_4(0);
    FUNC_10( VAR_3 != ((void*)0), "CreateDC rets %p\n", VAR_3);
    VAR_10 = FUNC_5( VAR_3, VAR_0);

    VAR_4 = FUNC_1( VAR_3);
    FUNC_10( VAR_4 != ((void*)0), "CreateCompatibleDC rets %p\n", VAR_4);


    VAR_12 = FUNC_3(VAR_4, 0, sizeof(VAR_2), ((void*)0));
    FUNC_10(VAR_12 > 0, "expected ret2 > 0, got %d\n", VAR_12);
    VAR_11 = FUNC_3(VAR_4, 1, sizeof(VAR_2), ((void*)0));
    FUNC_10(VAR_11 == VAR_12, "expected ret == %d, got %d\n", VAR_12, VAR_11);
    VAR_11 = FUNC_3(VAR_4, 0x10000, sizeof(VAR_2), ((void*)0));
    FUNC_10(VAR_11 == VAR_12, "expected ret == %d, got %d\n", VAR_12, VAR_11);


    FUNC_9(&VAR_2, 0, sizeof(VAR_2));
    VAR_11 = FUNC_3(VAR_4, 0, sizeof(VAR_2), &VAR_2);
    FUNC_10(VAR_11 == 0, "expected ret == 0, got %d\n", VAR_11);
    FUNC_10(VAR_2.nSize == 0, "expected descr.nSize == 0, got %d\n", VAR_2.nSize);

    FUNC_9(&VAR_2, 0, sizeof(VAR_2));
    VAR_11 = FUNC_3(VAR_4, 1, sizeof(VAR_2), &VAR_2);
    FUNC_10(VAR_11 == VAR_12, "expected ret == %d, got %d\n", VAR_12, VAR_11);
    FUNC_10(VAR_2.nSize == sizeof(VAR_2), "expected desc.nSize == sizeof(descr), got %d\n", VAR_2.nSize);

    FUNC_9(&VAR_2, 0, sizeof(VAR_2));
    VAR_11 = FUNC_3(VAR_4, 0x10000, sizeof(VAR_2), &VAR_2);
    FUNC_10(VAR_11 == 0, "expected ret == 0, got %d\n", VAR_11);
    FUNC_10(VAR_2.nSize == 0, "expected descr.nSize == 0, got %d\n", VAR_2.nSize);


    VAR_6 = FUNC_0(32, 32, 1, 1, VAR_5);
    FUNC_10( VAR_6 != ((void*)0), "CreateBitmap returns %p\n", VAR_6);
    VAR_7 = FUNC_8( VAR_4, VAR_6);
    FUNC_10( VAR_7 != ((void*)0), "SelectObject returned NULL\n" );
    VAR_8 = FUNC_6( VAR_4, 0, 0);
    FUNC_10( VAR_8 == 0xffffff, "GetPixel returned %08x, expected 00ffffff\n", VAR_8);
    VAR_8 = FUNC_6( VAR_4, 1, 1);
    FUNC_10( VAR_8 == 0x000000, "GetPixel returned %08x, expected 00000000\n", VAR_8);
    VAR_8 = FUNC_6( VAR_4, 100, 1);
    FUNC_10( VAR_8 == VAR_1, "GetPixel returned %08x, expected ffffffff\n", VAR_8);
    FUNC_8( VAR_4, VAR_7);
    FUNC_2( VAR_6);


    VAR_6 = FUNC_0(16, 16, 1, 2, VAR_5);
    FUNC_10( VAR_6 != ((void*)0), "CreateBitmap returns %p\n", VAR_6);
    VAR_7 = FUNC_8( VAR_4, VAR_6);
    if( VAR_10 != 2)
        FUNC_10( !VAR_7, "SelectObject of a bitmap with 2 bits/pixel should return  NULL\n");
    if( VAR_7) FUNC_8( VAR_4, VAR_7);
    FUNC_2( VAR_6);


    VAR_6 = FUNC_0(6, 6, 1, 16, VAR_5);
    FUNC_10( VAR_6 != ((void*)0), "CreateBitmap returns %p\n", VAR_6);
    VAR_7 = FUNC_8( VAR_4, VAR_6);
    if( VAR_10 == 16) {
        FUNC_10( VAR_7 != ((void*)0), "SelectObject returned NULL\n" );
        VAR_8 = FUNC_6( VAR_4, 0, 0);
        FUNC_10( VAR_8 == 0xffffff,
            "GetPixel of a bitmap with 16 bits/pixel returned %08x, expected 00ffffff\n", VAR_8);
        VAR_8 = FUNC_6( VAR_4, 1, 1);
        FUNC_10( VAR_8 == 0x000000,
            "GetPixel of a bitmap with 16 bits/pixel returned returned %08x, expected 00000000\n", VAR_8);
    }
    if( VAR_7) FUNC_8( VAR_4, VAR_7);
    FUNC_2( VAR_6);


    VAR_6 = FUNC_0(4, 4, 1, 32, VAR_5);
    FUNC_10( VAR_6 != ((void*)0), "CreateBitmap returns %p\n", VAR_6);
    VAR_7 = FUNC_8( VAR_4, VAR_6);
    if( VAR_10 == 32) {
        FUNC_10( VAR_7 != ((void*)0), "SelectObject returned NULL\n" );
        VAR_8 = FUNC_6( VAR_4, 0, 0);
        FUNC_10( VAR_8 == 0xffffff,
            "GetPixel of a bitmap with 32 bits/pixel returned %08x, expected 00ffffff\n", VAR_8);
        VAR_8 = FUNC_6( VAR_4, 1, 1);
        FUNC_10( VAR_8 == 0x000000,
            "GetPixel of a bitmap with 32 bits/pixel returned returned %08x, expected 00000000\n", VAR_8);
    }
    if( VAR_7) FUNC_8( VAR_4, VAR_7);
    FUNC_2( VAR_6);
    FUNC_7( 0, VAR_3 );
}
