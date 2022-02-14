
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3rbu ;
struct TYPE_3__ {int nTblCol; char** azTblCol; } ;
typedef TYPE_1__ RbuObjIter ;


 char* FUNC_0 (int *,char*,char*,char const*,char const*) ;

__attribute__((used)) static char *FUNC_1(
  sqlite3rbu *VAR_0,
  RbuObjIter *VAR_1
){
  char *VAR_2 = 0;
  const char *VAR_3 = "";
  int VAR_4;
  for(VAR_4=0; VAR_4<VAR_1->nTblCol; VAR_4++){
    const char *VAR_5 = VAR_1->azTblCol[VAR_4];
    VAR_2 = FUNC_0(VAR_0, "%z%s\"%w\"", VAR_2, VAR_3, VAR_5);
    VAR_3 = ", ";
  }
  return VAR_2;
}
