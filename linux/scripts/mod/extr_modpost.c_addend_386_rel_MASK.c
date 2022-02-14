
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct elf_info {TYPE_1__* hdr; } ;
struct TYPE_6__ {int r_offset; int r_addend; int r_info; } ;
struct TYPE_5__ {int e_type; } ;
typedef int Elf_Shdr ;
typedef TYPE_2__ Elf_Rela ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;


 int FUNC_1 (unsigned int) ;
 unsigned int* FUNC_2 (struct elf_info*,int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(struct elf_info *VAR_1, Elf_Shdr *VAR_2, Elf_Rela *VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_3->r_info);
 unsigned int *VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3);

 switch (VAR_4) {
 case 129:
  VAR_3->r_addend = FUNC_1(*VAR_5);
  break;
 case 128:
  VAR_3->r_addend = FUNC_1(*VAR_5) + 4;

  if (VAR_1->hdr->e_type == VAR_0)
   VAR_3->r_addend += VAR_3->r_offset;
  break;
 }
 return 0;
}
