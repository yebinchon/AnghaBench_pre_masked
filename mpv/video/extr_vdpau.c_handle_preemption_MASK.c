
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_vdpau_ctx {int is_preempted; int preemption_user_notified; double last_preemption_retry_fail; int preemption_counter; } ;


 int FUNC_0 (struct mp_vdpau_ctx*,char*) ;
 int FUNC_1 (struct mp_vdpau_ctx*,char*) ;
 int FUNC_2 (struct mp_vdpau_ctx*) ;
 double FUNC_3 () ;
 scalar_t__ FUNC_4 (struct mp_vdpau_ctx*,int) ;

__attribute__((used)) static int FUNC_5(struct mp_vdpau_ctx *VAR_0)
{
    if (!VAR_0->is_preempted)
        return 0;
    FUNC_2(VAR_0);
    if (!VAR_0->preemption_user_notified) {
        FUNC_0(VAR_0, "Got display preemption notice! Will attempt to recover.\n");
        VAR_0->preemption_user_notified = 1;
    }


    if (VAR_0->last_preemption_retry_fail &&
        FUNC_3() - VAR_0->last_preemption_retry_fail < 1.0)
        return -1;
    if (FUNC_4(VAR_0, 0) < 0) {
        VAR_0->last_preemption_retry_fail = FUNC_3();
        return -1;
    }
    VAR_0->preemption_user_notified = 0;
    VAR_0->last_preemption_retry_fail = 0;
    VAR_0->is_preempted = 0;
    VAR_0->preemption_counter++;
    FUNC_1(VAR_0, "Recovered from display preemption.\n");
    return 1;
}
