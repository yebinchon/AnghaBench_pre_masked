
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int priority; } ;
struct TYPE_5__ {int priority; } ;
struct TYPE_7__ {TYPE_2__ parameters_fragment; scalar_t__ from_fragment; TYPE_1__ parameters_proc_swaps; scalar_t__ from_proc_swaps; } ;
typedef TYPE_3__ Swap ;



__attribute__((used)) static int FUNC_0(Swap *VAR_0) {
        if (VAR_0->from_proc_swaps)
                return VAR_0->parameters_proc_swaps.priority;
        if (VAR_0->from_fragment)
                return VAR_0->parameters_fragment.priority;
        return -1;
}
