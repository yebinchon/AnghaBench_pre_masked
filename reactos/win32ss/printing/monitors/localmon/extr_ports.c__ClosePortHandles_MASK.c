
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ hFile; int pwszPortName; int * pwszMapping; } ;
typedef int PWSTR ;
typedef TYPE_1__* PLOCALMON_PORT ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void
FUNC_6(PLOCALMON_PORT VAR_3)
{
    PWSTR VAR_4;
    PWSTR VAR_5;


    if (VAR_3->hFile == VAR_2)
        return;


    FUNC_0(VAR_3->hFile);
    VAR_3->hFile = VAR_2;


    if (!VAR_3->pwszMapping)
        return;


    FUNC_3(VAR_3->pwszMapping);
    VAR_3->pwszMapping = ((void*)0);


    if (FUNC_4(VAR_3->pwszPortName, &VAR_5) == VAR_1)
    {
        if (FUNC_5(VAR_5, &VAR_4) == VAR_1)
        {
            FUNC_1(VAR_0, VAR_4, ((void*)0));
            FUNC_2(VAR_4);
        }

        FUNC_2(VAR_5);
    }
}
