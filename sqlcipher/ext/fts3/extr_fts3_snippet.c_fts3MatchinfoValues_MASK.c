
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u32 ;
typedef int sqlite3_stmt ;
typedef int sqlite3_int64 ;
struct TYPE_12__ {scalar_t__ pVtab; } ;
struct TYPE_14__ {int pDeferred; int * pExpr; int iPrevId; TYPE_1__ base; } ;
struct TYPE_13__ {char flag; int* aMatchinfo; int nPhrase; int nCol; int nDoc; } ;
typedef TYPE_2__ MatchInfo ;
typedef int Fts3Table ;
typedef int Fts3Expr ;
typedef TYPE_3__ Fts3Cursor ;



 char const VAR_0 ;







 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,void*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_5 (int *,int **,int*,char const**) ;
 int FUNC_6 (TYPE_2__*,char const) ;
 int FUNC_7 (int*,int ,size_t) ;
 int FUNC_8 (TYPE_3__*,int*) ;
 int FUNC_9 (char const*,int*) ;
 int FUNC_10 (int *,int ,int **) ;
 char* FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(
  Fts3Cursor *VAR_4,
  int VAR_5,
  MatchInfo *VAR_6,
  const char *VAR_7
){
  int VAR_8 = VAR_1;
  int VAR_9;
  Fts3Table *VAR_10 = (Fts3Table *)VAR_4->base.pVtab;
  sqlite3_stmt *VAR_11 = 0;

  for(VAR_9=0; VAR_8==VAR_1 && VAR_7[VAR_9]; VAR_9++){
    VAR_6->flag = VAR_7[VAR_9];
    switch( VAR_7[VAR_9] ){
      case 128:
        if( VAR_5 ) VAR_6->aMatchinfo[0] = VAR_6->nPhrase;
        break;

      case 130:
        if( VAR_5 ) VAR_6->aMatchinfo[0] = VAR_6->nCol;
        break;

      case 129:
        if( VAR_5 ){
          sqlite3_int64 VAR_12 = 0;
          VAR_8 = FUNC_5(VAR_10, &VAR_11, &VAR_12, 0);
          VAR_6->aMatchinfo[0] = (u32)VAR_12;
        }
        break;

      case 135:
        if( VAR_5 ){
          sqlite3_int64 VAR_13;
          const char *VAR_14;

          VAR_8 = FUNC_5(VAR_10, &VAR_11, &VAR_13, &VAR_14);
          if( VAR_8==VAR_1 ){
            int VAR_15;
            for(VAR_15=0; VAR_15<VAR_6->nCol; VAR_15++){
              u32 VAR_16;
              sqlite3_int64 VAR_17;
              VAR_14 += FUNC_9(VAR_14, &VAR_17);
              VAR_16 = (u32)(((u32)(VAR_17&0xffffffff)+VAR_13/2)/VAR_13);
              VAR_6->aMatchinfo[VAR_15] = VAR_16;
            }
          }
        }
        break;

      case 133: {
        sqlite3_stmt *VAR_18 = 0;
        VAR_8 = FUNC_10(VAR_10, VAR_4->iPrevId, &VAR_18);
        if( VAR_8==VAR_1 ){
          int VAR_19;
          const char *VAR_20 = FUNC_11(VAR_18, 0);
          for(VAR_19=0; VAR_19<VAR_6->nCol; VAR_19++){
            sqlite3_int64 VAR_21;
            VAR_20 += FUNC_9(VAR_20, &VAR_21);
            VAR_6->aMatchinfo[VAR_19] = (u32)VAR_21;
          }
        }
        FUNC_12(VAR_18);
        break;
      }

      case 134:
        VAR_8 = FUNC_3(VAR_4, 0, 0);
        if( VAR_8==VAR_1 ){
          VAR_8 = FUNC_4(VAR_4, VAR_6);
        }
        break;

      case 131:
      case 132: {
        size_t VAR_22 = FUNC_6(VAR_6, VAR_7[VAR_9]) * sizeof(u32);
        FUNC_7(VAR_6->aMatchinfo, 0, VAR_22);
        VAR_8 = FUNC_2(VAR_4->pExpr, VAR_6);
        break;
      }

      default: {
        Fts3Expr *VAR_23;
        FUNC_0( VAR_7[VAR_9]==VAR_0 );
        VAR_23 = VAR_4->pExpr;
        VAR_8 = FUNC_3(VAR_4, 0, 0);
        if( VAR_8!=VAR_1 ) break;
        if( VAR_5 ){
          if( VAR_4->pDeferred ){
            VAR_8 = FUNC_5(VAR_10, &VAR_11, &VAR_6->nDoc, 0);
            if( VAR_8!=VAR_1 ) break;
          }
          VAR_8 = FUNC_1(VAR_23, VAR_2,(void*)VAR_6);
          FUNC_8(VAR_4, &VAR_8);
          if( VAR_8!=VAR_1 ) break;
        }
        (void)FUNC_1(VAR_23, VAR_3,(void*)VAR_6);
        break;
      }
    }

    VAR_6->aMatchinfo += FUNC_6(VAR_6, VAR_7[VAR_9]);
  }

  FUNC_12(VAR_11);
  return VAR_8;
}
