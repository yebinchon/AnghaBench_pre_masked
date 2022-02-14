
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int text_shndx; } ;
struct bpf_object {TYPE_1__ efile; } ;


 scalar_t__ FUNC_0 (struct bpf_object const*,int) ;
 scalar_t__ FUNC_1 (struct bpf_object const*,int) ;

__attribute__((used)) static bool FUNC_2(const struct bpf_object *VAR_0,
           int VAR_1)
{
 return VAR_1 == VAR_0->efile.text_shndx ||
        FUNC_1(VAR_0, VAR_1) ||
        FUNC_0(VAR_0, VAR_1);
}
