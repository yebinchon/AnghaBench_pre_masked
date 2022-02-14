
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data_shndx; int bss_shndx; int rodata_shndx; } ;
struct bpf_object {TYPE_1__ efile; } ;



__attribute__((used)) static bool FUNC_0(const struct bpf_object *VAR_0,
          int VAR_1)
{
 return VAR_1 == VAR_0->efile.data_shndx ||
        VAR_1 == VAR_0->efile.bss_shndx ||
        VAR_1 == VAR_0->efile.rodata_shndx;
}
