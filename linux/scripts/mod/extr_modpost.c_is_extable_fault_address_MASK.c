
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int r_offset; } ;
typedef TYPE_1__ Elf_Rela ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static inline bool FUNC_1(Elf_Rela *VAR_1)
{





 if (VAR_1->r_offset && VAR_0 == 0)
  FUNC_0("extable_entry size hasn't been discovered!\n");

 return ((VAR_1->r_offset == 0) ||
  (VAR_1->r_offset % VAR_0 == 0));
}
