
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int help; scalar_t__ name; } ;
typedef TYPE_1__* PCOMMAND ;
typedef int LPWSTR ;
typedef int INT ;
typedef int BOOL ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 () ;

BOOL FUNC_3(INT VAR_3, LPWSTR *VAR_4)
{
    PCOMMAND VAR_5;

    if (VAR_3 == 1)
    {
        FUNC_2();
        return VAR_1;
    }


    for (VAR_5 = VAR_2; VAR_5->name; VAR_5++)
    {
        if (FUNC_1(VAR_4[1], VAR_5->name) == 0)
        {
            FUNC_0(VAR_0, VAR_5->help);
            return VAR_1;
        }
    }

    FUNC_2();

    return VAR_1;
}
