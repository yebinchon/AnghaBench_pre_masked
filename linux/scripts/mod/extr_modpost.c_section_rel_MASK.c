
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct elf_info {TYPE_2__* symtab_start; TYPE_1__* hdr; } ;
struct TYPE_23__ {unsigned int r_offset; unsigned int r_info; } ;
struct TYPE_22__ {scalar_t__ r_addend; void* r_info; void* r_offset; } ;
struct TYPE_21__ {int sh_offset; int sh_size; } ;
struct TYPE_20__ {int st_shndx; } ;
struct TYPE_19__ {int e_machine; } ;
typedef TYPE_2__ Elf_Sym ;
typedef TYPE_3__ Elf_Shdr ;
typedef TYPE_4__ Elf_Rela ;
typedef TYPE_5__ Elf_Rel ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 void* FUNC_2 (unsigned int,unsigned int) ;
 unsigned int FUNC_3 (void*) ;



 void* FUNC_4 (unsigned int) ;
 int FUNC_5 (struct elf_info*,TYPE_3__*,TYPE_4__*) ;
 int FUNC_6 (struct elf_info*,TYPE_3__*,TYPE_4__*) ;
 int FUNC_7 (struct elf_info*,TYPE_3__*,TYPE_4__*) ;
 int FUNC_8 (char const*,struct elf_info*,TYPE_4__*,TYPE_2__*,char const*) ;
 int FUNC_9 (char const*,TYPE_4__*) ;
 scalar_t__ FUNC_10 (TYPE_5__*,TYPE_5__*,char const*) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (char const*,int ) ;
 char* FUNC_13 (struct elf_info*,TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_14 (char*) ;

__attribute__((used)) static void FUNC_15(const char *VAR_1, struct elf_info *VAR_2,
   Elf_Shdr *VAR_3)
{
 Elf_Sym *VAR_4;
 Elf_Rel *VAR_5;
 Elf_Rela VAR_6;
 unsigned int VAR_7;
 const char *VAR_8;

 Elf_Rel *VAR_9 = (void *)VAR_2->hdr + VAR_3->sh_offset;
 Elf_Rel *VAR_10 = (void *)VAR_9 + VAR_3->sh_size;

 VAR_8 = FUNC_13(VAR_2, VAR_3);
 VAR_8 += FUNC_14(".rel");

 if (FUNC_12(VAR_8, VAR_0))
  return;

 for (VAR_5 = VAR_9; VAR_5 < VAR_10; VAR_5++) {
  VAR_6.r_offset = FUNC_4(VAR_5->r_offset);

  if (VAR_2->hdr->e_machine == 128) {
   unsigned int VAR_11;
   VAR_7 = FUNC_0(VAR_5->r_info);
   VAR_7 = FUNC_4(VAR_7);
   VAR_11 = FUNC_1(VAR_5->r_info);
   VAR_6.r_info = FUNC_2(VAR_7, VAR_11);
  } else {
   VAR_6.r_info = FUNC_4(VAR_5->r_info);
   VAR_7 = FUNC_3(VAR_6.r_info);
  }




  VAR_6.r_addend = 0;
  switch (VAR_2->hdr->e_machine) {
  case 130:
   if (FUNC_5(VAR_2, VAR_3, &VAR_6))
    continue;
   break;
  case 129:
   if (FUNC_6(VAR_2, VAR_3, &VAR_6))
    continue;
   break;
  case 128:
   if (FUNC_7(VAR_2, VAR_3, &VAR_6))
    continue;
   break;
  }
  VAR_4 = VAR_2->symtab_start + VAR_7;

  if (FUNC_11(VAR_4->st_shndx))
   continue;
  if (FUNC_10(VAR_9, VAR_5, VAR_8))
   FUNC_9(VAR_8, &VAR_6);
  FUNC_8(VAR_1, VAR_2, &VAR_6, VAR_4, VAR_8);
 }
}
