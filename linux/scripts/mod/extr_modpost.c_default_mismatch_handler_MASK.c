
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sectioncheck {int dummy; } ;
struct elf_info {int dummy; } ;
struct TYPE_3__ {int r_offset; int r_addend; } ;
typedef int Elf_Sym ;
typedef TYPE_1__ Elf_Rela ;


 int * FUNC_0 (struct elf_info*,int ,int *) ;
 int * FUNC_1 (struct elf_info*,int ,char const*) ;
 int FUNC_2 (struct elf_info*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,struct sectioncheck const* const,char const*,int ,char const*,int ,char const*,char const*,int ) ;
 char* FUNC_5 (struct elf_info*,int ) ;
 scalar_t__ FUNC_6 (struct sectioncheck const* const,char const*,char const*,char const*,char const*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 char* FUNC_8 (struct elf_info*,int *) ;

__attribute__((used)) static void FUNC_9(const char *VAR_0, struct elf_info *VAR_1,
         const struct sectioncheck* const VAR_2,
         Elf_Rela *VAR_3, Elf_Sym *VAR_4, const char *VAR_5)
{
 const char *VAR_6;
 Elf_Sym *VAR_7;
 Elf_Sym *VAR_8;
 const char *VAR_9;
 const char *VAR_10;

 VAR_8 = FUNC_1(VAR_1, VAR_3->r_offset, VAR_5);
 VAR_10 = FUNC_8(VAR_1, VAR_8);

 if (FUNC_7(VAR_10, "reference___initcall"))
  return;

 VAR_6 = FUNC_5(VAR_1, FUNC_2(VAR_1, VAR_4));
 VAR_7 = FUNC_0(VAR_1, VAR_3->r_addend, VAR_4);
 VAR_9 = FUNC_8(VAR_1, VAR_7);


 if (FUNC_6(VAR_2,
        VAR_5, VAR_10, VAR_6, VAR_9)) {
  FUNC_4(VAR_0, VAR_2,
        VAR_5, VAR_3->r_offset, VAR_10,
        FUNC_3(VAR_8), VAR_6, VAR_9,
        FUNC_3(VAR_7));
 }
}
