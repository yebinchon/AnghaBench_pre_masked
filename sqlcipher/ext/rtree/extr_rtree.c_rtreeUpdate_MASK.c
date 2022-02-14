
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ sqlite_int64 ;
typedef int sqlite3_vtab ;
typedef int sqlite3_value ;
typedef int sqlite3_stmt ;
struct TYPE_16__ {int nDim2; scalar_t__ eCoordType; int iReinsertHeight; int nAux; int * pWriteAux; int db; int * pReadRowid; scalar_t__ nNodeRef; } ;
struct TYPE_15__ {scalar_t__ iRowid; TYPE_1__* aCoord; } ;
struct TYPE_14__ {scalar_t__ f; scalar_t__ i; } ;
typedef int RtreeNode ;
typedef TYPE_2__ RtreeCell ;
typedef TYPE_3__ Rtree ;


 int FUNC_0 (TYPE_3__*,TYPE_2__*,int ,int **) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,scalar_t__) ;
 int FUNC_5 (TYPE_3__*,int *,TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_3__*,scalar_t__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,int,scalar_t__) ;
 int FUNC_12 (int *,int,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 void* FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int ) ;

__attribute__((used)) static int FUNC_19(
  sqlite3_vtab *VAR_6,
  int VAR_7,
  sqlite3_value **VAR_8,
  sqlite_int64 *VAR_9
){
  Rtree *VAR_10 = (Rtree *)VAR_6;
  int VAR_11 = VAR_3;
  RtreeCell VAR_12;
  int VAR_13 = 0;

  if( VAR_10->nNodeRef ){



    return VAR_1;
  }
  FUNC_7(VAR_10);
  FUNC_1(VAR_7>=1);

  VAR_12.iRowid = 0;
  if( VAR_7>1 ){
    int VAR_14;
    int VAR_15 = VAR_7 - 4;

    if( VAR_15 > VAR_10->nDim2 ) VAR_15 = VAR_10->nDim2;
    if( VAR_10->eCoordType==VAR_0 ){
      for(VAR_14=0; VAR_14<VAR_15; VAR_14+=2){
        VAR_12.aCoord[VAR_14].f = FUNC_9(VAR_8[VAR_14+3]);
        VAR_12.aCoord[VAR_14+1].f = FUNC_10(VAR_8[VAR_14+4]);
        if( VAR_12.aCoord[VAR_14].f>VAR_12.aCoord[VAR_14+1].f ){
          VAR_11 = FUNC_3(VAR_10, VAR_14+1);
          goto constraint;
        }
      }
    }else

    {
      for(VAR_14=0; VAR_14<VAR_15; VAR_14+=2){
        VAR_12.aCoord[VAR_14].i = FUNC_15(VAR_8[VAR_14+3]);
        VAR_12.aCoord[VAR_14+1].i = FUNC_15(VAR_8[VAR_14+4]);
        if( VAR_12.aCoord[VAR_14].i>VAR_12.aCoord[VAR_14+1].i ){
          VAR_11 = FUNC_3(VAR_10, VAR_14+1);
          goto constraint;
        }
      }
    }



    if( FUNC_17(VAR_8[2])!=VAR_2 ){
      VAR_12.iRowid = FUNC_16(VAR_8[2]);
      if( FUNC_17(VAR_8[0])==VAR_2
       || FUNC_16(VAR_8[0])!=VAR_12.iRowid
      ){
        int VAR_16;
        FUNC_11(VAR_10->pReadRowid, 1, VAR_12.iRowid);
        VAR_16 = FUNC_14(VAR_10->pReadRowid);
        VAR_11 = FUNC_13(VAR_10->pReadRowid);
        if( VAR_5==VAR_16 ){
          if( FUNC_18(VAR_10->db)==VAR_4 ){
            VAR_11 = FUNC_4(VAR_10, VAR_12.iRowid);
          }else{
            VAR_11 = FUNC_3(VAR_10, 0);
            goto constraint;
          }
        }
      }
      VAR_13 = 1;
    }
  }





  if( FUNC_17(VAR_8[0])!=VAR_2 ){
    VAR_11 = FUNC_4(VAR_10, FUNC_16(VAR_8[0]));
  }





  if( VAR_11==VAR_3 && VAR_7>1 ){

    RtreeNode *VAR_17 = 0;


    if( VAR_13==0 ){
      VAR_11 = FUNC_6(VAR_10, &VAR_12.iRowid);
    }
    *VAR_9 = VAR_12.iRowid;

    if( VAR_11==VAR_3 ){
      VAR_11 = FUNC_0(VAR_10, &VAR_12, 0, &VAR_17);
    }
    if( VAR_11==VAR_3 ){
      int VAR_18;
      VAR_10->iReinsertHeight = -1;
      VAR_11 = FUNC_5(VAR_10, VAR_17, &VAR_12, 0);
      VAR_18 = FUNC_2(VAR_10, VAR_17);
      if( VAR_11==VAR_3 ){
        VAR_11 = VAR_18;
      }
    }
    if( VAR_11==VAR_3 && VAR_10->nAux ){
      sqlite3_stmt *VAR_19 = VAR_10->pWriteAux;
      int VAR_20;
      FUNC_11(VAR_19, 1, *VAR_9);
      for(VAR_20=0; VAR_20<VAR_10->nAux; VAR_20++){
        FUNC_12(VAR_19, VAR_20+2, VAR_8[VAR_10->nDim2+3+VAR_20]);
      }
      FUNC_14(VAR_19);
      VAR_11 = FUNC_13(VAR_19);
    }
  }

constraint:
  FUNC_8(VAR_10);
  return VAR_11;
}
