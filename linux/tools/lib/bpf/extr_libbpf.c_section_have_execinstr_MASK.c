
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int elf; } ;
struct bpf_object {TYPE_1__ efile; } ;
struct TYPE_6__ {int sh_flags; } ;
typedef TYPE_2__ GElf_Shdr ;
typedef int Elf_Scn ;


 int VAR_0 ;
 int * FUNC_0 (int ,int) ;
 TYPE_2__* FUNC_1 (int *,TYPE_2__*) ;

__attribute__((used)) static bool FUNC_2(struct bpf_object *VAR_1, int VAR_2)
{
 Elf_Scn *VAR_3;
 GElf_Shdr VAR_4;

 VAR_3 = FUNC_0(VAR_1->efile.elf, VAR_2);
 if (!VAR_3)
  return 0;

 if (FUNC_1(VAR_3, &VAR_4) != &VAR_4)
  return 0;

 if (VAR_4.sh_flags & VAR_0)
  return 1;

 return 0;
}
