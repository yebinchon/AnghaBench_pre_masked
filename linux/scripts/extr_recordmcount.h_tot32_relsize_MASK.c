
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sh_size; } ;
typedef TYPE_1__ Elf_Shdr ;


 scalar_t__ FUNC_0 (int ) ;
 char const* VAR_0 ;
 char* FUNC_1 (TYPE_1__ const*,TYPE_1__ const* const,char const* const,char const* const) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static unsigned FUNC_3(Elf_Shdr const *const VAR_1,
       unsigned VAR_2,
       const char *const VAR_3,
       const char *const VAR_4)
{
 unsigned VAR_5 = 0;
 Elf_Shdr const *VAR_6 = VAR_1;
 char const *VAR_7;

 for (; VAR_2; --VAR_2, ++VAR_6) {
  VAR_7 = FUNC_1(VAR_6, VAR_1, VAR_3, VAR_4);
  if (VAR_7 == VAR_0) {
   VAR_5 = 0;
   break;
  }
  if (VAR_7 && FUNC_2(VAR_7))
   VAR_5 += FUNC_0(VAR_6->sh_size);
 }
 return VAR_5;
}
