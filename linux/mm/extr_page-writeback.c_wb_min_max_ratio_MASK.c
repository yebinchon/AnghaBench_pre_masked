
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bdi_writeback {TYPE_1__* bdi; } ;
struct TYPE_2__ {unsigned long min_ratio; unsigned long max_ratio; } ;



__attribute__((used)) static void FUNC_0(struct bdi_writeback *VAR_0,
        unsigned long *VAR_1, unsigned long *VAR_2)
{
 *VAR_1 = VAR_0->bdi->min_ratio;
 *VAR_2 = VAR_0->bdi->max_ratio;
}
