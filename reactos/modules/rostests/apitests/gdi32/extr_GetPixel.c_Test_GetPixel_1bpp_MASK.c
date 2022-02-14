
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int HDC ;
typedef int * HBITMAP ;
typedef int COLORREF ;


 int * FUNC_0 (int,int,int,int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,int ) ;
 int * FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int,char*,...) ;

void FUNC_9()
{
    HDC VAR_0;
    HBITMAP VAR_1;
    char VAR_2[] = {0x80, 0x0};
    COLORREF VAR_3;

    VAR_1 = FUNC_0(2,1,1,1,VAR_2);
    FUNC_8(VAR_1 != ((void*)0), "Failed to create a monochrom bitmap...\n");
    VAR_0 = FUNC_1(0);
    VAR_1 = FUNC_5(VAR_0, VAR_1);
    FUNC_8(VAR_1 != ((void*)0), "Could not select the bitmap into the DC.\n");

    VAR_3 = FUNC_4(VAR_0, 0, 0);
    FUNC_8(VAR_3 == 0xFFFFFF, "Wrong color at 0,0 : 0x%08x\n", (UINT)VAR_3);
    VAR_3 = FUNC_4(VAR_0, 1, 0);
    FUNC_8(VAR_3 == 0, "Wrong color at 1,0 : 0x%08x\n", (UINT)VAR_3);

    FUNC_6(VAR_0, 0x0000FF);
    FUNC_7(VAR_0, 0x00FF00);
    VAR_3 = FUNC_4(VAR_0, 0, 0);
    FUNC_8(VAR_3 == 0xFFFFFF, "Wrong color at 0,0 : 0x%08x\n", (UINT)VAR_3);
    VAR_3 = FUNC_4(VAR_0, 1, 0);
    FUNC_8(VAR_3 == 0, "Wrong color at 1,0 : 0x%08x\n", (UINT)VAR_3);

    FUNC_6(VAR_0, 0x12345678);
    FUNC_7(VAR_0, 0x87654321);
    VAR_3 = FUNC_4(VAR_0, 0, 0);
    FUNC_8(VAR_3 == 0xFFFFFF, "Wrong color at 0,0 : 0x%08x\n", (UINT)VAR_3);
    VAR_3 = FUNC_4(VAR_0, 1, 0);
    FUNC_8(VAR_3 == 0, "Wrong color at 1,0 : 0x%08x\n", (UINT)VAR_3);

    VAR_1 = FUNC_5(VAR_0, VAR_1);
    FUNC_3(VAR_1);
    FUNC_2(VAR_0);
}
