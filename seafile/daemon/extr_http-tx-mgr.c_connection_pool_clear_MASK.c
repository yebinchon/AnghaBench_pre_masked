
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int queue; } ;
typedef TYPE_1__ ConnectionPool ;
typedef int Connection ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2 (ConnectionPool *VAR_0)
{
    Connection *VAR_1 = ((void*)0);

    while (1) {
        VAR_1 = FUNC_1 (VAR_0->queue);
        if (!VAR_1)
            break;
        FUNC_0 (VAR_1);
    }
}
