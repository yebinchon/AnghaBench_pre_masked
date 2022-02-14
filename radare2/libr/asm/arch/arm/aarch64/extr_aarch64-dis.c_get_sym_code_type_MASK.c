
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct disassemble_info {TYPE_3__** symtab; int * section; } ;
typedef enum map_type { ____Placeholder_map_type } map_type ;
struct TYPE_4__ {int st_info; } ;
struct TYPE_5__ {TYPE_1__ internal_elf_sym; } ;
typedef TYPE_2__ elf_symbol_type ;
struct TYPE_6__ {int * section; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_2 (struct disassemble_info *VAR_5, int VAR_6,
     enum map_type *VAR_7)
{
  elf_symbol_type *VAR_8;
  unsigned int VAR_9;
  const char *VAR_10;


  if (VAR_5->section != ((void*)0) && VAR_5->section != VAR_5->symtab[VAR_6]->section)
    return VAR_0;

  VAR_8 = *(elf_symbol_type **)(VAR_5->symtab + VAR_6);
  VAR_9 = FUNC_0 (VAR_8->internal_elf_sym.st_info);


  if (VAR_9 == VAR_3)
    {
      *VAR_7 = VAR_2;
      return VAR_4;
    }


  VAR_10 = FUNC_1(VAR_5->symtab[VAR_6]);
  if (VAR_10[0] == '$'
      && (VAR_10[1] == 'x' || VAR_10[1] == 'd')
      && (VAR_10[2] == '\0' || VAR_10[2] == '.'))
    {
      *VAR_7 = (VAR_10[1] == 'x' ? VAR_2 : VAR_1);
      return VAR_4;
    }

  return VAR_0;
}
