
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const**,char,int*,int,int*,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2 (const char **VAR_0, char VAR_1, int *VAR_2, int VAR_3,
  int VAR_4)
{
  int VAR_5 = 1;
  int VAR_6;
  if (VAR_2)
    *VAR_2 = 1;
  VAR_6 = FUNC_0 (VAR_0, VAR_1, VAR_2, VAR_3, &VAR_5, VAR_4);
  if (VAR_4 && (!VAR_2 || *VAR_2) && VAR_5)
    FUNC_1 (0, "expression fully enclosed in parenthesis\n");
  return VAR_6;
}
