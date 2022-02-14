
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bits ;
typedef int RECT ;
typedef int * HDC ;
typedef int * HBRUSH ;
typedef int * HBITMAP ;
typedef int DWORD ;
typedef int COLORREF ;


 int VAR_0 ;
 int * FUNC_0 (int,int,int,int,int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;
 int * FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int ,int ,int,int) ;
 int FUNC_11 (int *,int,int) ;
 int FUNC_12 (int,char*,...) ;

__attribute__((used)) static void FUNC_13(void)
{
    HDC VAR_1, VAR_2;
    DWORD VAR_3[64];
    HBITMAP VAR_4, VAR_5;
    COLORREF VAR_6;
    HBRUSH VAR_7;
    RECT VAR_8;


    FUNC_11(VAR_3, 0xff, sizeof(VAR_3));

    VAR_1 = FUNC_5(0);
    FUNC_12( VAR_1 != ((void*)0), "CreateDC rets %p\n", VAR_1);

    VAR_2 = FUNC_1(VAR_1);
    FUNC_12(VAR_2 != ((void*)0), "CreateCompatibleDC rets %p\n", VAR_2);

    VAR_4 = FUNC_0(32, 32, 1, 1, VAR_3);
    FUNC_12(VAR_4 != ((void*)0), "CreateBitmap returns %p\n", VAR_4);
    VAR_5 = FUNC_9(VAR_2, VAR_4);
    FUNC_12(VAR_5 != ((void*)0), "SelectObject returned NULL\n");
    VAR_6 = FUNC_6(VAR_2, 0, 0);
    FUNC_12( VAR_6 == 0xffffff, "GetPixel returned %08x, expected 0xffffff\n", VAR_6);


    VAR_7 = FUNC_9(VAR_2, FUNC_7(VAR_0));
    FUNC_10(&VAR_8, 0, 0, 5, 5);
    FUNC_4(VAR_2, &VAR_8, 0);
    FUNC_9(VAR_2, VAR_7);

    VAR_6 = FUNC_6(VAR_2, 0, 0);
    FUNC_12(VAR_6 == 0, "GetPixel returned %08x, expected 0\n", VAR_6);

    FUNC_9(VAR_2, VAR_5);
    FUNC_3(VAR_4);
    FUNC_2(VAR_2);
    FUNC_8(0, VAR_1);
}
