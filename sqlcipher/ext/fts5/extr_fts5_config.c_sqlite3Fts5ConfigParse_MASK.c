
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3_int64 ;
typedef int sqlite3 ;
struct TYPE_9__ {int iCookie; char** azCol; char const* zName; int bColumnsize; int bPrefixIndex; scalar_t__ pTok; scalar_t__ zContent; scalar_t__ eContent; scalar_t__ zContentRowid; void* zDb; int eDetail; int * abUnindexed; int * db; } ;
typedef int Fts5Global ;
typedef TYPE_1__ Fts5Config ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 char* FUNC_2 (int*,char const*,char**,int*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*,char*,char**) ;
 int FUNC_5 (int *,TYPE_1__*,char*,char*,char**) ;
 char* FUNC_6 (char const*) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (int*,int) ;
 scalar_t__ FUNC_10 (int*,char*,void*,char const*,char const*) ;
 void* FUNC_11 (int*,char const*,int) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (int) ;
 char* FUNC_14 (char*,char const*) ;
 scalar_t__ FUNC_15 (char const*,int ) ;

int FUNC_16(
  Fts5Global *VAR_7,
  sqlite3 *VAR_8,
  int VAR_9,
  const char **VAR_10,
  Fts5Config **VAR_11,
  char **VAR_12
){
  int VAR_13 = VAR_6;
  Fts5Config *VAR_14;
  int VAR_15;
  sqlite3_int64 VAR_16;

  *VAR_11 = VAR_14 = (Fts5Config*)FUNC_13(sizeof(Fts5Config));
  if( VAR_14==0 ) return VAR_5;
  FUNC_7(VAR_14, 0, sizeof(Fts5Config));
  VAR_14->db = VAR_8;
  VAR_14->iCookie = -1;

  VAR_16 = VAR_9 * (sizeof(char*) + sizeof(u8));
  VAR_14->azCol = (char**)FUNC_9(&VAR_13, VAR_16);
  VAR_14->abUnindexed = (u8*)&VAR_14->azCol[VAR_9];
  VAR_14->zDb = FUNC_11(&VAR_13, VAR_10[1], -1);
  VAR_14->zName = FUNC_11(&VAR_13, VAR_10[2], -1);
  VAR_14->bColumnsize = 1;
  VAR_14->eDetail = VAR_2;



  if( VAR_13==VAR_6 && FUNC_15(VAR_14->zName, VAR_3)==0 ){
    *VAR_12 = FUNC_14("reserved fts5 table name: %s", VAR_14->zName);
    VAR_13 = VAR_4;
  }

  for(VAR_15=3; VAR_13==VAR_6 && VAR_15<VAR_9; VAR_15++){
    const char *VAR_17 = VAR_10[VAR_15];
    const char *VAR_18;
    char *VAR_19 = 0;
    char *VAR_20 = 0;
    int VAR_21 = 0;
    int VAR_22 = 0;

    VAR_18 = FUNC_2(&VAR_13, VAR_17, &VAR_19, &VAR_22);
    VAR_18 = FUNC_6(VAR_18);
    if( VAR_18 && *VAR_18=='=' ){
      VAR_21 = 1;
      VAR_18++;
      if( VAR_22 ) VAR_18 = 0;
    }
    VAR_18 = FUNC_6(VAR_18);
    if( VAR_18 && VAR_18[0] ){
      int VAR_23;
      VAR_18 = FUNC_2(&VAR_13, VAR_18, &VAR_20, &VAR_23);
      if( VAR_18 && VAR_18[0] ) VAR_18 = 0;
    }

    if( VAR_13==VAR_6 ){
      if( VAR_18==0 ){
        *VAR_12 = FUNC_14("parse error in \"%s\"", VAR_17);
        VAR_13 = VAR_4;
      }else{
        if( VAR_21 ){
          VAR_13 = FUNC_5(VAR_7, VAR_14, VAR_19, VAR_20?VAR_20:"", VAR_12);
        }else{
          VAR_13 = FUNC_4(VAR_14, VAR_19, VAR_20, VAR_12);
          VAR_19 = 0;
        }
      }
    }

    FUNC_12(VAR_19);
    FUNC_12(VAR_20);
  }




  if( VAR_13==VAR_6 && VAR_14->pTok==0 ){
    VAR_13 = FUNC_1(VAR_7, VAR_14);
  }


  if( VAR_13==VAR_6 && VAR_14->zContent==0 ){
    const char *VAR_24 = 0;
    FUNC_0( VAR_14->eContent==VAR_1
         || VAR_14->eContent==VAR_0
    );
    if( VAR_14->eContent==VAR_1 ){
      VAR_24 = "content";
    }else if( VAR_14->bColumnsize ){
      VAR_24 = "docsize";
    }

    if( VAR_24 ){
      VAR_14->zContent = FUNC_10(
          &VAR_13, "%Q.'%q_%s'", VAR_14->zDb, VAR_14->zName, VAR_24
      );
    }
  }

  if( VAR_13==VAR_6 && VAR_14->zContentRowid==0 ){
    VAR_14->zContentRowid = FUNC_11(&VAR_13, "rowid", -1);
  }


  if( VAR_13==VAR_6 ){
    VAR_13 = FUNC_3(VAR_14);
  }

  if( VAR_13!=VAR_6 ){
    FUNC_8(VAR_14);
    *VAR_11 = 0;
  }
  return VAR_13;
}
