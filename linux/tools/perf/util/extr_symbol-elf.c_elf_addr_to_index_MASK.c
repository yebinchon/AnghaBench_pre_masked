
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sh_addr; scalar_t__ sh_size; } ;
typedef TYPE_1__ GElf_Shdr ;
typedef scalar_t__ GElf_Addr ;
typedef int Elf_Scn ;
typedef int Elf ;


 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static size_t FUNC_2(Elf *VAR_0, GElf_Addr VAR_1)
{
 Elf_Scn *VAR_2 = ((void*)0);
 GElf_Shdr VAR_3;
 size_t VAR_4 = 1;

 while ((VAR_2 = FUNC_0(VAR_0, VAR_2)) != ((void*)0)) {
  FUNC_1(VAR_2, &VAR_3);

  if ((VAR_1 >= VAR_3.sh_addr) &&
      (VAR_1 < (VAR_3.sh_addr + VAR_3.sh_size)))
   return VAR_4;

  ++VAR_4;
 }

 return -1;
}
