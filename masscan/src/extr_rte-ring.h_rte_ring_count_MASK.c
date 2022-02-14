
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int tail; int mask; } ;
struct TYPE_3__ {int tail; } ;
struct rte_ring {TYPE_2__ prod; TYPE_1__ cons; } ;



__attribute__((used)) static inline unsigned
FUNC_0(const struct rte_ring *VAR_0)
{
    uint32_t VAR_1 = VAR_0->prod.tail;
    uint32_t VAR_2 = VAR_0->cons.tail;
    return ((VAR_1 - VAR_2) & VAR_0->prod.mask);
}
