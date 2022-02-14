
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cs_etm_traceid_queue {int tid; TYPE_1__* thread; int pid; } ;
struct cs_etm_auxtrace {int machine; } ;
struct TYPE_2__ {int pid_; } ;


 TYPE_1__* FUNC_0 (int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct cs_etm_auxtrace *VAR_0,
        struct cs_etm_traceid_queue *VAR_1)
{
 if ((!VAR_1->thread) && (VAR_1->tid != -1))
  VAR_1->thread = FUNC_0(VAR_0->machine, -1,
          VAR_1->tid);

 if (VAR_1->thread)
  VAR_1->pid = VAR_1->thread->pid_;
}
