
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ obj_buf_sz; int * obj_buf; int fd; scalar_t__ nr_reloc; int reloc; int * bss; int * rodata; int * data; int * symbols; int * elf; } ;
struct bpf_object {TYPE_1__ efile; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct bpf_object*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct bpf_object *VAR_0)
{
 if (!FUNC_1(VAR_0))
  return;

 if (VAR_0->efile.elf) {
  FUNC_0(VAR_0->efile.elf);
  VAR_0->efile.elf = ((void*)0);
 }
 VAR_0->efile.symbols = ((void*)0);
 VAR_0->efile.data = ((void*)0);
 VAR_0->efile.rodata = ((void*)0);
 VAR_0->efile.bss = ((void*)0);

 FUNC_3(&VAR_0->efile.reloc);
 VAR_0->efile.nr_reloc = 0;
 FUNC_2(VAR_0->efile.fd);
 VAR_0->efile.obj_buf = ((void*)0);
 VAR_0->efile.obj_buf_sz = 0;
}
