
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int queue; } ;
typedef TYPE_1__ ConnectionPool ;
typedef int Connection ;


 int * FUNC_0 () ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static Connection *
FUNC_4 (ConnectionPool *VAR_0)
{
    Connection *VAR_1 = ((void*)0);

    FUNC_2 (&VAR_0->lock);
    VAR_1 = FUNC_1 (VAR_0->queue);
    if (!VAR_1) {
        VAR_1 = FUNC_0 ();
    }
    FUNC_3 (&VAR_0->lock);

    return VAR_1;
}
