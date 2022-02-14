
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct disassemble_info {TYPE_1__** symtab; int * section; } ;
typedef enum map_type { ____Placeholder_map_type } map_type ;
struct TYPE_2__ {int * section; } ;


 int VAR_0 ;
 int FUNC_0 (struct disassemble_info*,int,int*) ;

__attribute__((used)) static int
FUNC_1 (struct disassemble_info *VAR_1,
    int VAR_2,
    enum map_type *VAR_3)
{

  if (VAR_1->section != ((void*)0) && VAR_1->section != VAR_1->symtab[VAR_2]->section) {
   return VAR_0;
  }

  return FUNC_0 (VAR_1, VAR_2, VAR_3);
}
