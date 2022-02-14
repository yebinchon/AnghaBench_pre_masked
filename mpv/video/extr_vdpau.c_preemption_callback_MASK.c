
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_vdpau_ctx {int is_preempted; int preempt_lock; } ;
typedef int VdpDevice ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(VdpDevice VAR_0, void *VAR_1)
{
    struct mp_vdpau_ctx *VAR_2 = VAR_1;

    FUNC_0(&VAR_2->preempt_lock);
    VAR_2->is_preempted = 1;
    FUNC_1(&VAR_2->preempt_lock);
}
