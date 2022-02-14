
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hexagon_operand ;
typedef int hexagon_insn ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,int ,int ,int ,char*,char*,char**) ;
 int FUNC_1 (int const*,int ,int ,char*,int*,char**) ;

int
FUNC_2
(const hexagon_operand *VAR_2, hexagon_insn VAR_3,
 char *VAR_4, int *VAR_5, char **VAR_6)
{
  char VAR_7 [100];
  int VAR_8;


  if (!FUNC_0 (VAR_2, VAR_3, 0, 0, VAR_4, VAR_7, VAR_6))
    return VAR_0;


  if (!FUNC_1 (VAR_2, VAR_3, 0, VAR_4, &VAR_8, VAR_6))
    return VAR_0;

  *VAR_5 = VAR_8;
  return VAR_1;
}
