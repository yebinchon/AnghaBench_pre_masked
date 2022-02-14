
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int size; unsigned int watermark; } ;
struct rte_ring {TYPE_1__ prod; } ;


 int VAR_0 ;

int
FUNC_0(struct rte_ring *VAR_1, unsigned VAR_2)
{
    if (VAR_2 >= VAR_1->prod.size)
        return -VAR_0;


    if (VAR_2 == 0)
        VAR_2 = VAR_1->prod.size;

    VAR_1->prod.watermark = VAR_2;
    return 0;
}
