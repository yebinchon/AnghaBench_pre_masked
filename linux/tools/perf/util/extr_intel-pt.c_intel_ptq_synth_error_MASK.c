
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct intel_pt_state {int from_ip; int err; } ;
struct intel_pt_queue {int tid; int pid; int cpu; int timestamp; struct intel_pt* pt; } ;
struct intel_pt {int tc; scalar_t__ timeless_decoding; } ;


 int FUNC_0 (struct intel_pt*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct intel_pt_queue *VAR_0,
     const struct intel_pt_state *VAR_1)
{
 struct intel_pt *VAR_2 = VAR_0->pt;
 u64 VAR_3 = VAR_0->timestamp;

 VAR_3 = VAR_2->timeless_decoding ? 0 : FUNC_1(VAR_3, &VAR_2->tc);

 return FUNC_0(VAR_2, VAR_1->err, VAR_0->cpu, VAR_0->pid,
        VAR_0->tid, VAR_1->from_ip, VAR_3);
}
