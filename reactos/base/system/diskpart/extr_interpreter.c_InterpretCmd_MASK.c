
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; int (* func ) (int,int *) ;} ;
typedef TYPE_1__* PCOMMAND ;
typedef int LPWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int *) ;
 scalar_t__ FUNC_2 (int ,char*) ;

BOOL
FUNC_3(int VAR_3, LPWSTR *VAR_4)
{
    PCOMMAND VAR_5;


    if (VAR_3 < 1)
        return VAR_1;



    if(FUNC_2(VAR_4[0], L"exit") == 0)
        return VAR_0;

    if(FUNC_2(VAR_4[0], L"rem") == 0)
        return VAR_1;


    for (VAR_5 = VAR_2; VAR_5->name; VAR_5++)
    {
        if (FUNC_2(VAR_4[0], VAR_5->name) == 0)
            return VAR_5->func(VAR_3, VAR_4);
    }

    FUNC_0();

    return VAR_1;
}
