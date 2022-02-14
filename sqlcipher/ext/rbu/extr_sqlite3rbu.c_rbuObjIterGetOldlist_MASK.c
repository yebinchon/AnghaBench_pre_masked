
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ rc; } ;
typedef TYPE_1__ sqlite3rbu ;
struct TYPE_7__ {int nTblCol; char** azTblCol; scalar_t__ eType; scalar_t__* abIndexed; } ;
typedef TYPE_2__ RbuObjIter ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (TYPE_1__*,char*,char*,char const*) ;
 char* FUNC_1 (char*,char*,char const*,...) ;

__attribute__((used)) static char *FUNC_2(
  sqlite3rbu *VAR_4,
  RbuObjIter *VAR_5,
  const char *VAR_6
){
  char *VAR_7 = 0;
  if( VAR_4->rc==VAR_3 && VAR_5->abIndexed ){
    const char *VAR_8 = "";
    int VAR_9;
    for(VAR_9=0; VAR_9<VAR_5->nTblCol; VAR_9++){
      if( VAR_5->abIndexed[VAR_9] ){
        const char *VAR_10 = VAR_5->azTblCol[VAR_9];
        VAR_7 = FUNC_1("%z%s%s.\"%w\"", VAR_7, VAR_8, VAR_6, VAR_10);
      }else{
        VAR_7 = FUNC_1("%z%sNULL", VAR_7, VAR_8);
      }
      VAR_8 = ", ";
      if( VAR_7==0 ){
        VAR_4->rc = VAR_2;
        break;
      }
    }


    if( VAR_5->eType==VAR_0 || VAR_5->eType==VAR_1 ){
      VAR_7 = FUNC_0(VAR_4, "%z, %s._rowid_", VAR_7, VAR_6);
    }
  }
  return VAR_7;
}
