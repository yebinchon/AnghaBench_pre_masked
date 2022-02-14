
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int (* table_sort_t ) (char*,int) ;
struct TYPE_7__ {int e_shstrndx; int e_shnum; int e_shoff; } ;
struct TYPE_6__ {int sh_addr; int sh_offset; int sh_size; int sh_type; int sh_info; int sh_name; int sh_link; } ;
struct TYPE_5__ {int st_value; int st_shndx; int st_name; int st_info; } ;
typedef TYPE_1__ const Elf_Sym ;
typedef TYPE_2__ Elf_Shdr ;
typedef int Elf_Rel ;
typedef TYPE_3__ Elf_Ehdr ;
typedef int Elf32_Word ;


 scalar_t__ FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,char const* const) ;
 size_t FUNC_4 (unsigned int,int,int *) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (char*,unsigned long) ;
 int FUNC_7 (char*,int,int,int ) ;
 int FUNC_8 (int *) ;
 unsigned int FUNC_9 (int *) ;
 int VAR_8 ;
 scalar_t__ FUNC_10 (char const*,char*) ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static void
FUNC_12(Elf_Ehdr *VAR_9, char const *const VAR_10, table_sort_t VAR_11)
{
 Elf_Shdr *VAR_12;
 Elf_Shdr *VAR_13;
 Elf_Shdr *VAR_14 = ((void*)0);
 Elf_Shdr *VAR_15 = ((void*)0);
 Elf_Shdr *VAR_16 = ((void*)0);
 Elf_Sym *VAR_17;
 const Elf_Sym *VAR_18;
 Elf32_Word *VAR_19 = ((void*)0);
 Elf_Sym *VAR_20;
 Elf_Shdr *VAR_21;
 Elf_Rel *VAR_22 = ((void*)0);
 int VAR_23 = 0;
 uint32_t *VAR_24;
 const char *VAR_25;
 const char *VAR_26;
 char *VAR_27;
 int VAR_28 = 0;
 int VAR_29;
 int VAR_30;
 unsigned int VAR_31;
 unsigned int VAR_32;

 VAR_12 = (Elf_Shdr *)((char *)VAR_9 + FUNC_1(&VAR_9->e_shoff));

 VAR_31 = FUNC_9(&VAR_9->e_shnum);
 if (VAR_31 == VAR_0)
  VAR_31 = FUNC_1(&VAR_12[0].sh_size);

 VAR_32 = FUNC_9(&VAR_9->e_shstrndx);
 if (VAR_32 == VAR_1)
  VAR_32 = FUNC_8(&VAR_12[0].sh_link);

 VAR_13 = VAR_12 + VAR_32;
 VAR_25 = (const char *)VAR_9 + FUNC_1(&VAR_13->sh_offset);
 for (VAR_29 = 0; VAR_29 < VAR_31; VAR_29++) {
  VAR_30 = FUNC_8(&VAR_12[VAR_29].sh_name);
  if (FUNC_10(VAR_25 + VAR_30, "__ex_table") == 0) {
   VAR_16 = VAR_12 + VAR_29;
   VAR_28 = VAR_29;
  }
  if ((FUNC_8(&VAR_12[VAR_29].sh_type) == VAR_2 ||
       FUNC_8(&VAR_12[VAR_29].sh_type) == VAR_3) &&
      FUNC_8(&VAR_12[VAR_29].sh_info) == VAR_28) {
   VAR_22 = (void *)VAR_9 + FUNC_1(&VAR_12[VAR_29].sh_offset);
   VAR_23 = FUNC_1(&VAR_12[VAR_29].sh_size);
  }
  if (FUNC_10(VAR_25 + VAR_30, ".symtab") == 0)
   VAR_15 = VAR_12 + VAR_29;
  if (FUNC_10(VAR_25 + VAR_30, ".strtab") == 0)
   VAR_14 = VAR_12 + VAR_29;
  if (FUNC_8(&VAR_12[VAR_29].sh_type) == VAR_4)
   VAR_19 = (Elf32_Word *)(
    (const char *)VAR_9 + FUNC_1(&VAR_12[VAR_29].sh_offset));
 }
 if (VAR_14 == ((void*)0)) {
  FUNC_3(VAR_8, "no .strtab in  file: %s\n", VAR_10);
  FUNC_2();
 }
 if (VAR_15 == ((void*)0)) {
  FUNC_3(VAR_8, "no .symtab in  file: %s\n", VAR_10);
  FUNC_2();
 }
 VAR_18 = (const Elf_Sym *)((const char *)VAR_9 +
       FUNC_1(&VAR_15->sh_offset));
 if (VAR_16 == ((void*)0)) {
  FUNC_3(VAR_8, "no __ex_table in  file: %s\n", VAR_10);
  FUNC_2();
 }
 VAR_26 = (const char *)VAR_9 + FUNC_1(&VAR_14->sh_offset);

 VAR_27 = (void *)VAR_9 + FUNC_1(&VAR_16->sh_offset);

 if (VAR_11) {
  VAR_11(VAR_27, FUNC_1(&VAR_16->sh_size));
 } else {
  int VAR_33 = FUNC_1(&VAR_16->sh_size) / VAR_7;
  FUNC_7(VAR_27, VAR_33,
        VAR_7, VAR_6);
 }

 if (VAR_22)
  FUNC_5(VAR_22, 0, VAR_23);


 VAR_20 = ((void*)0);
 for (VAR_29 = 0; VAR_29 < FUNC_1(&VAR_15->sh_size) / sizeof(Elf_Sym); VAR_29++) {
  VAR_17 = (void *)VAR_9 + FUNC_1(&VAR_15->sh_offset);
  VAR_17 += VAR_29;
  if (FUNC_0(VAR_17->st_info) != VAR_5)
   continue;
  VAR_30 = FUNC_8(&VAR_17->st_name);
  if (FUNC_10(VAR_26 + VAR_30, "main_extable_sort_needed") == 0) {
   VAR_20 = VAR_17;
   break;
  }
 }
 if (VAR_20 == ((void*)0)) {
  FUNC_3(VAR_8,
   "no main_extable_sort_needed symbol in  file: %s\n",
   VAR_10);
  FUNC_2();
 }
 VAR_21 = &VAR_12[FUNC_4(FUNC_9(&VAR_17->st_shndx),
          VAR_20 - VAR_18,
          VAR_19)];
 VAR_24 = (void *)VAR_9 +
  FUNC_1(&VAR_21->sh_offset) +
  FUNC_1(&VAR_20->st_value) -
  FUNC_1(&VAR_21->sh_addr);






 FUNC_11(0, VAR_24);
}
