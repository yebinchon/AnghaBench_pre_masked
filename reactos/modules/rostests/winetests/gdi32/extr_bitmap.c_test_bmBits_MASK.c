
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int bmp ;
typedef int bits ;
struct TYPE_6__ {int bmBits; } ;
typedef int * HBITMAP ;
typedef TYPE_1__ BYTE ;
typedef TYPE_1__ BITMAP ;


 int * FUNC_0 (int,int,int,int,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 (int,char*) ;

__attribute__((used)) static void FUNC_5(void)
{
    BYTE VAR_0[4];
    HBITMAP VAR_1;
    BITMAP VAR_2;

    FUNC_3(VAR_0, 0, sizeof(VAR_0));
    VAR_1 = FUNC_0(2, 2, 1, 4, VAR_0);
    FUNC_4(VAR_1 != ((void*)0), "CreateBitmap failed\n");

    FUNC_3(&VAR_2, 0xFF, sizeof(VAR_2));
    FUNC_4(FUNC_2(VAR_1, sizeof(VAR_2), &VAR_2) == sizeof(VAR_2),
       "GetObject failed or returned a wrong structure size\n");
    FUNC_4(!VAR_2.bmBits, "bmBits must be NULL for device-dependent bitmaps\n");

    FUNC_1(VAR_1);
}
