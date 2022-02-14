
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int st_name; } ;
typedef TYPE_1__ Elf_Sym ;
typedef int Elf_Rel ;


 size_t FUNC_0 (int const*) ;
 char const* VAR_0 ;
 char VAR_1 ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 size_t FUNC_2 (int ) ;

__attribute__((used)) static unsigned FUNC_3(Elf_Sym const *const VAR_2,
         Elf_Rel const *VAR_3,
         char const *const VAR_4)
{
 unsigned VAR_5 = 0;

 Elf_Sym const *const VAR_6 =
  &VAR_2[FUNC_0(VAR_3)];
 char const *VAR_7 = &VAR_4[FUNC_2(VAR_6->st_name)];
 char const *VAR_8 = VAR_1 == '_' ? "_mcount" : "mcount";
 char const *VAR_9 = "__fentry__";

 if (VAR_7[0] == '.')
  ++VAR_7;
 if (FUNC_1(VAR_8, VAR_7) == 0 ||
     (VAR_0 && FUNC_1(VAR_0, VAR_7) == 0) ||
     (FUNC_1(VAR_9, VAR_7) == 0))
  VAR_5 = FUNC_0(VAR_3);

 return VAR_5;
}
