
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int r_offset; } ;
typedef TYPE_1__ Elf_Rel ;
typedef scalar_t__ Elf_Addr ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(Elf_Rel const *VAR_1)
{
 static Elf_Addr VAR_2 = ~(Elf_Addr)0;
 Elf_Addr VAR_3 = FUNC_0(VAR_1->r_offset);
 int VAR_4;

 VAR_4 = (VAR_2 != ~(Elf_Addr)0) &&
  (VAR_3 - VAR_2 == VAR_0);
 VAR_2 = VAR_3;

 return VAR_4;
}
