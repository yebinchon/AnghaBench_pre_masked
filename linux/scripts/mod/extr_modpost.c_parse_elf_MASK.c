
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct elf_info {int size; scalar_t__ num_sections; scalar_t__ secindex_strings; scalar_t__ modinfo_len; unsigned int export_sec; unsigned int export_unused_sec; unsigned int export_gpl_sec; unsigned int export_unused_gpl_sec; unsigned int export_gpl_future_sec; scalar_t__* symtab_shndx_start; scalar_t__* symtab_shndx_stop; TYPE_1__* symtab_stop; TYPE_1__* symtab_start; void* strtab; void* ksymtab_strings; void* modinfo; TYPE_2__* sechdrs; TYPE_3__* hdr; } ;
struct TYPE_7__ {scalar_t__* e_ident; scalar_t__ e_type; scalar_t__ e_machine; scalar_t__ e_version; scalar_t__ e_entry; scalar_t__ e_phoff; scalar_t__ e_shoff; scalar_t__ e_flags; scalar_t__ e_ehsize; scalar_t__ e_phentsize; scalar_t__ e_phnum; scalar_t__ e_shentsize; scalar_t__ e_shnum; scalar_t__ e_shstrndx; } ;
struct TYPE_6__ {scalar_t__ sh_size; scalar_t__ sh_link; scalar_t__ sh_name; scalar_t__ sh_type; scalar_t__ sh_flags; scalar_t__ sh_addr; scalar_t__ sh_offset; scalar_t__ sh_info; scalar_t__ sh_addralign; scalar_t__ sh_entsize; } ;
struct TYPE_5__ {scalar_t__ st_shndx; scalar_t__ st_name; scalar_t__ st_value; scalar_t__ st_size; } ;
typedef TYPE_1__ Elf_Sym ;
typedef TYPE_2__ Elf_Shdr ;
typedef TYPE_3__ Elf_Ehdr ;
typedef scalar_t__ Elf32_Word ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 void* FUNC_0 (scalar_t__) ;
 int VAR_13 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,char*,char const*,char*) ;
 TYPE_3__* FUNC_4 (char const*,int*) ;
 scalar_t__ VAR_14 ;
 int FUNC_5 (char const*) ;
 int VAR_15 ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 char* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct elf_info *VAR_16, const char *VAR_17)
{
 unsigned int VAR_18;
 Elf_Ehdr *VAR_19;
 Elf_Shdr *VAR_20;
 Elf_Sym *VAR_21;
 const char *VAR_22;
 unsigned int VAR_23 = ~0U, VAR_24 = ~0U;

 VAR_19 = FUNC_4(VAR_17, &VAR_16->size);
 if (!VAR_19) {
  if (VAR_14) {
   FUNC_3(VAR_15, "%s: %s (ignored)\n", VAR_17,
    FUNC_7(VAR_13));
   return 0;
  }
  FUNC_5(VAR_17);
  FUNC_1(1);
 }
 VAR_16->hdr = VAR_19;
 if (VAR_16->size < sizeof(*VAR_19)) {

  return 0;
 }

 if ((VAR_19->e_ident[VAR_0] != VAR_4) ||
     (VAR_19->e_ident[VAR_1] != VAR_5) ||
     (VAR_19->e_ident[VAR_2] != VAR_6) ||
     (VAR_19->e_ident[VAR_3] != VAR_7)) {

  return 0;
 }

 VAR_19->e_type = FUNC_0(VAR_19->e_type);
 VAR_19->e_machine = FUNC_0(VAR_19->e_machine);
 VAR_19->e_version = FUNC_0(VAR_19->e_version);
 VAR_19->e_entry = FUNC_0(VAR_19->e_entry);
 VAR_19->e_phoff = FUNC_0(VAR_19->e_phoff);
 VAR_19->e_shoff = FUNC_0(VAR_19->e_shoff);
 VAR_19->e_flags = FUNC_0(VAR_19->e_flags);
 VAR_19->e_ehsize = FUNC_0(VAR_19->e_ehsize);
 VAR_19->e_phentsize = FUNC_0(VAR_19->e_phentsize);
 VAR_19->e_phnum = FUNC_0(VAR_19->e_phnum);
 VAR_19->e_shentsize = FUNC_0(VAR_19->e_shentsize);
 VAR_19->e_shnum = FUNC_0(VAR_19->e_shnum);
 VAR_19->e_shstrndx = FUNC_0(VAR_19->e_shstrndx);
 VAR_20 = (void *)VAR_19 + VAR_19->e_shoff;
 VAR_16->sechdrs = VAR_20;


 if (VAR_19->e_shoff > VAR_16->size) {
  FUNC_2("section header offset=%lu in file '%s' is bigger than "
        "filesize=%lu\n", (unsigned long)VAR_19->e_shoff,
        VAR_17, VAR_16->size);
  return 0;
 }

 if (VAR_19->e_shnum == VAR_8) {




  VAR_16->num_sections = FUNC_0(VAR_20[0].sh_size);
 }
 else {
  VAR_16->num_sections = VAR_19->e_shnum;
 }
 if (VAR_19->e_shstrndx == VAR_9) {
  VAR_16->secindex_strings = FUNC_0(VAR_20[0].sh_link);
 }
 else {
  VAR_16->secindex_strings = VAR_19->e_shstrndx;
 }


 for (VAR_18 = 0; VAR_18 < VAR_16->num_sections; VAR_18++) {
  VAR_20[VAR_18].sh_name = FUNC_0(VAR_20[VAR_18].sh_name);
  VAR_20[VAR_18].sh_type = FUNC_0(VAR_20[VAR_18].sh_type);
  VAR_20[VAR_18].sh_flags = FUNC_0(VAR_20[VAR_18].sh_flags);
  VAR_20[VAR_18].sh_addr = FUNC_0(VAR_20[VAR_18].sh_addr);
  VAR_20[VAR_18].sh_offset = FUNC_0(VAR_20[VAR_18].sh_offset);
  VAR_20[VAR_18].sh_size = FUNC_0(VAR_20[VAR_18].sh_size);
  VAR_20[VAR_18].sh_link = FUNC_0(VAR_20[VAR_18].sh_link);
  VAR_20[VAR_18].sh_info = FUNC_0(VAR_20[VAR_18].sh_info);
  VAR_20[VAR_18].sh_addralign = FUNC_0(VAR_20[VAR_18].sh_addralign);
  VAR_20[VAR_18].sh_entsize = FUNC_0(VAR_20[VAR_18].sh_entsize);
 }

 VAR_22 = (void *)VAR_19 + VAR_20[VAR_16->secindex_strings].sh_offset;
 for (VAR_18 = 1; VAR_18 < VAR_16->num_sections; VAR_18++) {
  const char *VAR_25;
  int VAR_26 = VAR_20[VAR_18].sh_type == VAR_10;

  if (!VAR_26 && VAR_20[VAR_18].sh_offset > VAR_16->size) {
   FUNC_2("%s is truncated. sechdrs[i].sh_offset=%lu > "
         "sizeof(*hrd)=%zu\n", VAR_17,
         (unsigned long)VAR_20[VAR_18].sh_offset,
         sizeof(*VAR_19));
   return 0;
  }
  VAR_25 = VAR_22 + VAR_20[VAR_18].sh_name;
  if (FUNC_6(VAR_25, ".modinfo") == 0) {
   if (VAR_26)
    FUNC_2("%s has NOBITS .modinfo\n", VAR_17);
   VAR_16->modinfo = (void *)VAR_19 + VAR_20[VAR_18].sh_offset;
   VAR_16->modinfo_len = VAR_20[VAR_18].sh_size;
  } else if (FUNC_6(VAR_25, "__ksymtab") == 0)
   VAR_16->export_sec = VAR_18;
  else if (FUNC_6(VAR_25, "__ksymtab_unused") == 0)
   VAR_16->export_unused_sec = VAR_18;
  else if (FUNC_6(VAR_25, "__ksymtab_gpl") == 0)
   VAR_16->export_gpl_sec = VAR_18;
  else if (FUNC_6(VAR_25, "__ksymtab_unused_gpl") == 0)
   VAR_16->export_unused_gpl_sec = VAR_18;
  else if (FUNC_6(VAR_25, "__ksymtab_gpl_future") == 0)
   VAR_16->export_gpl_future_sec = VAR_18;
  else if (FUNC_6(VAR_25, "__ksymtab_strings") == 0)
   VAR_16->ksymtab_strings = (void *)VAR_19 +
      VAR_20[VAR_18].sh_offset -
      VAR_20[VAR_18].sh_addr;

  if (VAR_20[VAR_18].sh_type == VAR_11) {
   unsigned int VAR_27;
   VAR_23 = VAR_18;
   VAR_16->symtab_start = (void *)VAR_19 +
       VAR_20[VAR_18].sh_offset;
   VAR_16->symtab_stop = (void *)VAR_19 +
       VAR_20[VAR_18].sh_offset + VAR_20[VAR_18].sh_size;
   VAR_27 = VAR_20[VAR_18].sh_link;
   VAR_16->strtab = (void *)VAR_19 +
       VAR_20[VAR_27].sh_offset;
  }


  if (VAR_20[VAR_18].sh_type == VAR_12) {
   VAR_24 = VAR_18;
   VAR_16->symtab_shndx_start = (void *)VAR_19 +
       VAR_20[VAR_18].sh_offset;
   VAR_16->symtab_shndx_stop = (void *)VAR_19 +
       VAR_20[VAR_18].sh_offset + VAR_20[VAR_18].sh_size;
  }
 }
 if (!VAR_16->symtab_start)
  FUNC_2("%s has no symtab?\n", VAR_17);


 for (VAR_21 = VAR_16->symtab_start; VAR_21 < VAR_16->symtab_stop; VAR_21++) {
  VAR_21->st_shndx = FUNC_0(VAR_21->st_shndx);
  VAR_21->st_name = FUNC_0(VAR_21->st_name);
  VAR_21->st_value = FUNC_0(VAR_21->st_value);
  VAR_21->st_size = FUNC_0(VAR_21->st_size);
 }

 if (VAR_24 != ~0U) {
  Elf32_Word *VAR_28;
  if (VAR_23 != VAR_20[VAR_24].sh_link)
   FUNC_2("%s: SYMTAB_SHNDX has bad sh_link: %u!=%u\n",
         VAR_17, VAR_20[VAR_24].sh_link,
         VAR_23);

  for (VAR_28 = VAR_16->symtab_shndx_start; VAR_28 < VAR_16->symtab_shndx_stop;
       VAR_28++)
   *VAR_28 = FUNC_0(*VAR_28);
 }

 return 1;
}
