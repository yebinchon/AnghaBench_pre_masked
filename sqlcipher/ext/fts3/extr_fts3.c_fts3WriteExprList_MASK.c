
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nColumn; scalar_t__ zLanguageid; } ;
typedef TYPE_1__ Fts3Table ;


 int FUNC_0 (int*,char**,char*,...) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static char *FUNC_3(Fts3Table *VAR_0, const char *VAR_1, int *VAR_2){
  char *VAR_3 = 0;
  char *VAR_4 = 0;
  char *VAR_5;
  int VAR_6;

  if( !VAR_1 ){
    VAR_5 = "";
  }else{
    VAR_4 = VAR_5 = FUNC_1(VAR_1);
  }
  FUNC_0(VAR_2, &VAR_3, "?");
  for(VAR_6=0; VAR_6<VAR_0->nColumn; VAR_6++){
    FUNC_0(VAR_2, &VAR_3, ",%s(?)", VAR_5);
  }
  if( VAR_0->zLanguageid ){
    FUNC_0(VAR_2, &VAR_3, ", ?");
  }
  FUNC_2(VAR_4);
  return VAR_3;
}
