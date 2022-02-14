
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct kcore {int elf; } ;
typedef int off_t ;
struct TYPE_3__ {int p_flags; int p_align; int p_memsz; int p_filesz; int p_paddr; int p_vaddr; int p_offset; int p_type; } ;
typedef TYPE_1__ GElf_Phdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,TYPE_1__*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(struct kcore *VAR_5, int VAR_6, off_t VAR_7,
      u64 VAR_8, u64 VAR_9)
{
 GElf_Phdr VAR_10 = {
  .p_type = VAR_3,
  .p_flags = VAR_0 | VAR_1 | VAR_2,
  .p_offset = VAR_7,
  .p_vaddr = VAR_8,
  .p_paddr = 0,
  .p_filesz = VAR_9,
  .p_memsz = VAR_9,
  .p_align = VAR_4,
 };

 if (!FUNC_0(VAR_5->elf, VAR_6, &VAR_10))
  return -1;

 return 0;
}
