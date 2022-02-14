
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 scalar_t__ FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(char *VAR_0){
  int VAR_1, VAR_2;
  VAR_2 = (int)FUNC_1(VAR_0);
  for(VAR_1=VAR_2-1; VAR_1>0 && VAR_0[VAR_1]!='/' && VAR_0[VAR_1]!='.'; VAR_1--){}
  if( VAR_0[VAR_1]=='.' && (VAR_2>VAR_1+4) ) FUNC_0(&VAR_0[VAR_1+1], &VAR_0[VAR_2-3], 4);
}
