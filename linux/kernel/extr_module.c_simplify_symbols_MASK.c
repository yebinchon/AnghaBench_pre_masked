
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct module {int name; } ;
struct TYPE_4__ {size_t sym; int pcpu; } ;
struct load_info {char* strtab; TYPE_3__* sechdrs; TYPE_1__ index; } ;
struct kernel_symbol {int dummy; } ;
struct TYPE_6__ {unsigned long sh_addr; int sh_size; } ;
struct TYPE_5__ {int st_name; int st_shndx; unsigned long st_value; int st_info; } ;
typedef TYPE_2__ Elf_Sym ;
typedef TYPE_3__ Elf_Shdr ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct kernel_symbol const*) ;
 int FUNC_2 (struct kernel_symbol const*) ;




 int VAR_2 ;
 unsigned long FUNC_3 (struct kernel_symbol const*) ;
 scalar_t__ FUNC_4 (struct module*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,int ,...) ;
 struct kernel_symbol* FUNC_7 (struct module*,struct load_info const*,char const*) ;
 int FUNC_8 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_9(struct module *VAR_3, const struct load_info *VAR_4)
{
 Elf_Shdr *VAR_5 = &VAR_4->sechdrs[VAR_4->index.sym];
 Elf_Sym *VAR_6 = (void *)VAR_5->sh_addr;
 unsigned long VAR_7;
 unsigned int VAR_8;
 int VAR_9 = 0;
 const struct kernel_symbol *VAR_10;

 for (VAR_8 = 1; VAR_8 < VAR_5->sh_size / sizeof(Elf_Sym); VAR_8++) {
  const char *VAR_11 = VAR_4->strtab + VAR_6[VAR_8].st_name;

  switch (VAR_6[VAR_8].st_shndx) {
  case 130:

   if (!FUNC_8(VAR_11, "__gnu_lto", 9))
    break;



   FUNC_5("Common symbol: %s\n", VAR_11);
   FUNC_6("%s: please compile with -fno-common\n",
          VAR_3->name);
   VAR_9 = -VAR_1;
   break;

  case 131:

   FUNC_5("Absolute symbol: 0x%08lx\n",
          (long)VAR_6[VAR_8].st_value);
   break;

  case 129:

   break;

  case 128:
   VAR_10 = FUNC_7(VAR_3, VAR_4, VAR_11);

   if (VAR_10 && !FUNC_1(VAR_10)) {
    VAR_6[VAR_8].st_value = FUNC_3(VAR_10);
    break;
   }


   if (!VAR_10 && FUNC_0(VAR_6[VAR_8].st_info) == VAR_2)
    break;

   VAR_9 = FUNC_2(VAR_10) ?: -VAR_0;
   FUNC_6("%s: Unknown symbol %s (err %d)\n",
    VAR_3->name, VAR_11, VAR_9);
   break;

  default:

   if (VAR_6[VAR_8].st_shndx == VAR_4->index.pcpu)
    VAR_7 = (unsigned long)FUNC_4(VAR_3);
   else
    VAR_7 = VAR_4->sechdrs[VAR_6[VAR_8].st_shndx].sh_addr;
   VAR_6[VAR_8].st_value += VAR_7;
   break;
  }
 }

 return VAR_9;
}
