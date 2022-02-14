
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {size_t sh_size; size_t sh_entsize; int sh_addralign; size_t sh_name; int sh_flags; int sh_type; } ;
struct section {size_t len; int changed; TYPE_3__ sh; scalar_t__ name; int idx; TYPE_1__* data; int list; int symbol_hash; int rela_hash; int rela_list; int symbol_list; } ;
struct elf {int elf; int sections; } ;
struct TYPE_5__ {int d_align; scalar_t__ d_size; scalar_t__ d_buf; } ;
struct TYPE_4__ {size_t d_size; int d_align; struct section* d_buf; } ;
typedef int Elf_Scn ;
typedef TYPE_2__ Elf_Data ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;
 struct section* FUNC_7 (struct elf*,char*) ;
 int FUNC_8 (int *,TYPE_3__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int *) ;
 void* FUNC_11 (size_t) ;
 int FUNC_12 (struct section*,int ,size_t) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (char const*) ;
 scalar_t__ FUNC_15 (char const*) ;

struct section *FUNC_16(struct elf *VAR_2, const char *VAR_3,
       size_t VAR_4, int VAR_5)
{
 struct section *VAR_6, *VAR_7;
 size_t VAR_8 = VAR_4 * VAR_5;
 Elf_Scn *VAR_9;
 Elf_Data *VAR_10;

 VAR_6 = FUNC_11(sizeof(*VAR_6));
 if (!VAR_6) {
  FUNC_13("malloc");
  return ((void*)0);
 }
 FUNC_12(VAR_6, 0, sizeof(*VAR_6));

 FUNC_0(&VAR_6->symbol_list);
 FUNC_0(&VAR_6->rela_list);
 FUNC_9(VAR_6->rela_hash);
 FUNC_9(VAR_6->symbol_hash);

 FUNC_10(&VAR_6->list, &VAR_2->sections);

 VAR_9 = FUNC_6(VAR_2->elf);
 if (!VAR_9) {
  FUNC_2("elf_newscn");
  return ((void*)0);
 }

 VAR_6->name = FUNC_14(VAR_3);
 if (!VAR_6->name) {
  FUNC_13("strdup");
  return ((void*)0);
 }

 VAR_6->idx = FUNC_4(VAR_9);
 VAR_6->len = VAR_8;
 VAR_6->changed = 1;

 VAR_6->data = FUNC_5(VAR_9);
 if (!VAR_6->data) {
  FUNC_2("elf_newdata");
  return ((void*)0);
 }

 VAR_6->data->d_size = VAR_8;
 VAR_6->data->d_align = 1;

 if (VAR_8) {
  VAR_6->data->d_buf = FUNC_11(VAR_8);
  if (!VAR_6->data->d_buf) {
   FUNC_13("malloc");
   return ((void*)0);
  }
  FUNC_12(VAR_6->data->d_buf, 0, VAR_8);
 }

 if (!FUNC_8(VAR_9, &VAR_6->sh)) {
  FUNC_2("gelf_getshdr");
  return ((void*)0);
 }

 VAR_6->sh.sh_size = VAR_8;
 VAR_6->sh.sh_entsize = VAR_4;
 VAR_6->sh.sh_type = VAR_1;
 VAR_6->sh.sh_addralign = 1;
 VAR_6->sh.sh_flags = VAR_0;



 VAR_7 = FUNC_7(VAR_2, ".shstrtab");
 if (!VAR_7)
  VAR_7 = FUNC_7(VAR_2, ".strtab");
 if (!VAR_7) {
  FUNC_1("can't find .shstrtab or .strtab section");
  return ((void*)0);
 }

 VAR_9 = FUNC_3(VAR_2->elf, VAR_7->idx);
 if (!VAR_9) {
  FUNC_2("elf_getscn");
  return ((void*)0);
 }

 VAR_10 = FUNC_5(VAR_9);
 if (!VAR_10) {
  FUNC_2("elf_newdata");
  return ((void*)0);
 }

 VAR_10->d_buf = VAR_6->name;
 VAR_10->d_size = FUNC_15(VAR_3) + 1;
 VAR_10->d_align = 1;

 VAR_6->sh.sh_name = VAR_7->len;

 VAR_7->len += FUNC_15(VAR_3) + 1;
 VAR_7->changed = 1;

 return VAR_6;
}
