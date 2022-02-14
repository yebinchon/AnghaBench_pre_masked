
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sectioncheck {int (* handler ) (char const*,struct elf_info*,struct sectioncheck const*,int *,int *,char const*) ;} ;
struct elf_info {int dummy; } ;
typedef int Elf_Sym ;
typedef int Elf_Rela ;


 int FUNC_0 (char const*,struct elf_info*,struct sectioncheck const*,int *,int *,char const*) ;
 int FUNC_1 (struct elf_info*,int *) ;
 char* FUNC_2 (struct elf_info*,int ) ;
 struct sectioncheck* FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const*,struct elf_info*,struct sectioncheck const*,int *,int *,char const*) ;

__attribute__((used)) static void FUNC_5(const char *VAR_0, struct elf_info *VAR_1,
       Elf_Rela *VAR_2, Elf_Sym *VAR_3, const char *VAR_4)
{
 const char *VAR_5 = FUNC_2(VAR_1, FUNC_1(VAR_1, VAR_3));
 const struct sectioncheck *VAR_6 = FUNC_3(VAR_4, VAR_5);

 if (VAR_6) {
  if (VAR_6->handler)
   VAR_6->handler(VAR_0, VAR_1, VAR_6,
       VAR_2, VAR_3, VAR_4);
  else
   FUNC_0(VAR_0, VAR_1, VAR_6,
       VAR_2, VAR_3, VAR_4);
 }
}
