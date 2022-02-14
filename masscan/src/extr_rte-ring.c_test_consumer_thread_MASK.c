
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rte_ring {int dummy; } ;
struct Test {int consumer_done; scalar_t__ total_count; int not_active; struct rte_ring* ring; } ;
typedef scalar_t__ Element ;


 int FUNC_0 (struct rte_ring*) ;
 int FUNC_1 (struct rte_ring*,void**) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
    struct Test *VAR_1 = (struct Test *)VAR_0;
    struct rte_ring *VAR_2 = VAR_1->ring;
    int VAR_3;

    VAR_1->total_count = 0;

    while (!VAR_1->not_active) {
        Element VAR_4;

        VAR_3 = FUNC_1(VAR_2, (void**)&VAR_4);
        if (VAR_3 == 0)
            VAR_1->total_count += VAR_4;
        else {
            ;
        }
    }



    while (!FUNC_0(VAR_2)) {
        Element VAR_5;

        VAR_3 = FUNC_1(VAR_2, (void**)&VAR_5);
        if (VAR_3 == 0)
            VAR_1->total_count += VAR_5;
        else {
            ;
        }
    }

    VAR_1->consumer_done = 1;
}
