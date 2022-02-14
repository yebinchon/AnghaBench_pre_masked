
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int bytes; } ;


 int FUNC_0 (char const*,int *) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_6)
{

    if (!FUNC_3(VAR_5 = FUNC_1()))
        return 0;

    VAR_0 = *VAR_5;

    VAR_0.bytes = VAR_4;

    VAR_1 = FUNC_0(VAR_6, ((void*)0));
    VAR_2 = 0;
    VAR_3 = FUNC_5(VAR_6) / 2;


    if (!FUNC_4(FUNC_2(&VAR_0)))
        return 0;
    return 1;
}
