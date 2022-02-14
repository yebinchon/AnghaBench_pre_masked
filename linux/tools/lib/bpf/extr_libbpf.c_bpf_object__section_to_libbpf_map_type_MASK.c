
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data_shndx; int bss_shndx; int rodata_shndx; } ;
struct bpf_object {TYPE_1__ efile; } ;
typedef enum libbpf_map_type { ____Placeholder_libbpf_map_type } libbpf_map_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static enum libbpf_map_type
FUNC_0(const struct bpf_object *VAR_4, int VAR_5)
{
 if (VAR_5 == VAR_4->efile.data_shndx)
  return VAR_1;
 else if (VAR_5 == VAR_4->efile.bss_shndx)
  return VAR_0;
 else if (VAR_5 == VAR_4->efile.rodata_shndx)
  return VAR_2;
 else
  return VAR_3;
}
