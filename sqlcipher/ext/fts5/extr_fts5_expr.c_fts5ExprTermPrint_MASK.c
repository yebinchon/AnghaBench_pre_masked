
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_3__ {char* zTerm; scalar_t__ bPrefix; struct TYPE_3__* pSynonym; } ;
typedef TYPE_1__ Fts5ExprTerm ;


 char* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*) ;

__attribute__((used)) static char *FUNC_2(Fts5ExprTerm *VAR_0){
  sqlite3_int64 VAR_1 = 0;
  Fts5ExprTerm *VAR_2;
  char *VAR_3;


  for(VAR_2=VAR_0; VAR_2; VAR_2=VAR_2->pSynonym){
    VAR_1 += (int)FUNC_1(VAR_0->zTerm) * 2 + 3 + 2;
  }
  VAR_3 = FUNC_0(VAR_1);

  if( VAR_3 ){
    int VAR_4 = 0;
    for(VAR_2=VAR_0; VAR_2; VAR_2=VAR_2->pSynonym){
      char *VAR_5 = VAR_2->zTerm;
      VAR_3[VAR_4++] = '"';
      while( *VAR_5 ){
        if( *VAR_5=='"' ) VAR_3[VAR_4++] = '"';
        VAR_3[VAR_4++] = *VAR_5++;
      }
      VAR_3[VAR_4++] = '"';
      if( VAR_2->pSynonym ) VAR_3[VAR_4++] = '|';
    }
    if( VAR_0->bPrefix ){
      VAR_3[VAR_4++] = ' ';
      VAR_3[VAR_4++] = '*';
    }
    VAR_3[VAR_4++] = '\0';
  }
  return VAR_3;
}
