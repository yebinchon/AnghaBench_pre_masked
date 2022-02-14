
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* member_9; int * member_8; int member_7; int member_6; int * member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ WNDCLASSA ;
typedef int LPSTR ;
typedef int HBRUSH ;
typedef int ATOM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static ATOM FUNC_3(void)
{
    WNDCLASSA VAR_3 =
    {
        0,
        &VAR_1,
        0,
        0,
        FUNC_0(((void*)0)),
        ((void*)0),
        FUNC_1(((void*)0), (LPSTR)VAR_2),
        (HBRUSH)(VAR_0+1),
        ((void*)0),
        "WineOleTestClass",
    };

    return FUNC_2(&VAR_3);
}
