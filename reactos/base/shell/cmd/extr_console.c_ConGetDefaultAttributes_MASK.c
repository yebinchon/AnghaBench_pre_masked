
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wAttributes; } ;
typedef int * PWORD ;
typedef scalar_t__ HANDLE ;
typedef TYPE_1__ CONSOLE_SCREEN_BUFFER_INFO ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int,int,int *,int ,int ,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (scalar_t__,TYPE_1__*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (char*) ;

BOOL FUNC_4(PWORD VAR_7)
{
    BOOL VAR_8;
    HANDLE VAR_9;
    CONSOLE_SCREEN_BUFFER_INFO VAR_10;



    VAR_9 = FUNC_1(FUNC_3("CONOUT$"), VAR_3|VAR_4,
                          VAR_1|VAR_2, ((void*)0),
                          VAR_6, 0, ((void*)0));
    if (VAR_9 == VAR_5)
        return VAR_0;

    VAR_8 = FUNC_2(VAR_9, &VAR_10);
    if (VAR_8)
        *VAR_7 = VAR_10.wAttributes;

    FUNC_0(VAR_9);
    return VAR_8;
}
