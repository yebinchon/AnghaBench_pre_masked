
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int sqlite_int64 ;
struct TYPE_16__ {scalar_t__ zErrMsg; } ;
typedef TYPE_4__ sqlite3_vtab ;
typedef int sqlite3_value ;
typedef scalar_t__ i64 ;
struct TYPE_18__ {int nCol; scalar_t__ eContent; int * pzErrmsg; int zName; int db; } ;
struct TYPE_14__ {int zErrMsg; } ;
struct TYPE_15__ {TYPE_6__* pConfig; TYPE_2__ base; } ;
struct TYPE_13__ {int eState; } ;
struct TYPE_17__ {TYPE_3__ p; int pStorage; TYPE_1__ ts; } ;
typedef TYPE_5__ Fts5FullTable ;
typedef TYPE_6__ Fts5Config ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,int **) ;
 int FUNC_3 (TYPE_5__*,char const*,int *) ;
 int FUNC_4 (int*,TYPE_5__*,int **,int *) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int ,int **,int *) ;
 int FUNC_7 (int ,scalar_t__,int ) ;
 int FUNC_8 (int ,int **,int ) ;
 int FUNC_9 (char*,char*,int ) ;
 scalar_t__ FUNC_10 (char*,char const*) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(
  sqlite3_vtab *VAR_8,
  int VAR_9,
  sqlite3_value **VAR_10,
  sqlite_int64 *VAR_11
){
  Fts5FullTable *VAR_12 = (Fts5FullTable*)VAR_8;
  Fts5Config *VAR_13 = VAR_12->p.pConfig;
  int VAR_14;
  int VAR_15 = VAR_6;


  FUNC_0( VAR_12->ts.eState==1 );

  FUNC_0( VAR_8->zErrMsg==0 );
  FUNC_0( VAR_9==1 || VAR_9==(2+VAR_13->nCol+2) );
  FUNC_0( FUNC_14(VAR_10[0])==VAR_3
       || FUNC_14(VAR_10[0])==VAR_5
  );
  FUNC_0( VAR_12->p.pConfig->pzErrmsg==0 );
  VAR_12->p.pConfig->pzErrmsg = &VAR_12->p.base.zErrMsg;


  FUNC_5(VAR_12);

  VAR_14 = FUNC_14(VAR_10[0]);
  if( VAR_14==VAR_5
   && FUNC_14(VAR_10[2+VAR_13->nCol])!=VAR_5
  ){

    const char *VAR_16 = (const char*)FUNC_13(VAR_10[2+VAR_13->nCol]);
    if( VAR_13->eContent!=VAR_0
      && 0==FUNC_10("delete", VAR_16)
    ){
      VAR_15 = FUNC_2(VAR_12, VAR_10);
    }else{
      VAR_15 = FUNC_3(VAR_12, VAR_16, VAR_10[2 + VAR_13->nCol + 1]);
    }
  }else{
    int VAR_17 = VAR_1;
    if( VAR_13->eContent==VAR_0 ){
      VAR_17 = FUNC_15(VAR_13->db);
    }

    FUNC_0( VAR_14==VAR_3 || VAR_14==VAR_5 );
    FUNC_0( VAR_9!=1 || VAR_14==VAR_3 );



    if( VAR_14==VAR_3 && FUNC_1(VAR_12) ){
      VAR_12->p.base.zErrMsg = FUNC_9(
          "cannot %s contentless fts5 table: %s",
          (VAR_9>1 ? "UPDATE" : "DELETE from"), VAR_13->zName
      );
      VAR_15 = VAR_2;
    }


    else if( VAR_9==1 ){
      i64 VAR_18 = FUNC_11(VAR_10[0]);
      VAR_15 = FUNC_7(VAR_12->pStorage, VAR_18, 0);
    }


    else{
      int VAR_19 = FUNC_12(VAR_10[1]);

      if( VAR_19!=VAR_3 && VAR_19!=VAR_5 ){
        VAR_15 = VAR_4;
      }

      else if( VAR_14!=VAR_3 ){

        if( VAR_17==VAR_7 && VAR_19==VAR_3 ){
          i64 VAR_20 = FUNC_11(VAR_10[1]);
          VAR_15 = FUNC_7(VAR_12->pStorage, VAR_20, 0);
        }
        FUNC_4(&VAR_15, VAR_12, VAR_10, VAR_11);
      }


      else{
        i64 VAR_21 = FUNC_11(VAR_10[0]);
        i64 VAR_22 = FUNC_11(VAR_10[1]);
        if( VAR_19==VAR_3 && VAR_21!=VAR_22 ){
          if( VAR_17==VAR_7 ){
            VAR_15 = FUNC_7(VAR_12->pStorage, VAR_21, 0);
            if( VAR_15==VAR_6 ){
              VAR_15 = FUNC_7(VAR_12->pStorage, VAR_22, 0);
            }
            FUNC_4(&VAR_15, VAR_12, VAR_10, VAR_11);
          }else{
            VAR_15 = FUNC_6(VAR_12->pStorage, VAR_10, VAR_11);
            if( VAR_15==VAR_6 ){
              VAR_15 = FUNC_7(VAR_12->pStorage, VAR_21, 0);
            }
            if( VAR_15==VAR_6 ){
              VAR_15 = FUNC_8(VAR_12->pStorage, VAR_10,*VAR_11);
            }
          }
        }else{
          VAR_15 = FUNC_7(VAR_12->pStorage, VAR_21, 0);
          FUNC_4(&VAR_15, VAR_12, VAR_10, VAR_11);
        }
      }
    }
  }

  VAR_12->p.pConfig->pzErrmsg = 0;
  return VAR_15;
}
