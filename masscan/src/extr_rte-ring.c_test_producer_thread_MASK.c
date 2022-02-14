
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rte_ring {int dummy; } ;
struct Test {int producer_done; int producer_started; struct rte_ring* ring; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct rte_ring*,void*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
    struct Test *VAR_1 = (struct Test *)VAR_0;
    unsigned VAR_2 = 1000;
    struct rte_ring *VAR_3 = VAR_1->ring;

    FUNC_0(&VAR_1->producer_started, 1);
    while (VAR_2) {
        int VAR_4;
        for (;;) {
            VAR_4 = FUNC_1(VAR_3, (void*)(size_t)VAR_2);
            if (VAR_4 == 0)
                break;
        }
        VAR_2--;
    }
    FUNC_0(&VAR_1->producer_done, 1);
}
