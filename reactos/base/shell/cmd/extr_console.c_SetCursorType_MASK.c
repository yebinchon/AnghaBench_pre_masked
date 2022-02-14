
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int dwSize; scalar_t__ bVisible; } ;
typedef TYPE_1__ CONSOLE_CURSOR_INFO ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_1__*) ;

VOID FUNC_2(BOOL VAR_1, BOOL VAR_2)
{
    CONSOLE_CURSOR_INFO VAR_3;

    VAR_3.dwSize = VAR_1 ? 10 : 99;
    VAR_3.bVisible = VAR_2;

    FUNC_1(FUNC_0(VAR_0), &VAR_3);
}
