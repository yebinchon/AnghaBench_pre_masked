
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo {TYPE_1__* in; } ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {int lock; int drop_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct vo *VAR_0, int64_t VAR_1)
{
    FUNC_0(&VAR_0->in->lock);
    VAR_0->in->drop_count += VAR_1;
    FUNC_1(&VAR_0->in->lock);
}
