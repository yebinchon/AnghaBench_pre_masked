
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sqlite3_int64 ;
typedef int i64 ;
struct TYPE_10__ {int nCol; scalar_t__ eContent; scalar_t__ bColumnsize; } ;
struct TYPE_9__ {int * pIndex; TYPE_2__* pConfig; int * aTotalSize; } ;
typedef TYPE_1__ Fts5Storage ;
typedef int Fts5Index ;
typedef TYPE_2__ Fts5Config ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,size_t) ;
 int FUNC_1 (TYPE_2__*,char*,char*,int,char**) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (int,char*,char*,...) ;
 scalar_t__ FUNC_7 (char*) ;

int FUNC_8(
  Fts5Config *VAR_4,
  Fts5Index *VAR_5,
  int VAR_6,
  Fts5Storage **VAR_7,
  char **VAR_8
){
  int VAR_9 = VAR_3;
  Fts5Storage *VAR_10;
  sqlite3_int64 VAR_11;

  VAR_11 = sizeof(Fts5Storage)
        + VAR_4->nCol * sizeof(i64);
  *VAR_7 = VAR_10 = (Fts5Storage*)FUNC_5(VAR_11);
  if( !VAR_10 ) return VAR_2;

  FUNC_0(VAR_10, 0, (size_t)VAR_11);
  VAR_10->aTotalSize = (i64*)&VAR_10[1];
  VAR_10->pConfig = VAR_4;
  VAR_10->pIndex = VAR_5;

  if( VAR_6 ){
    if( VAR_4->eContent==VAR_0 ){
      int VAR_12 = 32 + VAR_4->nCol*10;
      char *VAR_13 = FUNC_5(32 + (sqlite3_int64)VAR_4->nCol * 10);
      if( VAR_13==0 ){
        VAR_9 = VAR_2;
      }else{
        int VAR_14;
        int VAR_15;
        FUNC_6(VAR_12, VAR_13, "id INTEGER PRIMARY KEY");
        VAR_15 = (int)FUNC_7(VAR_13);
        for(VAR_14=0; VAR_14<VAR_4->nCol; VAR_14++){
          FUNC_6(VAR_12-VAR_15, &VAR_13[VAR_15], ", c%d", VAR_14);
          VAR_15 += (int)FUNC_7(&VAR_13[VAR_15]);
        }
        VAR_9 = FUNC_1(VAR_4, "content", VAR_13, 0, VAR_8);
      }
      FUNC_4(VAR_13);
    }

    if( VAR_9==VAR_3 && VAR_4->bColumnsize ){
      VAR_9 = FUNC_1(
          VAR_4, "docsize", "id INTEGER PRIMARY KEY, sz BLOB", 0, VAR_8
      );
    }
    if( VAR_9==VAR_3 ){
      VAR_9 = FUNC_1(
          VAR_4, "config", "k PRIMARY KEY, v", 1, VAR_8
      );
    }
    if( VAR_9==VAR_3 ){
      VAR_9 = FUNC_3(VAR_10, "version", 0, VAR_1);
    }
  }

  if( VAR_9 ){
    FUNC_2(VAR_10);
    *VAR_7 = 0;
  }
  return VAR_9;
}
