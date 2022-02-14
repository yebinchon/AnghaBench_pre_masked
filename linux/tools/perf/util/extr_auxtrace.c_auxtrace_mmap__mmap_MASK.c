
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_mmap_page {scalar_t__ aux_size; int aux_offset; } ;
struct auxtrace_mmap_params {int offset; int prot; scalar_t__ len; int cpu; int tid; int idx; int mask; } ;
struct auxtrace_mmap {int * base; int cpu; int tid; int idx; scalar_t__ prev; scalar_t__ len; int mask; void* userpg; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int * FUNC_1 (int *,scalar_t__,int ,int ,int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

int FUNC_4(struct auxtrace_mmap *VAR_2,
   struct auxtrace_mmap_params *VAR_3,
   void *VAR_4, int VAR_5)
{
 struct perf_event_mmap_page *VAR_6 = VAR_4;

 FUNC_0(VAR_2->base, "Uninitialized auxtrace_mmap\n");

 VAR_2->userpg = VAR_4;
 VAR_2->mask = VAR_3->mask;
 VAR_2->len = VAR_3->len;
 VAR_2->prev = 0;
 VAR_2->idx = VAR_3->idx;
 VAR_2->tid = VAR_3->tid;
 VAR_2->cpu = VAR_3->cpu;

 if (!VAR_3->len) {
  VAR_2->base = ((void*)0);
  return 0;
 }


 FUNC_3("Cannot use AUX area tracing mmaps\n");
 return -1;


 VAR_6->aux_offset = VAR_3->offset;
 VAR_6->aux_size = VAR_3->len;

 VAR_2->base = FUNC_1(((void*)0), VAR_3->len, VAR_3->prot, VAR_1, VAR_5, VAR_3->offset);
 if (VAR_2->base == VAR_0) {
  FUNC_2("failed to mmap AUX area\n");
  VAR_2->base = ((void*)0);
  return -1;
 }

 return 0;
}
