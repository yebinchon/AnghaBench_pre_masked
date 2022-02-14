
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int region_data ;
typedef int UINT ;
typedef int REAL ;
typedef int HDC ;
typedef int GpStatus ;
typedef int GpRegion ;
typedef int GpGraphics ;
typedef int DWORD ;
typedef int COLORREF ;
typedef int BYTE ;


 int VAR_0 ;
 int FUNC_0 (int ,int **) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *,int,int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,double,double,int ) ;
 int FUNC_10 (int *,int,int,int,int,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (double,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_16(void)
{
    GpStatus VAR_4;
    GpGraphics *VAR_5 = ((void*)0);
    HDC VAR_6 = FUNC_11( VAR_3 );
    GpRegion *VAR_7;
    COLORREF VAR_8;
    UINT VAR_9;
    struct {
        DWORD size;
        DWORD checksum;
        DWORD magic;
        DWORD num_children;
        DWORD element_type;
        REAL x;
        REAL y;
        REAL width;
        REAL height;
    } VAR_10;

    VAR_4 = FUNC_0(VAR_6, &VAR_5);
    FUNC_14(VAR_2, VAR_4);
    VAR_4 = FUNC_1(&VAR_7);
    FUNC_14(VAR_2, VAR_4);

    VAR_4 = FUNC_6(VAR_5, 0xff000000);
    FUNC_14(VAR_2, VAR_4);

    VAR_4 = FUNC_10(VAR_5, 10, 10, -10, -10, VAR_0);
    FUNC_14(VAR_2, VAR_4);
    VAR_4 = FUNC_4(VAR_5, VAR_7);
    FUNC_14(VAR_2, VAR_4);
    VAR_4 = FUNC_5(VAR_7, (BYTE*)&VAR_10, sizeof(VAR_10), &VAR_9);
    FUNC_14(VAR_2, VAR_4);
    FUNC_14(36, VAR_9);
    FUNC_14(28, VAR_10.size);
    FUNC_14(0, VAR_10.num_children);
    FUNC_14(0x10000000 , VAR_10.element_type);
    FUNC_15(0.0, VAR_10.x);
    FUNC_15(0.0, VAR_10.y);
    FUNC_15(10.0, VAR_10.width);
    FUNC_15(10.0, VAR_10.height);


    VAR_4 = FUNC_6(VAR_5, 0xffff0000);
    FUNC_14(VAR_2, VAR_4);
    VAR_8 = FUNC_12(VAR_6, 5, 5);
    FUNC_14(0, VAR_8);

    VAR_4 = FUNC_9(VAR_5, 2.0, 2.0, VAR_1);
    FUNC_14(VAR_2, VAR_4);

    VAR_4 = FUNC_6(VAR_5, 0xffff0000);
    FUNC_14(VAR_2, VAR_4);
    VAR_8 = FUNC_12(VAR_6, 5, 5);
    FUNC_14(0, VAR_8);

    VAR_4 = FUNC_7(VAR_5);
    FUNC_14(VAR_2, VAR_4);
    VAR_4 = FUNC_8(VAR_5);
    FUNC_14(VAR_2, VAR_4);
    VAR_4 = FUNC_6(VAR_5, 0xff000000);
    FUNC_14(VAR_2, VAR_4);

    VAR_4 = FUNC_9(VAR_5, 2.0, 2.0, VAR_1);
    FUNC_14(VAR_2, VAR_4);

    VAR_4 = FUNC_10(VAR_5, 5, 5, -5, -5, VAR_0);
    FUNC_14(VAR_2, VAR_4);
    VAR_4 = FUNC_4(VAR_5, VAR_7);
    FUNC_14(VAR_2, VAR_4);
    VAR_4 = FUNC_5(VAR_7, (BYTE*)&VAR_10, sizeof(VAR_10), &VAR_9);
    FUNC_14(VAR_2, VAR_4);
    FUNC_14(36, VAR_9);
    FUNC_14(28, VAR_10.size);
    FUNC_14(0, VAR_10.num_children);
    FUNC_14(0x10000000 , VAR_10.element_type);
    FUNC_15(0.0, VAR_10.x);
    FUNC_15(0.0, VAR_10.y);
    FUNC_15(5.0, VAR_10.width);
    FUNC_15(5.0, VAR_10.height);

    VAR_4 = FUNC_6(VAR_5, 0xffff0000);
    FUNC_14(VAR_2, VAR_4);
    VAR_8 = FUNC_12(VAR_6, 5, 5);
    FUNC_14(0xff, VAR_8);

    FUNC_2(VAR_5);
    FUNC_3(VAR_7);
    FUNC_13(VAR_3, VAR_6);
}
