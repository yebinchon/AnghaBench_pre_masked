
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long* objs; } ;
struct size_class {TYPE_1__ stats; } ;



__attribute__((used)) static inline void FUNC_0(struct size_class *VAR_0,
    int VAR_1, unsigned long VAR_2)
{
 VAR_0->stats.objs[VAR_1] += VAR_2;
}
