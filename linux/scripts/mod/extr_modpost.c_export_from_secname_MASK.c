
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf_info {int dummy; } ;
typedef enum export { ____Placeholder_export } export ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (struct elf_info*,unsigned int) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static enum export FUNC_2(struct elf_info *VAR_6, unsigned int VAR_7)
{
 const char *VAR_8 = FUNC_0(VAR_6, VAR_7);

 if (FUNC_1(VAR_8, "___ksymtab+"))
  return VAR_2;
 else if (FUNC_1(VAR_8, "___ksymtab_unused+"))
  return VAR_4;
 else if (FUNC_1(VAR_8, "___ksymtab_gpl+"))
  return VAR_0;
 else if (FUNC_1(VAR_8, "___ksymtab_unused_gpl+"))
  return VAR_5;
 else if (FUNC_1(VAR_8, "___ksymtab_gpl_future+"))
  return VAR_1;
 else
  return VAR_3;
}
