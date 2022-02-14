
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int curl; scalar_t__ release; } ;
struct TYPE_8__ {scalar_t__ err_cnt; int lock; int queue; } ;
typedef TYPE_1__ ConnectionPool ;
typedef TYPE_2__ Connection ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6 (ConnectionPool *VAR_1, Connection *VAR_2)
{
    if (!VAR_2)
        return;

    if (VAR_2->release) {
        FUNC_0 (VAR_2);

        FUNC_4 (&VAR_1->lock);
        if (++VAR_1->err_cnt >= VAR_0) {
            FUNC_1 (VAR_1);
        }
        FUNC_5 (&VAR_1->lock);

        return;
    }

    FUNC_2 (VAR_2->curl);


    FUNC_4 (&VAR_1->lock);
    VAR_1->err_cnt = 0;
    FUNC_3 (VAR_1->queue, VAR_2);
    FUNC_5 (&VAR_1->lock);
}
