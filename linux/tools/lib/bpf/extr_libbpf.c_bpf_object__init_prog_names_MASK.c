
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bpf_program {scalar_t__ idx; char const* section_name; int name; } ;
struct TYPE_6__ {scalar_t__ text_shndx; int strtabidx; int elf; TYPE_3__* symbols; } ;
struct bpf_object {size_t nr_programs; TYPE_1__ efile; struct bpf_program* programs; } ;
struct TYPE_8__ {int d_size; } ;
struct TYPE_7__ {scalar_t__ st_shndx; int st_name; int st_info; } ;
typedef TYPE_2__ GElf_Sym ;
typedef TYPE_3__ Elf_Data ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_3__*,size_t,TYPE_2__*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int
FUNC_5(struct bpf_object *VAR_4)
{
 Elf_Data *VAR_5 = VAR_4->efile.symbols;
 struct bpf_program *VAR_6;
 size_t VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_4->nr_programs; VAR_7++) {
  const char *VAR_9 = ((void*)0);

  VAR_6 = &VAR_4->programs[VAR_7];

  for (VAR_8 = 0; VAR_8 < VAR_5->d_size / sizeof(GElf_Sym) && !VAR_9;
       VAR_8++) {
   GElf_Sym VAR_10;

   if (!FUNC_2(VAR_5, VAR_8, &VAR_10))
    continue;
   if (VAR_10.st_shndx != VAR_6->idx)
    continue;
   if (FUNC_0(VAR_10.st_info) != VAR_3)
    continue;

   VAR_9 = FUNC_1(VAR_4->efile.elf,
       VAR_4->efile.strtabidx,
       VAR_10.st_name);
   if (!VAR_9) {
    FUNC_3("failed to get sym name string for prog %s\n",
        VAR_6->section_name);
    return -VAR_2;
   }
  }

  if (!VAR_9 && VAR_6->idx == VAR_4->efile.text_shndx)
   VAR_9 = ".text";

  if (!VAR_9) {
   FUNC_3("failed to find sym for prog %s\n",
       VAR_6->section_name);
   return -VAR_0;
  }

  VAR_6->name = FUNC_4(VAR_9);
  if (!VAR_6->name) {
   FUNC_3("failed to allocate memory for prog sym %s\n",
       VAR_9);
   return -VAR_1;
  }
 }

 return 0;
}
