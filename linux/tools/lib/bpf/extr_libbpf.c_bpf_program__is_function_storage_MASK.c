
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_program {scalar_t__ idx; } ;
struct TYPE_2__ {scalar_t__ text_shndx; } ;
struct bpf_object {scalar_t__ has_pseudo_calls; TYPE_1__ efile; } ;



__attribute__((used)) static bool FUNC_0(const struct bpf_program *VAR_0,
          const struct bpf_object *VAR_1)
{
 return VAR_0->idx == VAR_1->efile.text_shndx && VAR_1->has_pseudo_calls;
}
