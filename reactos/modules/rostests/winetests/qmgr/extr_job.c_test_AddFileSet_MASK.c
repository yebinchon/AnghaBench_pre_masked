
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_1; int member_0; } ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ BG_FILE_INFO ;


 scalar_t__ FUNC_0 (int ,int,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,char*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(void)
{
    HRESULT VAR_6;
    BG_FILE_INFO VAR_7[2] =
        {
            {VAR_4, VAR_2},
            {VAR_5, VAR_3}
        };
    VAR_6 = FUNC_0(VAR_1, 2, VAR_7);
    FUNC_1(VAR_6 == VAR_0, "AddFileSet failed: 0x%08x\n", VAR_6);
}
