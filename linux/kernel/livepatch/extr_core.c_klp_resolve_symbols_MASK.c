
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* strtab; TYPE_2__* symtab; } ;
struct module {TYPE_1__ core_kallsyms; } ;
struct TYPE_9__ {int r_info; } ;
struct TYPE_8__ {int sh_size; scalar_t__ sh_addr; } ;
struct TYPE_7__ {scalar_t__ st_shndx; int st_name; unsigned long st_value; } ;
typedef TYPE_2__ Elf_Sym ;
typedef TYPE_3__ Elf_Shdr ;
typedef TYPE_4__ Elf_Rela ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,char*,unsigned long,unsigned long*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*,char*,char*,unsigned long*) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static int FUNC_6(Elf_Shdr *VAR_4, struct module *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9;
 char VAR_10[VAR_2];
 char VAR_11[VAR_1];
 char *VAR_12 = VAR_5->core_kallsyms.strtab;
 Elf_Rela *VAR_13;
 Elf_Sym *VAR_14;
 unsigned long VAR_15, VAR_16;
 FUNC_0(VAR_2 < 56 || VAR_1 != 128);

 VAR_13 = (Elf_Rela *) VAR_4->sh_addr;

 for (VAR_6 = 0; VAR_6 < VAR_4->sh_size / sizeof(Elf_Rela); VAR_6++) {
  VAR_14 = VAR_5->core_kallsyms.symtab + FUNC_1(VAR_13[VAR_6].r_info);
  if (VAR_14->st_shndx != VAR_3) {
   FUNC_3("symbol %s is not marked as a livepatch symbol\n",
          VAR_12 + VAR_14->st_name);
   return -VAR_0;
  }


  VAR_7 = FUNC_4(VAR_12 + VAR_14->st_name,
        ".klp.sym.%55[^.].%127[^,],%lu",
        VAR_10, VAR_11, &VAR_15);
  if (VAR_7 != 3) {
   FUNC_3("symbol %s has an incorrectly formatted name\n",
          VAR_12 + VAR_14->st_name);
   return -VAR_0;
  }


  VAR_8 = !FUNC_5(VAR_10, "vmlinux");
  VAR_9 = FUNC_2(VAR_8 ? ((void*)0) : VAR_10,
          VAR_11, VAR_15, &VAR_16);
  if (VAR_9)
   return VAR_9;

  VAR_14->st_value = VAR_16;
 }

 return 0;
}
