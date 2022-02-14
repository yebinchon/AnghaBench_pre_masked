
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int sqlite_int64 ;
struct TYPE_18__ {int zErrMsg; } ;
typedef TYPE_1__ sqlite3_vtab ;
typedef int sqlite3_value ;
typedef int sqlite3_stmt ;
typedef int i64 ;
struct TYPE_21__ {int nVertex; int hdr; } ;
struct TYPE_20__ {int iReinsertHeight; int nAux; int * pWriteAux; int db; int * pReadRowid; scalar_t__ nNodeRef; } ;
struct TYPE_19__ {int iRowid; int aCoord; } ;
typedef int RtreeNode ;
typedef TYPE_2__ RtreeCell ;
typedef TYPE_3__ Rtree ;
typedef TYPE_4__ GeoPoly ;


 int FUNC_0 (TYPE_3__*,TYPE_2__*,int ,int **) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int ,int*) ;
 TYPE_4__* FUNC_3 (int ,int *,int*) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*,int *,TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_3__*,int *) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int *,int,int ,int,int ) ;
 int FUNC_12 (int *,int,int ) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int,int *) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (int ) ;

__attribute__((used)) static int FUNC_23(
  sqlite3_vtab *VAR_8,
  int VAR_9,
  sqlite3_value **VAR_10,
  sqlite_int64 *VAR_11
){
  Rtree *VAR_12 = (Rtree *)VAR_8;
  int VAR_13 = VAR_3;
  RtreeCell VAR_14;
  i64 VAR_15;
  int VAR_16;
  i64 VAR_17;
  int VAR_18;
  int VAR_19 = 0;

  if( VAR_12->nNodeRef ){



    return VAR_1;
  }
  FUNC_9(VAR_12);
  FUNC_1(VAR_9>=1);

  VAR_16 = FUNC_21(VAR_10[0])!=VAR_2;;
  VAR_15 = VAR_16 ? FUNC_19(VAR_10[0]) : 0;
  VAR_18 = VAR_9>1 && FUNC_21(VAR_10[1])!=VAR_2;
  VAR_17 = VAR_18 ? FUNC_19(VAR_10[1]) : 0;
  VAR_14.iRowid = VAR_17;

  if( VAR_9>1
   && (!VAR_16
        || !FUNC_20(VAR_10[2])
        || VAR_15!=VAR_17)
  ){
    FUNC_2(0, VAR_10[2], VAR_14.aCoord, &VAR_13);
    if( VAR_13 ){
      if( VAR_13==VAR_0 ){
        VAR_8->zErrMsg =
          FUNC_16("_shape does not contain a valid polygon");
      }
      goto geopoly_update_end;
    }
    VAR_19 = 1;



    if( VAR_18 && (!VAR_16 || VAR_15!=VAR_17) ){
      int VAR_20;
      FUNC_12(VAR_12->pReadRowid, 1, VAR_14.iRowid);
      VAR_20 = FUNC_18(VAR_12->pReadRowid);
      VAR_13 = FUNC_17(VAR_12->pReadRowid);
      if( VAR_5==VAR_20 ){
        if( FUNC_22(VAR_12->db)==VAR_4 ){
          VAR_13 = FUNC_6(VAR_12, VAR_14.iRowid);
        }else{
          VAR_13 = FUNC_5(VAR_12, 0);
        }
      }
    }
  }





  if( VAR_13==VAR_3 && (VAR_9==1 || (VAR_19 && VAR_16)) ){
    VAR_13 = FUNC_6(VAR_12, VAR_15);
  }





  if( VAR_13==VAR_3 && VAR_9>1 && VAR_19 ){

    RtreeNode *VAR_21 = 0;
    if( !VAR_18 ){
      VAR_13 = FUNC_8(VAR_12, &VAR_14.iRowid);
    }
    *VAR_11 = VAR_14.iRowid;
    if( VAR_13==VAR_3 ){
      VAR_13 = FUNC_0(VAR_12, &VAR_14, 0, &VAR_21);
    }
    if( VAR_13==VAR_3 ){
      int VAR_22;
      VAR_12->iReinsertHeight = -1;
      VAR_13 = FUNC_7(VAR_12, VAR_21, &VAR_14, 0);
      VAR_22 = FUNC_4(VAR_12, VAR_21);
      if( VAR_13==VAR_3 ){
        VAR_13 = VAR_22;
      }
    }
  }


  if( VAR_13==VAR_3 && VAR_9>1 ){
    sqlite3_stmt *VAR_23 = VAR_12->pWriteAux;
    int VAR_24;
    int VAR_25 = 0;
    FUNC_12(VAR_23, 1, VAR_14.iRowid);
    FUNC_1( VAR_12->nAux>=1 );
    if( FUNC_20(VAR_10[2]) ){
      FUNC_13(VAR_23, 2);
    }else{
      GeoPoly *VAR_26 = 0;
      if( FUNC_21(VAR_10[2])==VAR_6
       && (VAR_26 = FUNC_3(0, VAR_10[2], &VAR_13))!=0
       && VAR_13==VAR_3
      ){
        FUNC_11(VAR_23, 2, VAR_26->hdr, 4+8*VAR_26->nVertex, VAR_7);
      }else{
        FUNC_14(VAR_23, 2, VAR_10[2]);
      }
      FUNC_15(VAR_26);
      VAR_25 = 1;
    }
    for(VAR_24=1; VAR_24<VAR_12->nAux; VAR_24++){
      VAR_25++;
      FUNC_14(VAR_23, VAR_24+2, VAR_10[VAR_24+2]);
    }
    if( VAR_25 ){
      FUNC_18(VAR_23);
      VAR_13 = FUNC_17(VAR_23);
    }
  }

geopoly_update_end:
  FUNC_10(VAR_12);
  return VAR_13;
}
