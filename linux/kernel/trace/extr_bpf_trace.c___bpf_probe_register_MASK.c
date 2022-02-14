
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct tracepoint {int dummy; } ;
struct bpf_raw_event_map {int num_args; scalar_t__ writable_size; scalar_t__ bpf_func; struct tracepoint* tp; } ;
struct bpf_prog {TYPE_1__* aux; } ;
struct TYPE_2__ {int max_ctx_offset; scalar_t__ max_tp_access; } ;


 int VAR_0 ;
 int FUNC_0 (struct tracepoint*,void*,struct bpf_prog*) ;

__attribute__((used)) static int FUNC_1(struct bpf_raw_event_map *VAR_1, struct bpf_prog *VAR_2)
{
 struct tracepoint *VAR_3 = VAR_1->tp;





 if (VAR_2->aux->max_ctx_offset > VAR_1->num_args * sizeof(u64))
  return -VAR_0;

 if (VAR_2->aux->max_tp_access > VAR_1->writable_size)
  return -VAR_0;

 return FUNC_0(VAR_3, (void *)VAR_1->bpf_func, VAR_2);
}
