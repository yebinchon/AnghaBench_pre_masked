
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int HDC ;
typedef int BITMAPINFO ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,int,int,int ,int,int,int,int,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int,char*,int ,int ,int ,int ,int ,int ,int ,int ,int,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_5(HDC VAR_1, HDC VAR_2, BITMAPINFO *VAR_3, UINT32 *VAR_4, UINT32 *VAR_5,
                                     int VAR_6, int VAR_7, int VAR_8, int VAR_9,
                                     int VAR_10, int VAR_11, int VAR_12, int VAR_13,
                                     UINT32 *VAR_14, int VAR_15)
{
    int VAR_16 = FUNC_1( VAR_3 );

    FUNC_3(VAR_4, 0, VAR_16);
    FUNC_0(VAR_1, VAR_6, VAR_7, VAR_8, VAR_9,
               VAR_2, VAR_10, VAR_11, VAR_12, VAR_13, VAR_0);
    FUNC_4(FUNC_2(VAR_4, VAR_14, VAR_16) == 0,
        "StretchBlt expected { %08X, %08X, %08X, %08X } got { %08X, %08X, %08X, %08X } "
        "stretching { %d, %d, %d, %d } to { %d, %d, %d, %d } from line %d\n",
        VAR_14[0], VAR_14[1], VAR_14[2], VAR_14[3],
        VAR_4[0], VAR_4[1], VAR_4[2], VAR_4[3],
        VAR_10, VAR_11, VAR_12, VAR_13,
        VAR_6, VAR_7, VAR_8, VAR_9, VAR_15);
}
