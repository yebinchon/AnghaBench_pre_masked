
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct elf_info {TYPE_2__* symtab_start; TYPE_1__* hdr; } ;
struct TYPE_15__ {unsigned int r_offset; unsigned int r_info; unsigned int r_addend; } ;
struct TYPE_14__ {int sh_offset; int sh_size; } ;
struct TYPE_13__ {int st_shndx; } ;
struct TYPE_12__ {scalar_t__ e_machine; } ;
typedef TYPE_2__ Elf_Sym ;
typedef TYPE_3__ Elf_Shdr ;
typedef TYPE_4__ Elf_Rela ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 scalar_t__ VAR_0 ;
 void* FUNC_4 (unsigned int) ;
 int FUNC_5 (char const*,struct elf_info*,TYPE_4__*,TYPE_2__*,char const*) ;
 int FUNC_6 (char const*,TYPE_4__*) ;
 scalar_t__ FUNC_7 (TYPE_4__*,TYPE_4__*,char const*) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (char const*,int ) ;
 char* FUNC_10 (struct elf_info*,TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(const char *VAR_2, struct elf_info *VAR_3,
    Elf_Shdr *VAR_4)
{
 Elf_Sym *VAR_5;
 Elf_Rela *VAR_6;
 Elf_Rela VAR_7;
 unsigned int VAR_8;
 const char *VAR_9;

 Elf_Rela *VAR_10 = (void *)VAR_3->hdr + VAR_4->sh_offset;
 Elf_Rela *VAR_11 = (void *)VAR_10 + VAR_4->sh_size;

 VAR_9 = FUNC_10(VAR_3, VAR_4);
 VAR_9 += FUNC_11(".rela");

 if (FUNC_9(VAR_9, VAR_1))
  return;

 for (VAR_6 = VAR_10; VAR_6 < VAR_11; VAR_6++) {
  VAR_7.r_offset = FUNC_4(VAR_6->r_offset);

  if (VAR_3->hdr->e_machine == VAR_0) {
   unsigned int VAR_12;
   VAR_8 = FUNC_0(VAR_6->r_info);
   VAR_8 = FUNC_4(VAR_8);
   VAR_12 = FUNC_1(VAR_6->r_info);
   VAR_7.r_info = FUNC_2(VAR_8, VAR_12);
  } else {
   VAR_7.r_info = FUNC_4(VAR_6->r_info);
   VAR_8 = FUNC_3(VAR_7.r_info);
  }




  VAR_7.r_addend = FUNC_4(VAR_6->r_addend);
  VAR_5 = VAR_3->symtab_start + VAR_8;

  if (FUNC_8(VAR_5->st_shndx))
   continue;
  if (FUNC_7(VAR_10, VAR_6, VAR_9))
   FUNC_6(VAR_9, &VAR_7);
  FUNC_5(VAR_2, VAR_3, &VAR_7, VAR_5, VAR_9);
 }
}
