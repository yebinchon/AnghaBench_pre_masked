
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_3__ {int member_0; int member_2; int member_12; int member_16; int member_15; int member_14; int member_13; int member_11; int member_10; int member_9; int member_8; int member_7; int member_6; int member_5; int member_4; int member_3; int member_1; } ;
typedef TYPE_1__ IMAGELISTDRAWPARAMS ;
typedef int HIMAGELIST ;
typedef int HDC ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int *,int ,int) ;

__attribute__((used)) static void FUNC_1(HDC VAR_4, HIMAGELIST VAR_5, UINT32 *VAR_6, int VAR_7,
                                                DWORD VAR_8, UINT32 VAR_9, int VAR_10)
{
    IMAGELISTDRAWPARAMS VAR_11 = {sizeof(IMAGELISTDRAWPARAMS), VAR_5, VAR_7, VAR_4,
        0, 0, 0, 0, 0, 0, VAR_0, VAR_0, VAR_1 | VAR_2, VAR_8, VAR_3, 0, 0x00000000};
    FUNC_0(&VAR_11, VAR_6, VAR_9, VAR_10);
}
