
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_10__ {int (* xNext ) (int *,char const**,int*,int*,int*,int*) ;int (* xClose ) (int *) ;} ;
typedef TYPE_2__ sqlite3_tokenizer_module ;
typedef int sqlite3_tokenizer_cursor ;
typedef int sqlite3_stmt ;
typedef int i64 ;
struct TYPE_12__ {TYPE_2__* pModule; } ;
struct TYPE_11__ {int iPrevLangid; int nIndex; int nColumn; scalar_t__* abNotindexed; TYPE_1__* aIndex; TYPE_4__* pTokenizer; int db; int zReadExprlist; } ;
struct TYPE_9__ {int nPrefix; } ;
typedef TYPE_3__ Fts3Table ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*,int,int,int,int ,int,int) ;
 int FUNC_1 (TYPE_3__*,int,int,int*) ;
 int FUNC_2 (TYPE_3__*,int ,int **,int ) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (TYPE_4__*,int,char const*,int,int **) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (char*,int ) ;
 int FUNC_13 (int ,char*,int,int **,int ) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (int *,char const**,int*,int*,int*,int*) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(Fts3Table *VAR_5, int *VAR_6){
  int VAR_7 = VAR_2;
  u64 VAR_8 = 0;
  u64 VAR_9 = 0;
  sqlite3_stmt *VAR_10 = 0;


  VAR_7 = FUNC_2(VAR_5, VAR_4, &VAR_10, 0);
  if( VAR_7==VAR_2 ){
    int VAR_11;
    FUNC_5(VAR_10, 1, VAR_5->iPrevLangid);
    FUNC_5(VAR_10, 2, VAR_5->nIndex);
    while( VAR_7==VAR_2 && FUNC_15(VAR_10)==VAR_3 ){
      int VAR_12 = FUNC_7(VAR_10, 0);
      int VAR_13;
      for(VAR_13=0; VAR_13<VAR_5->nIndex; VAR_13++){
        VAR_8 = VAR_8 ^ FUNC_1(VAR_5, VAR_12, VAR_13, &VAR_7);
      }
    }
    VAR_11 = FUNC_14(VAR_10);
    if( VAR_7==VAR_2 ) VAR_7 = VAR_11;
  }


  if( VAR_7==VAR_2 ){
    sqlite3_tokenizer_module const *VAR_14 = VAR_5->pTokenizer->pModule;
    sqlite3_stmt *VAR_15 = 0;
    char *VAR_16;

    VAR_16 = FUNC_12("SELECT %s" , VAR_5->zReadExprlist);
    if( !VAR_16 ){
      VAR_7 = VAR_1;
    }else{
      VAR_7 = FUNC_13(VAR_5->db, VAR_16, -1, &VAR_15, 0);
      FUNC_11(VAR_16);
    }

    while( VAR_7==VAR_2 && VAR_3==FUNC_15(VAR_15) ){
      i64 VAR_17 = FUNC_8(VAR_15, 0);
      int VAR_18 = FUNC_3(VAR_5, VAR_15);
      int VAR_19;

      for(VAR_19=0; VAR_7==VAR_2 && VAR_19<VAR_5->nColumn; VAR_19++){
        if( VAR_5->abNotindexed[VAR_19]==0 ){
          const char *VAR_20 = (const char *)FUNC_9(VAR_15, VAR_19+1);
          int VAR_21 = FUNC_6(VAR_15, VAR_19+1);
          sqlite3_tokenizer_cursor *VAR_22 = 0;

          VAR_7 = FUNC_4(VAR_5->pTokenizer, VAR_18, VAR_20, VAR_21,&VAR_22);
          while( VAR_7==VAR_2 ){
            char const *VAR_23;
            int VAR_24 = 0;
            int VAR_25 = 0, VAR_26 = 0;
            int VAR_27 = 0;

            VAR_7 = VAR_14->xNext(VAR_22, &VAR_23, &VAR_24, &VAR_25, &VAR_26, &VAR_27);
            if( VAR_7==VAR_2 ){
              int VAR_28;
              VAR_9 = VAR_9 ^ FUNC_0(
                  VAR_23, VAR_24, VAR_18, 0, VAR_17, VAR_19, VAR_27
              );
              for(VAR_28=1; VAR_28<VAR_5->nIndex; VAR_28++){
                if( VAR_5->aIndex[VAR_28].nPrefix<=VAR_24 ){
                  VAR_9 = VAR_9 ^ FUNC_0(
                      VAR_23, VAR_5->aIndex[VAR_28].nPrefix, VAR_18, VAR_28, VAR_17, VAR_19, VAR_27
                  );
                }
              }
            }
          }
          if( VAR_22 ) VAR_14->xClose(VAR_22);
          if( VAR_7==VAR_0 ) VAR_7 = VAR_2;
        }
      }
    }

    FUNC_10(VAR_15);
  }

  *VAR_6 = (VAR_8==VAR_9);
  return VAR_7;
}
