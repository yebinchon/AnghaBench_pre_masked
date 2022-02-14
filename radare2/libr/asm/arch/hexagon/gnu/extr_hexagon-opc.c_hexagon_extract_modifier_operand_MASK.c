
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int hexagon_operand ;
typedef int hexagon_insn ;
struct TYPE_2__ {char* name; int reg_num; } ;


 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int const*,int ,int ,int ,char*,char*,char**) ;
 int FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (char*,char*,char*) ;
 size_t FUNC_3 (char const*) ;

int
FUNC_4(
    const hexagon_operand *VAR_2,
    hexagon_insn VAR_3,
    char *VAR_4,
    int *VAR_5,
    char **VAR_6
)
{
  size_t VAR_7;
  char VAR_8[100];
  static char VAR_9[100];


  if(!FUNC_0(VAR_2, VAR_3, 0, 0, VAR_4, VAR_8, VAR_6))
    return 0;



  for(VAR_7=0;VAR_7<VAR_1;VAR_7++){
    const char *VAR_10 = VAR_0[VAR_7].name;
    size_t VAR_11 = FUNC_3(VAR_10);
    if(!FUNC_1(VAR_8,VAR_10,VAR_11)){
      *VAR_5 = VAR_0[VAR_7].reg_num;
      return 1;
    }
  }

  FUNC_2(VAR_9, "Illegal modifier operand: %s", VAR_8);
  *VAR_6 = VAR_9;
  return 0;
}
