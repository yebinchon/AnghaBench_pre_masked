
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct sectioncheck {int bad_tosec; } ;
struct elf_info {int dummy; } ;
struct TYPE_5__ {scalar_t__ r_offset; } ;
typedef int Elf_Sym ;
typedef TYPE_1__ Elf_Rela ;


 int FUNC_0 (char*,char const*,long,char const*,...) ;
 int FUNC_1 (struct elf_info*,int *) ;
 int FUNC_2 (struct elf_info*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (char const*,int ) ;
 int FUNC_5 (char const*,struct elf_info*,struct sectioncheck const* const,TYPE_1__*,int *,char const*,char const*) ;
 int VAR_0 ;
 char* FUNC_6 (struct elf_info*,int ) ;

__attribute__((used)) static void FUNC_7(const char* VAR_1, struct elf_info *VAR_2,
         const struct sectioncheck* const VAR_3,
         Elf_Rela* VAR_4, Elf_Sym* VAR_5,
         const char *VAR_6)
{
 const char* VAR_7 = FUNC_6(VAR_2, FUNC_1(VAR_2, VAR_5));

 VAR_0++;

 FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

 if (FUNC_4(VAR_7, VAR_3->bad_tosec))
  FUNC_0("The relocation at %s+0x%lx references\n"
        "section \"%s\" which is black-listed.\n"
        "Something is seriously wrong and should be fixed.\n"
        "You might get more information about where this is\n"
        "coming from by using scripts/check_extable.sh %s\n",
        VAR_6, (long)VAR_4->r_offset, VAR_7, VAR_1);
 else if (!FUNC_2(VAR_2, FUNC_1(VAR_2, VAR_5))) {
  if (FUNC_3(VAR_4))
   FUNC_0("The relocation at %s+0x%lx references\n"
         "section \"%s\" which is not executable, IOW\n"
         "it is not possible for the kernel to fault\n"
         "at that address.  Something is seriously wrong\n"
         "and should be fixed.\n",
         VAR_6, (long)VAR_4->r_offset, VAR_7);
  else
   FUNC_0("The relocation at %s+0x%lx references\n"
         "section \"%s\" which is not executable, IOW\n"
         "the kernel will fault if it ever tries to\n"
         "jump to it.  Something is seriously wrong\n"
         "and should be fixed.\n",
         VAR_6, (long)VAR_4->r_offset, VAR_7);
 }
}
