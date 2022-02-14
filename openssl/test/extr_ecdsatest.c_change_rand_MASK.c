
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int bytes; } ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_4(void)
{

    if (!FUNC_2(VAR_2 = FUNC_0()))
        return 0;

    VAR_0 = *VAR_2;

    VAR_0.bytes = VAR_1;

    if (!FUNC_3(FUNC_1(&VAR_0)))
        return 0;
    return 1;
}
