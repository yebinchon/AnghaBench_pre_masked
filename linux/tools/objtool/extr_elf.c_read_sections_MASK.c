
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sh_size; int sh_name; } ;
struct section {scalar_t__ len; TYPE_1__ sh; int name; TYPE_2__* data; int idx; int list; int symbol_hash; int rela_hash; int rela_list; int symbol_list; } ;
struct elf {int elf; int sections; } ;
struct TYPE_4__ {scalar_t__ d_off; scalar_t__ d_size; } ;
typedef int Elf_Scn ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 TYPE_2__* FUNC_3 (int *,int *) ;
 int * FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,size_t*) ;
 scalar_t__ FUNC_6 (int ,size_t*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,size_t,int ) ;
 int FUNC_10 (int *,TYPE_1__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,int *) ;
 struct section* FUNC_13 (int) ;
 int FUNC_14 (struct section*,int ,int) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static int FUNC_16(struct elf *VAR_0)
{
 Elf_Scn *VAR_1 = ((void*)0);
 struct section *VAR_2;
 size_t VAR_3, VAR_4;
 int VAR_5;

 if (FUNC_5(VAR_0->elf, &VAR_4)) {
  FUNC_2("elf_getshdrnum");
  return -1;
 }

 if (FUNC_6(VAR_0->elf, &VAR_3)) {
  FUNC_2("elf_getshdrstrndx");
  return -1;
 }

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_2 = FUNC_13(sizeof(*VAR_2));
  if (!VAR_2) {
   FUNC_15("malloc");
   return -1;
  }
  FUNC_14(VAR_2, 0, sizeof(*VAR_2));

  FUNC_0(&VAR_2->symbol_list);
  FUNC_0(&VAR_2->rela_list);
  FUNC_11(VAR_2->rela_hash);
  FUNC_11(VAR_2->symbol_hash);

  FUNC_12(&VAR_2->list, &VAR_0->sections);

  VAR_1 = FUNC_4(VAR_0->elf, VAR_5);
  if (!VAR_1) {
   FUNC_2("elf_getscn");
   return -1;
  }

  VAR_2->idx = FUNC_7(VAR_1);

  if (!FUNC_10(VAR_1, &VAR_2->sh)) {
   FUNC_2("gelf_getshdr");
   return -1;
  }

  VAR_2->name = FUNC_9(VAR_0->elf, VAR_3, VAR_2->sh.sh_name);
  if (!VAR_2->name) {
   FUNC_2("elf_strptr");
   return -1;
  }

  if (VAR_2->sh.sh_size != 0) {
   VAR_2->data = FUNC_3(VAR_1, ((void*)0));
   if (!VAR_2->data) {
    FUNC_2("elf_getdata");
    return -1;
   }
   if (VAR_2->data->d_off != 0 ||
       VAR_2->data->d_size != VAR_2->sh.sh_size) {
    FUNC_1("unexpected data attributes for %s",
         VAR_2->name);
    return -1;
   }
  }
  VAR_2->len = VAR_2->sh.sh_size;
 }


 if (FUNC_8(VAR_0->elf, VAR_1)) {
  FUNC_1("section entry mismatch");
  return -1;
 }

 return 0;
}
