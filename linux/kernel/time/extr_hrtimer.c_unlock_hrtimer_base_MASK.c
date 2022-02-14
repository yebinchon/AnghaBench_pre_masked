
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hrtimer {TYPE_2__* base; } ;
struct TYPE_4__ {TYPE_1__* cpu_base; } ;
struct TYPE_3__ {int lock; } ;


 int FUNC_0 (int *,unsigned long) ;

__attribute__((used)) static inline
void FUNC_1(const struct hrtimer *VAR_0, unsigned long *VAR_1)
{
 FUNC_0(&VAR_0->base->cpu_base->lock, *VAR_1);
}
