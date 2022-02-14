
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct symbol {scalar_t__ is_static; } ;
struct module {int skip; int gpl_compatible; int unres; int srcversion; int imported_namespaces; } ;
struct elf_info {scalar_t__ hdr; int modinfo; scalar_t__ strtab; TYPE_1__* symtab_stop; TYPE_1__* symtab_start; } ;
struct TYPE_5__ {scalar_t__ st_name; int st_info; } ;
typedef TYPE_1__ Elf_Sym ;


 unsigned char FUNC_0 (int ) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (struct module*,char const*,struct elf_info*) ;
 struct symbol* FUNC_4 (char*) ;
 char* FUNC_5 (struct elf_info*,char*) ;
 char* FUNC_6 (struct elf_info*,char*,char*) ;
 int FUNC_7 (char const*,int ,int) ;
 int FUNC_8 (struct module*,struct elf_info*,TYPE_1__*,char const*) ;
 int FUNC_9 (struct module*,struct elf_info*,TYPE_1__*,char const*) ;
 int VAR_3 ;
 scalar_t__ FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (char*) ;
 int FUNC_12 (char const*,char*,int ,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_13 (struct elf_info*,TYPE_1__*) ;
 struct module* FUNC_14 (char const*) ;
 int FUNC_15 (struct elf_info*,char const*) ;
 int FUNC_16 (struct elf_info*) ;
 char* FUNC_17 (scalar_t__) ;
 int FUNC_18 (char*) ;
 scalar_t__ FUNC_19 (char const*,char*) ;
 int FUNC_20 (char const*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_21 (char*,char const*) ;

__attribute__((used)) static void FUNC_22(const char *VAR_6)
{
 const char *VAR_7;
 char *VAR_8;
 char *VAR_9;
 char *VAR_10;
 struct module *VAR_11;
 struct elf_info VAR_12 = { };
 Elf_Sym *VAR_13;

 if (!FUNC_15(&VAR_12, VAR_6))
  return;

 VAR_11 = FUNC_14(VAR_6);



 if (FUNC_10(VAR_6)) {
  VAR_3 = 1;
  VAR_11->skip = 1;
 }

 VAR_9 = FUNC_5(&VAR_12, "license");
 if (!VAR_9 && !FUNC_10(VAR_6))
  FUNC_21("modpost: missing MODULE_LICENSE() in %s\n"
       "see include/linux/module.h for "
       "more information\n", VAR_6);
 while (VAR_9) {
  if (FUNC_11(VAR_9))
   VAR_11->gpl_compatible = 1;
  else {
   VAR_11->gpl_compatible = 0;
   break;
  }
  VAR_9 = FUNC_6(&VAR_12, "license", VAR_9);
 }

 VAR_10 = FUNC_5(&VAR_12, "import_ns");
 while (VAR_10) {
  FUNC_1(&VAR_11->imported_namespaces, VAR_10);
  VAR_10 = FUNC_6(&VAR_12, "import_ns", VAR_10);
 }

 for (VAR_13 = VAR_12.symtab_start; VAR_13 < VAR_12.symtab_stop; VAR_13++) {
  VAR_7 = FUNC_17(VAR_12.strtab + VAR_13->st_name);

  FUNC_9(VAR_11, &VAR_12, VAR_13, VAR_7);
  FUNC_8(VAR_11, &VAR_12, VAR_13, VAR_7);
 }


 for (VAR_13 = VAR_12.symtab_start; VAR_13 < VAR_12.symtab_stop; VAR_13++) {
  VAR_7 = FUNC_17(VAR_12.strtab + VAR_13->st_name);

  if (FUNC_19(VAR_7, "__kstrtabns_"))
   FUNC_20(VAR_7 + FUNC_18("__kstrtabns_"),
          FUNC_13(&VAR_12,
              VAR_13));
 }


 for (VAR_13 = VAR_12.symtab_start; VAR_13 < VAR_12.symtab_stop; VAR_13++) {
  unsigned char VAR_14 = FUNC_0(VAR_13->st_info);

  if (VAR_14 == VAR_0 || VAR_14 == VAR_1) {
   struct symbol *VAR_15 =
    FUNC_4(FUNC_17(VAR_12.strtab +
             VAR_13->st_name));

   if (VAR_15)
    VAR_15->is_static = 0;
  }
 }

 if (!FUNC_10(VAR_6) || VAR_5)
  FUNC_3(VAR_11, VAR_6, &VAR_12);

 VAR_8 = FUNC_5(&VAR_12, "version");
 if (VAR_8)
  FUNC_12(VAR_6, VAR_8, VAR_12.modinfo,
           VAR_8 - (char *)VAR_12.hdr);
 if (VAR_8 || (VAR_2 && !FUNC_10(VAR_6)))
  FUNC_7(VAR_6, VAR_11->srcversion,
    sizeof(VAR_11->srcversion)-1);

 FUNC_16(&VAR_12);





 if (VAR_4)
  VAR_11->unres = FUNC_2("module_layout", 0, VAR_11->unres);
}
