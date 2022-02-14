
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct module {int dummy; } ;
struct elf_info {size_t num_sections; TYPE_1__* sechdrs; scalar_t__ hdr; } ;
struct devtable {char* device_id; int do_entry; int id_size; } ;
struct TYPE_6__ {int st_value; int st_size; int st_info; int st_shndx; } ;
struct TYPE_5__ {int sh_type; int sh_offset; } ;
typedef TYPE_2__ Elf_Sym ;


 int FUNC_0 (struct devtable*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_2 (int,int ) ;
 struct devtable* VAR_2 ;
 int FUNC_3 (void*,int ,struct module*) ;
 int FUNC_4 (void*,int ,struct module*) ;
 int FUNC_5 (void*,int ,struct module*) ;
 int FUNC_6 (void*,int ,int ,char*,int ,struct module*) ;
 int FUNC_7 (void*,int ,struct module*) ;
 int FUNC_8 (char*) ;
 size_t FUNC_9 (struct elf_info*,TYPE_2__*) ;
 scalar_t__ FUNC_10 (char const*,char*) ;
 int FUNC_11 (char const*) ;
 scalar_t__ FUNC_12 (char const*,char*,int) ;
 char* FUNC_13 (char const*,char*) ;
 scalar_t__ FUNC_14 (char const*,unsigned int,char*) ;

void FUNC_15(struct module *VAR_3, struct elf_info *VAR_4,
   Elf_Sym *VAR_5, const char *VAR_6)
{
 void *VAR_7;
 char *VAR_8 = ((void*)0);
 const char *VAR_9, *VAR_10;
 unsigned int VAR_11;


 if (!VAR_5->st_shndx || FUNC_9(VAR_4, VAR_5) >= VAR_4->num_sections)
  return;


 if (FUNC_1(VAR_5->st_info) != VAR_1)
  return;


 if (FUNC_12(VAR_6, "__mod_", FUNC_11("__mod_")))
  return;
 VAR_9 = VAR_6 + FUNC_11("__mod_");
 VAR_11 = FUNC_11(VAR_9);
 if (VAR_11 < FUNC_11("_device_table"))
  return;
 if (FUNC_10(VAR_9 + VAR_11 - FUNC_11("_device_table"), "_device_table"))
  return;
 VAR_10 = FUNC_13(VAR_9, "__");
 if (!VAR_10)
  return;
 VAR_11 = VAR_10 - VAR_9;


 if (VAR_4->sechdrs[FUNC_9(VAR_4, VAR_5)].sh_type & VAR_0) {
  VAR_8 = FUNC_2(1, VAR_5->st_size);
  VAR_7 = VAR_8;
 } else {
  VAR_7 = (void *)VAR_4->hdr
   + VAR_4->sechdrs[FUNC_9(VAR_4, VAR_5)].sh_offset
   + VAR_5->st_value;
 }


 if (FUNC_14(VAR_9, VAR_11, "usb"))
  FUNC_7(VAR_7, VAR_5->st_size, VAR_3);
 if (FUNC_14(VAR_9, VAR_11, "of"))
  FUNC_3(VAR_7, VAR_5->st_size, VAR_3);
 else if (FUNC_14(VAR_9, VAR_11, "pnp"))
  FUNC_5(VAR_7, VAR_5->st_size, VAR_3);
 else if (FUNC_14(VAR_9, VAR_11, "pnp_card"))
  FUNC_4(VAR_7, VAR_5->st_size, VAR_3);
 else {
  int VAR_12;

  for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_2); VAR_12++) {
   const struct devtable *VAR_13 = &VAR_2[VAR_12];

   if (FUNC_14(VAR_9, VAR_11, VAR_13->device_id)) {
    FUNC_6(VAR_7, VAR_5->st_size, VAR_13->id_size,
      VAR_13->device_id, VAR_13->do_entry, VAR_3);
    break;
   }
  }
 }
 FUNC_8(VAR_8);
}
