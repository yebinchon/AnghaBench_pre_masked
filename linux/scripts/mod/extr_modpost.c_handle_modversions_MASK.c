
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct module {int has_init; int has_cleanup; int unres; int name; scalar_t__ is_dot_o; } ;
struct elf_info {TYPE_2__* hdr; TYPE_1__* sechdrs; } ;
typedef enum export { ____Placeholder_export } export ;
struct TYPE_8__ {int st_value; int st_shndx; int st_info; } ;
struct TYPE_7__ {scalar_t__ e_type; int e_machine; } ;
struct TYPE_6__ {int sh_offset; int sh_addr; } ;
typedef TYPE_3__ Elf_Sym ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_2 (int ) ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_3 (unsigned int) ;
 int FUNC_4 (char const*,int,int ) ;
 int FUNC_5 (struct elf_info*,int ) ;
 int FUNC_6 (struct elf_info*,int ) ;
 int FUNC_7 (struct elf_info*,TYPE_3__*) ;
 int FUNC_8 (struct elf_info*,char const*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (char const*,char*) ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (char const*,char*) ;
 int FUNC_14 (char const*,struct module*,int) ;
 int FUNC_15 (char const*,struct module*,unsigned int,int) ;
 char FUNC_16 (char) ;
 int FUNC_17 (char*,char const*,int ,...) ;

__attribute__((used)) static void FUNC_18(struct module *VAR_7, struct elf_info *VAR_8,
          Elf_Sym *VAR_9, const char *VAR_10)
{
 unsigned int VAR_11;
 enum export VAR_12;
 bool VAR_13 = 0;
 const char *VAR_14;

 if ((!FUNC_9(VAR_7->name) || VAR_7->is_dot_o) &&
     FUNC_13(VAR_10, "__ksymtab"))
  VAR_12 = FUNC_6(VAR_8, FUNC_7(VAR_8, VAR_9));
 else
  VAR_12 = FUNC_5(VAR_8, FUNC_7(VAR_8, VAR_9));


 if (FUNC_13(VAR_10, "__crc_")) {
  VAR_13 = 1;
  VAR_11 = (unsigned int) VAR_9->st_value;
  if (VAR_9->st_shndx != 128 && VAR_9->st_shndx != VAR_3) {
   unsigned int *VAR_15;


   VAR_15 = (void *)VAR_8->hdr + VAR_9->st_value +
          VAR_8->sechdrs[VAR_9->st_shndx].sh_offset -
          (VAR_8->hdr->e_type != VAR_2 ?
    VAR_8->sechdrs[VAR_9->st_shndx].sh_addr : 0);
   VAR_11 = FUNC_3(*VAR_15);
  }
  FUNC_15(VAR_10 + FUNC_12("__crc_"), VAR_7, VAR_11,
    VAR_12);
 }

 switch (VAR_9->st_shndx) {
 case 129:
  if (FUNC_13(VAR_10, "__gnu_lto_")) {

  } else
   FUNC_17("\"%s\" [%s] is COMMON symbol\n", VAR_10, VAR_7->name);
  break;
 case 128:

  if (FUNC_0(VAR_9->st_info) != VAR_4 &&
      FUNC_0(VAR_9->st_info) != VAR_5)
   break;
  if (FUNC_8(VAR_8, VAR_10))
   break;
  if (VAR_13) {
   const char *VAR_16 = FUNC_9(VAR_7->name) ?"":".ko";
   FUNC_17("EXPORT symbol \"%s\" [%s%s] version generation failed, symbol will not be versioned.\n",
        VAR_10 + FUNC_12("__crc_"), VAR_7->name, VAR_16);
  }
  VAR_7->unres = FUNC_4(VAR_10,
       FUNC_0(VAR_9->st_info) == VAR_5,
       VAR_7->unres);
  break;
 default:

  if (FUNC_13(VAR_10, "__ksymtab_")) {
   VAR_14 = VAR_10 + FUNC_12("__ksymtab_");
   FUNC_14(VAR_14, VAR_7, VAR_12);
  }
  if (FUNC_10(VAR_10, "init_module") == 0)
   VAR_7->has_init = 1;
  if (FUNC_10(VAR_10, "cleanup_module") == 0)
   VAR_7->has_cleanup = 1;
  break;
 }
}
