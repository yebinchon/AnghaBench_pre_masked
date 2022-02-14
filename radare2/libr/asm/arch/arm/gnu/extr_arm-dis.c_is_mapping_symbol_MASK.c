
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disassemble_info {int * symtab; } ;
typedef enum map_type { ____Placeholder_map_type } map_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1 (struct disassemble_info *VAR_5, int VAR_6,
     enum map_type *VAR_7)
{
  const char *VAR_8;

  VAR_8 = FUNC_0 (VAR_5->symtab[VAR_6]);
  if (VAR_8[0] == '$' && (VAR_8[1] == 'a' || VAR_8[1] == 't' || VAR_8[1] == 'd')
      && (VAR_8[2] == 0 || VAR_8[2] == '.'))
    {
      *VAR_7 = ((VAR_8[1] == 'a') ? VAR_1
     : (VAR_8[1] == 't') ? VAR_3
     : VAR_2);
      return VAR_4;
    }

  return VAR_0;
}
