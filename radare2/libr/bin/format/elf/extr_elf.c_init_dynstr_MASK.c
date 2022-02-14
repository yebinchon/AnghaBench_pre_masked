
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_5__ {int e_shnum; } ;
struct TYPE_7__ {char* shstrtab; size_t shstrtab_size; char* dynstr; scalar_t__ size; scalar_t__ dynstr_size; TYPE_2__* shdr; int b; TYPE_1__ ehdr; } ;
struct TYPE_6__ {size_t sh_name; scalar_t__ sh_type; scalar_t__ sh_size; scalar_t__ sh_offset; } ;
typedef TYPE_3__ ELFOBJ ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int ,scalar_t__,int *,scalar_t__) ;
 int FUNC_4 (char const*,char*) ;

__attribute__((used)) static bool FUNC_5(ELFOBJ *VAR_1) {
 int VAR_2, VAR_3;
 const char *VAR_4 = ((void*)0);
 if (!VAR_1 || !VAR_1->shdr) {
  return 0;
 }
 if (!VAR_1->shstrtab) {
  return 0;
 }
 for (VAR_2 = 0; VAR_2 < VAR_1->ehdr.e_shnum; ++VAR_2) {
  if (VAR_1->shdr[VAR_2].sh_name > VAR_1->shstrtab_size) {
   return 0;
  }
  VAR_4 = &VAR_1->shstrtab[VAR_1->shdr[VAR_2].sh_name];
  if (VAR_1->shdr[VAR_2].sh_type == VAR_0 && !FUNC_4 (VAR_4, ".dynstr")) {
   if (!(VAR_1->dynstr = (char*) FUNC_2 (VAR_1->shdr[VAR_2].sh_size + 1, sizeof (char)))) {
    FUNC_1("Cannot allocate memory for dynamic strings\n");
    return 0;
   }
   if (VAR_1->shdr[VAR_2].sh_offset > VAR_1->size) {
    return 0;
   }
   if (VAR_1->shdr[VAR_2].sh_offset + VAR_1->shdr[VAR_2].sh_size > VAR_1->size) {
    return 0;
   }
   if (VAR_1->shdr[VAR_2].sh_offset + VAR_1->shdr[VAR_2].sh_size < VAR_1->shdr[VAR_2].sh_size) {
    return 0;
   }
   VAR_3 = FUNC_3 (VAR_1->b, VAR_1->shdr[VAR_2].sh_offset, (ut8*)VAR_1->dynstr, VAR_1->shdr[VAR_2].sh_size);
   if (VAR_3 < 1) {
    FUNC_0 (VAR_1->dynstr);
    VAR_1->dynstr_size = 0;
    return 0;
   }
   VAR_1->dynstr_size = VAR_1->shdr[VAR_2].sh_size;
   return 1;
  }
 }
 return 0;
}
