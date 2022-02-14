
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int strtab; } ;
struct module {TYPE_3__* klp_info; TYPE_2__ core_kallsyms; } ;
struct klp_object {char* name; } ;
struct TYPE_10__ {int sh_name; int sh_flags; } ;
struct TYPE_7__ {int e_shnum; } ;
struct TYPE_9__ {char* secstrings; int symndx; TYPE_4__* sechdrs; TYPE_1__ hdr; } ;
typedef TYPE_4__ Elf_Shdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,int ,int ,int,struct module*) ;
 scalar_t__ FUNC_2 (struct klp_object*) ;
 int FUNC_3 (struct klp_object*) ;
 int FUNC_4 (TYPE_4__*,struct module*) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char const*,char*,char*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;

__attribute__((used)) static int FUNC_8(struct module *VAR_3,
     struct klp_object *VAR_4)
{
 int VAR_5, VAR_6, VAR_7 = 0;
 const char *VAR_8, *VAR_9;
 char VAR_10[VAR_1];
 Elf_Shdr *VAR_11;

 if (FUNC_0(!FUNC_3(VAR_4)))
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_4) ? VAR_4->name : "vmlinux";


 for (VAR_5 = 1; VAR_5 < VAR_3->klp_info->hdr.e_shnum; VAR_5++) {
  VAR_11 = VAR_3->klp_info->sechdrs + VAR_5;
  VAR_9 = VAR_3->klp_info->secstrings + VAR_11->sh_name;
  if (!(VAR_11->sh_flags & VAR_2))
   continue;






  VAR_6 = FUNC_6(VAR_9, ".klp.rela.%55[^.]", VAR_10);
  if (VAR_6 != 1) {
   FUNC_5("section %s has an incorrectly formatted name\n",
          VAR_9);
   VAR_7 = -VAR_0;
   break;
  }

  if (FUNC_7(VAR_8, VAR_10))
   continue;

  VAR_7 = FUNC_4(VAR_11, VAR_3);
  if (VAR_7)
   break;

  VAR_7 = FUNC_1(VAR_3->klp_info->sechdrs,
      VAR_3->core_kallsyms.strtab,
      VAR_3->klp_info->symndx, VAR_5, VAR_3);
  if (VAR_7)
   break;
 }

 return VAR_7;
}
