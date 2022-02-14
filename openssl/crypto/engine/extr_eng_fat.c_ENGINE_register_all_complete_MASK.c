
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; } ;
typedef TYPE_1__ ENGINE ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(void)
{
    ENGINE *VAR_1;

    for (VAR_1 = FUNC_0(); VAR_1; VAR_1 = FUNC_1(VAR_1))
        if (!(VAR_1->flags & VAR_0))
            FUNC_2(VAR_1);
    return 1;
}
