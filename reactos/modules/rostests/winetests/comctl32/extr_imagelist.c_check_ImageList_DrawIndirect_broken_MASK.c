
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT32 ;
typedef int UINT ;
struct TYPE_3__ {int member_0; int member_2; int member_16; int member_15; int member_14; int member_13; int member_12; int member_11; int member_10; int member_9; int member_8; int member_7; int member_6; int member_5; int member_4; int member_3; int member_1; } ;
typedef TYPE_1__ IMAGELISTDRAWPARAMS ;
typedef int HIMAGELIST ;
typedef int HDC ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int,char*,int,int,int) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(HDC VAR_1, HIMAGELIST VAR_2, UINT32 *VAR_3, int VAR_4,
                                                UINT VAR_5, UINT VAR_6, DWORD VAR_7, UINT32 VAR_8,
                                                UINT32 VAR_9, int VAR_10)
{
    IMAGELISTDRAWPARAMS VAR_11 = {sizeof(IMAGELISTDRAWPARAMS), VAR_2, VAR_4, VAR_1,
        0, 0, 0, 0, 0, 0, VAR_0, VAR_0, VAR_5, 0, VAR_6, VAR_7, 0x00000000};
    VAR_3[0] = 0x00FFFFFF;
    FUNC_3(&VAR_11);
    FUNC_2(FUNC_1(VAR_3[0], VAR_8) ||
       FUNC_0(FUNC_1(VAR_3[0], VAR_9)),
       "ImageList_DrawIndirect: Pixel %08X, Expected a close match to %08X from line %d\n",
       VAR_3[0] & 0x00FFFFFF, VAR_8, VAR_10);
}
