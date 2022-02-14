
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_program {int idx; } ;
struct bpf_object {size_t nr_programs; struct bpf_program* programs; } ;



__attribute__((used)) static struct bpf_program *
FUNC_0(struct bpf_object *VAR_0, int VAR_1)
{
 struct bpf_program *VAR_2;
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->nr_programs; VAR_3++) {
  VAR_2 = &VAR_0->programs[VAR_3];
  if (VAR_2->idx == VAR_1)
   return VAR_2;
 }
 return ((void*)0);
}
