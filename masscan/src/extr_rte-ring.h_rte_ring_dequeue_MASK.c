
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sc_dequeue; } ;
struct rte_ring {TYPE_1__ cons; } ;


 int FUNC_0 (struct rte_ring*,void**) ;
 int FUNC_1 (struct rte_ring*,void**) ;

__attribute__((used)) static inline int
FUNC_2(struct rte_ring *VAR_0, void **VAR_1)
{
    if (VAR_0->cons.sc_dequeue)
        return FUNC_1(VAR_0, VAR_1);
    else
        return FUNC_0(VAR_0, VAR_1);
}
