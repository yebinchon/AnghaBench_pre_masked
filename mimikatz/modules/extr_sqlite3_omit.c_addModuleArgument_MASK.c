
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_3__ {int nModuleArg; char** azModuleArg; } ;
typedef TYPE_1__ Table ;


 int FUNC_0 (int *,char*) ;
 char** FUNC_1 (int *,char**,int) ;

__attribute__((used)) static void FUNC_2(sqlite3 *VAR_0, Table *VAR_1, char *VAR_2){
  int VAR_3 = sizeof(char *)*(2+VAR_1->nModuleArg);
  char **VAR_4;
  VAR_4 = FUNC_1(VAR_0, VAR_1->azModuleArg, VAR_3);
  if( VAR_4==0 ){
    FUNC_0(VAR_0, VAR_2);
  }else{
    int VAR_5 = VAR_1->nModuleArg++;
    VAR_4[VAR_5] = VAR_2;
    VAR_4[VAR_5+1] = 0;
    VAR_1->azModuleArg = VAR_4;
  }
}
