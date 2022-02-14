
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; void* btfs; void* infos; } ;
struct perf_env {TYPE_1__ bpf_progs; } ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct perf_env *VAR_1)
{
 VAR_1->bpf_progs.infos = VAR_0;
 VAR_1->bpf_progs.btfs = VAR_0;
 FUNC_0(&VAR_1->bpf_progs.lock);
}
