
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sh_addralign; int sh_flags; int sh_info; int sh_link; int sh_type; } ;
struct section {char* name; TYPE_1__ sh; int idx; struct section* base; struct section* rela; } ;
struct elf {int dummy; } ;
struct TYPE_4__ {int idx; } ;
typedef int GElf_Rela ;


 int VAR_0 ;
 int VAR_1 ;
 struct section* FUNC_0 (struct elf*,char*,int,int ) ;
 TYPE_2__* FUNC_1 (struct elf*,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char*) ;

struct section *FUNC_8(struct elf *VAR_2, struct section *VAR_3)
{
 char *VAR_4;
 struct section *VAR_5;

 VAR_4 = FUNC_3(FUNC_7(VAR_3->name) + FUNC_7(".rela") + 1);
 if (!VAR_4) {
  FUNC_4("malloc");
  return ((void*)0);
 }
 FUNC_6(VAR_4, ".rela");
 FUNC_5(VAR_4, VAR_3->name);

 VAR_5 = FUNC_0(VAR_2, VAR_4, sizeof(GElf_Rela), 0);
 FUNC_2(VAR_4);
 if (!VAR_5)
  return ((void*)0);

 VAR_3->rela = VAR_5;
 VAR_5->base = VAR_3;

 VAR_5->sh.sh_type = VAR_1;
 VAR_5->sh.sh_addralign = 8;
 VAR_5->sh.sh_link = FUNC_1(VAR_2, ".symtab")->idx;
 VAR_5->sh.sh_info = VAR_3->idx;
 VAR_5->sh.sh_flags = VAR_0;

 return VAR_5;
}
