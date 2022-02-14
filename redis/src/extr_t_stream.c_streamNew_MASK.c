
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ seq; scalar_t__ ms; } ;
struct TYPE_6__ {int * cgroups; TYPE_1__ last_id; scalar_t__ length; int rax; } ;
typedef TYPE_2__ stream ;


 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int) ;

stream *FUNC_2(void) {
    stream *VAR_0 = FUNC_1(sizeof(*VAR_0));
    VAR_0->rax = FUNC_0();
    VAR_0->length = 0;
    VAR_0->last_id.ms = 0;
    VAR_0->last_id.seq = 0;
    VAR_0->cgroups = ((void*)0);
    return VAR_0;
}
