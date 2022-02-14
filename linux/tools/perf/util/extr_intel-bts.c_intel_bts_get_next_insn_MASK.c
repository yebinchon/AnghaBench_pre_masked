
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct thread {int dummy; } ;
struct machine {int dummy; } ;
struct intel_bts_queue {int intel_pt_insn; int tid; TYPE_1__* bts; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {struct machine* machine; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char*,scalar_t__,int,int *) ;
 struct thread* FUNC_1 (struct machine*,int,int ) ;
 scalar_t__ FUNC_2 (struct thread*,struct machine*,unsigned char*,int ,int,int*) ;
 int FUNC_3 (struct thread*) ;

__attribute__((used)) static int FUNC_4(struct intel_bts_queue *VAR_1, u64 VAR_2)
{
 struct machine *VAR_3 = VAR_1->bts->machine;
 struct thread *VAR_4;
 unsigned char VAR_5[VAR_0];
 ssize_t VAR_6;
 bool VAR_7;
 int VAR_8 = -1;

 VAR_4 = FUNC_1(VAR_3, -1, VAR_1->tid);
 if (!VAR_4)
  return -1;

 VAR_6 = FUNC_2(VAR_4, VAR_3, VAR_5, VAR_2, VAR_0, &VAR_7);
 if (VAR_6 <= 0)
  goto out_put;

 if (FUNC_0(VAR_5, VAR_6, VAR_7, &VAR_1->intel_pt_insn))
  goto out_put;

 VAR_8 = 0;
out_put:
 FUNC_3(VAR_4);
 return VAR_8;
}
