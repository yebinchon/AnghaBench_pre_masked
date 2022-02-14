
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int uaccess_safe; } ;
struct objtool_file {int elf; } ;


 struct symbol* FUNC_0 (int ,char const*) ;
 int VAR_0 ;
 char** VAR_1 ;

__attribute__((used)) static void FUNC_1(struct objtool_file *VAR_2)
{
 struct symbol *VAR_3;
 const char **VAR_4;

 if (!VAR_0)
  return;

 for (VAR_4 = VAR_1; *VAR_4; VAR_4++) {
  VAR_3 = FUNC_0(VAR_2->elf, *VAR_4);
  if (!VAR_3)
   continue;

  VAR_3->uaccess_safe = 1;
 }
}
