
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wAttributes; } ;
typedef int DWORD ;
typedef TYPE_1__ CONSOLE_SCREEN_BUFFER_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_3(void)
{
    CONSOLE_SCREEN_BUFFER_INFO VAR_5;
    DWORD VAR_6 = 0;
    FUNC_0(VAR_3, &VAR_6);
    VAR_6 |= (VAR_0 | VAR_1);
    FUNC_2(VAR_3, VAR_6);
    FUNC_2(VAR_2, VAR_6);
    FUNC_1(VAR_3, &VAR_5);
    VAR_4 = VAR_5.wAttributes;
}
