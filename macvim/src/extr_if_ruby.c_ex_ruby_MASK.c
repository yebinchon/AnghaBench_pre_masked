
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ arg; int skip; } ;
typedef TYPE_1__ exarg_T ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (char*) ;

void FUNC_5(exarg_T *VAR_0)
{
    int VAR_1;
    char *VAR_2 = ((void*)0);

    VAR_2 = (char *)FUNC_3(VAR_0, VAR_0->arg);
    if (!VAR_0->skip && FUNC_0())
    {
 if (VAR_2 == ((void*)0))
     FUNC_2((char *)VAR_0->arg, &VAR_1);
 else
     FUNC_2(VAR_2, &VAR_1);
 if (VAR_1)
     FUNC_1(VAR_1);
    }
    FUNC_4(VAR_2);
}
