
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sym {int address; int offset; char* name; void* content; int size; } ;
struct TYPE_11__ {int e_shoff; } ;
struct TYPE_10__ {int sh_addr; int sh_offset; } ;
struct TYPE_9__ {int st_shndx; int st_value; int st_size; } ;
typedef TYPE_1__ Elf_Sym ;
typedef TYPE_2__ Elf_Shdr ;
typedef TYPE_3__ Elf_Ehdr ;


 TYPE_1__* FUNC_0 (TYPE_3__*,TYPE_2__*,char*) ;

__attribute__((used)) static void FUNC_1(Elf_Ehdr *VAR_0, Elf_Shdr *VAR_1,
      char *VAR_2, struct sym *VAR_3)
{
 Elf_Shdr *VAR_4;
 int VAR_5;
 Elf_Sym *VAR_6;
 Elf_Shdr *VAR_7;

 VAR_7 = (void *)VAR_0 + VAR_0->e_shoff;
 VAR_3->size = 0;
 VAR_3->address = 0;
 VAR_3->offset = 0;
 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (!VAR_6)
  return;
 VAR_5 = VAR_6->st_shndx;
 if (!VAR_5)
  return;
 VAR_4 = &VAR_7[VAR_5];
 VAR_3->size = VAR_6->st_size;
 VAR_3->address = VAR_6->st_value;
 VAR_3->offset = VAR_3->address - VAR_4->sh_addr
          + VAR_4->sh_offset;
 VAR_3->name = VAR_2;
 VAR_3->content = (void *)VAR_0 + VAR_3->offset;
}
