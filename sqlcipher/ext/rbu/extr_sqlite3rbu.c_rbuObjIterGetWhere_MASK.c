
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3rbu ;
struct TYPE_3__ {scalar_t__ eType; int nTblCol; char** azTblCol; scalar_t__* abTblPk; } ;
typedef TYPE_1__ RbuObjIter ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (int *,char*,...) ;

__attribute__((used)) static char *FUNC_1(
  sqlite3rbu *VAR_3,
  RbuObjIter *VAR_4
){
  char *VAR_5 = 0;
  if( VAR_4->eType==VAR_2 || VAR_4->eType==VAR_1 ){
    VAR_5 = FUNC_0(VAR_3, "_rowid_ = ?%d", VAR_4->nTblCol+1);
  }else if( VAR_4->eType==VAR_0 ){
    const char *VAR_6 = "";
    int VAR_7;
    for(VAR_7=0; VAR_7<VAR_4->nTblCol; VAR_7++){
      if( VAR_4->abTblPk[VAR_7] ){
        VAR_5 = FUNC_0(VAR_3, "%z%sc%d=?%d", VAR_5, VAR_6, VAR_7, VAR_7+1);
        VAR_6 = " AND ";
      }
    }
    VAR_5 = FUNC_0(VAR_3,
        "_rowid_ = (SELECT id FROM rbu_imposter2 WHERE %z)", VAR_5
    );

  }else{
    const char *VAR_8 = "";
    int VAR_9;
    for(VAR_9=0; VAR_9<VAR_4->nTblCol; VAR_9++){
      if( VAR_4->abTblPk[VAR_9] ){
        const char *VAR_10 = VAR_4->azTblCol[VAR_9];
        VAR_5 = FUNC_0(VAR_3, "%z%s\"%w\"=?%d", VAR_5, VAR_8, VAR_10, VAR_9+1);
        VAR_8 = " AND ";
      }
    }
  }
  return VAR_5;
}
