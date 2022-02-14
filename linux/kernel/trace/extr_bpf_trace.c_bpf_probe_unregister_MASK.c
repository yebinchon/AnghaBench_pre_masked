
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_raw_event_map {scalar_t__ bpf_func; int tp; } ;
struct bpf_prog {int dummy; } ;


 int FUNC_0 (int ,void*,struct bpf_prog*) ;

int FUNC_1(struct bpf_raw_event_map *VAR_0, struct bpf_prog *VAR_1)
{
 return FUNC_0(VAR_0->tp, (void *)VAR_0->bpf_func, VAR_1);
}
