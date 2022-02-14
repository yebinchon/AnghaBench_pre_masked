
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* member_9; int * member_8; int member_7; int member_6; int * member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ WNDCLASSA ;
typedef int LPCSTR ;
typedef int HBRUSH ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(void)
{
    WNDCLASSA VAR_4 =
    {
        0,
        &VAR_2,
        0,
        0,
        FUNC_0(((void*)0)),
        ((void*)0),
        FUNC_1(0, (LPCSTR)VAR_1),
        (HBRUSH)(VAR_0+1),
        ((void*)0),
        "WineStyleCheck",
    };

    VAR_3 = FUNC_2(&VAR_4);
    FUNC_3(VAR_3);
}
