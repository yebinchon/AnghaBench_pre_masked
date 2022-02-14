
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ pVtab; } ;
typedef TYPE_1__ sqlite3_vtab_cursor ;
typedef int sqlite3_context ;
struct TYPE_17__ {int nDim2; scalar_t__ eCoordType; int zReadAuxSql; int db; } ;
struct TYPE_16__ {int i; int f; } ;
struct TYPE_15__ {int bAuxValid; scalar_t__ pReadAux; } ;
struct TYPE_14__ {int iCell; } ;
typedef TYPE_2__ RtreeSearchPoint ;
typedef int RtreeNode ;
typedef TYPE_3__ RtreeCursor ;
typedef TYPE_4__ RtreeCoord ;
typedef TYPE_5__ Rtree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,int *,int ,int,TYPE_4__*) ;
 int FUNC_2 (TYPE_5__*,int *,int ) ;
 int * FUNC_3 (TYPE_3__*,int*) ;
 TYPE_2__* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (scalar_t__,int,int ) ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (int ,int ,int,int ,scalar_t__*,int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (scalar_t__) ;

__attribute__((used)) static int FUNC_14(sqlite3_vtab_cursor *VAR_5, sqlite3_context *VAR_6, int VAR_7){
  Rtree *VAR_8 = (Rtree *)VAR_5->pVtab;
  RtreeCursor *VAR_9 = (RtreeCursor *)VAR_5;
  RtreeSearchPoint *VAR_10 = FUNC_4(VAR_9);
  RtreeCoord VAR_11;
  int VAR_12 = VAR_3;
  RtreeNode *VAR_13 = FUNC_3(VAR_9, &VAR_12);

  if( VAR_12 ) return VAR_12;
  if( VAR_10==0 ) return VAR_3;
  if( VAR_7==0 ){
    FUNC_11(VAR_6, FUNC_2(VAR_8, VAR_13, VAR_10->iCell));
  }else if( VAR_7<=VAR_8->nDim2 ){
    FUNC_1(VAR_8, VAR_13, VAR_10->iCell, VAR_7-1, &VAR_11);

    if( VAR_8->eCoordType==VAR_1 ){
      FUNC_9(VAR_6, VAR_11.f);
    }else

    {
      FUNC_0( VAR_8->eCoordType==VAR_0 );
      FUNC_10(VAR_6, VAR_11.i);
    }
  }else{
    if( !VAR_9->bAuxValid ){
      if( VAR_9->pReadAux==0 ){
        VAR_12 = FUNC_7(VAR_8->db, VAR_8->zReadAuxSql, -1, 0,
                                &VAR_9->pReadAux, 0);
        if( VAR_12 ) return VAR_12;
      }
      FUNC_5(VAR_9->pReadAux, 1,
          FUNC_2(VAR_8, VAR_13, VAR_10->iCell));
      VAR_12 = FUNC_13(VAR_9->pReadAux);
      if( VAR_12==VAR_4 ){
        VAR_9->bAuxValid = 1;
      }else{
        FUNC_8(VAR_9->pReadAux);
        if( VAR_12==VAR_2 ) VAR_12 = VAR_3;
        return VAR_12;
      }
    }
    FUNC_12(VAR_6,
         FUNC_6(VAR_9->pReadAux, VAR_7 - VAR_8->nDim2 + 1));
  }
  return VAR_3;
}
