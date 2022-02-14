
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ data_shndx; scalar_t__ rodata_shndx; scalar_t__ bss_shndx; int bss; int rodata; int data; } ;
struct TYPE_5__ {int rodata; int data; } ;
struct TYPE_4__ {int global_data; } ;
struct bpf_object {TYPE_3__ efile; TYPE_2__ sections; TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bpf_object*,int ,scalar_t__,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct bpf_object *VAR_3)
{
 int VAR_4;

 if (!VAR_3->caps.global_data)
  return 0;



 if (VAR_3->efile.data_shndx >= 0) {
  VAR_4 = FUNC_0(VAR_3, VAR_1,
          VAR_3->efile.data_shndx,
          VAR_3->efile.data,
          &VAR_3->sections.data);
  if (VAR_4)
   return VAR_4;
 }
 if (VAR_3->efile.rodata_shndx >= 0) {
  VAR_4 = FUNC_0(VAR_3, VAR_2,
          VAR_3->efile.rodata_shndx,
          VAR_3->efile.rodata,
          &VAR_3->sections.rodata);
  if (VAR_4)
   return VAR_4;
 }
 if (VAR_3->efile.bss_shndx >= 0) {
  VAR_4 = FUNC_0(VAR_3, VAR_0,
          VAR_3->efile.bss_shndx,
          VAR_3->efile.bss, ((void*)0));
  if (VAR_4)
   return VAR_4;
 }
 return 0;
}
