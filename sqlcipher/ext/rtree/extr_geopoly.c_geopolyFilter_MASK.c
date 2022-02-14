
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_26__ {scalar_t__ pVtab; } ;
typedef TYPE_3__ sqlite3_vtab_cursor ;
typedef int sqlite3_vtab ;
typedef int sqlite3_value ;
typedef int sqlite3_stmt ;
typedef int i64 ;
struct TYPE_30__ {int iDepth; } ;
struct TYPE_29__ {int f; } ;
struct TYPE_25__ {int rValue; } ;
struct TYPE_24__ {int * pVtab; } ;
struct TYPE_28__ {int iStrategy; int atEOF; int nConstraint; char op; int iCoord; int bPoint; int ** aNode; TYPE_2__ u; struct TYPE_28__* anQueue; struct TYPE_28__* aConstraint; int * pReadAux; TYPE_1__ base; int aPoint; } ;
struct TYPE_27__ {int id; void* eWithin; scalar_t__ iCell; } ;
typedef TYPE_4__ RtreeSearchPoint ;
typedef int RtreeNode ;
typedef TYPE_5__ RtreeCursor ;
typedef TYPE_6__ RtreeCoord ;
typedef TYPE_5__ RtreeConstraint ;
typedef TYPE_8__ Rtree ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_5__*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_8__*,int,int **,int*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int ,int *,TYPE_6__*,int*) ;
 int FUNC_5 (TYPE_5__*,int ,int) ;
 int FUNC_6 (TYPE_8__*,int,int ,int **) ;
 int FUNC_7 (TYPE_8__*,int *) ;
 int FUNC_8 (TYPE_8__*,int *,int,int*) ;
 int FUNC_9 (TYPE_8__*) ;
 int FUNC_10 (TYPE_8__*) ;
 TYPE_4__* FUNC_11 (TYPE_5__*,int ,scalar_t__) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (int ) ;
 TYPE_5__* FUNC_14 (int) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(
  sqlite3_vtab_cursor *VAR_4,
  int VAR_5,
  const char *VAR_6,
  int VAR_7, sqlite3_value **VAR_8
){
  Rtree *VAR_9 = (Rtree *)VAR_4->pVtab;
  RtreeCursor *VAR_10 = (RtreeCursor *)VAR_4;
  RtreeNode *VAR_11 = 0;
  int VAR_12 = VAR_3;
  int VAR_13 = 0;
  sqlite3_stmt *VAR_14;

  FUNC_9(VAR_9);


  FUNC_3(VAR_10);
  FUNC_13(VAR_10->aPoint);
  VAR_14 = VAR_10->pReadAux;
  FUNC_5(VAR_10, 0, sizeof(RtreeCursor));
  VAR_10->base.pVtab = (sqlite3_vtab*)VAR_9;
  VAR_10->pReadAux = VAR_14;

  VAR_10->iStrategy = VAR_5;
  if( VAR_5==1 ){

    RtreeNode *VAR_15;
    RtreeSearchPoint *VAR_16;
    i64 VAR_17 = FUNC_15(VAR_8[0]);
    i64 VAR_18 = 0;
    VAR_12 = FUNC_2(VAR_9, VAR_17, &VAR_15, &VAR_18);
    if( VAR_12==VAR_3 && VAR_15!=0 ){
      VAR_16 = FUNC_11(VAR_10, VAR_1, 0);
      FUNC_1( VAR_16!=0 );
      VAR_10->aNode[0] = VAR_15;
      VAR_16->id = VAR_18;
      VAR_16->eWithin = VAR_0;
      VAR_12 = FUNC_8(VAR_9, VAR_15, VAR_17, &VAR_13);
      VAR_16->iCell = (u8)VAR_13;
      FUNC_0(VAR_10, "PUSH-F1:");
    }else{
      VAR_10->atEOF = 1;
    }
  }else{



    VAR_12 = FUNC_6(VAR_9, 1, 0, &VAR_11);
    if( VAR_12==VAR_3 && VAR_5<=3 ){
      RtreeCoord VAR_19[4];
      RtreeConstraint *VAR_20;
      FUNC_1( VAR_7==1 );
      FUNC_4(0, VAR_8[0], VAR_19, &VAR_12);
      if( VAR_12 ){
        goto geopoly_filter_end;
      }
      VAR_10->aConstraint = VAR_20 = FUNC_14(sizeof(RtreeConstraint)*4);
      VAR_10->nConstraint = 4;
      if( VAR_20==0 ){
        VAR_12 = VAR_2;
      }else{
        FUNC_5(VAR_10->aConstraint, 0, sizeof(RtreeConstraint)*4);
        FUNC_5(VAR_10->anQueue, 0, sizeof(u32)*(VAR_9->iDepth + 1));
        if( VAR_5==2 ){

          VAR_20->op = 'B';
          VAR_20->iCoord = 0;
          VAR_20->u.rValue = VAR_19[1].f;
          VAR_20++;
          VAR_20->op = 'D';
          VAR_20->iCoord = 1;
          VAR_20->u.rValue = VAR_19[0].f;
          VAR_20++;
          VAR_20->op = 'B';
          VAR_20->iCoord = 2;
          VAR_20->u.rValue = VAR_19[3].f;
          VAR_20++;
          VAR_20->op = 'D';
          VAR_20->iCoord = 3;
          VAR_20->u.rValue = VAR_19[2].f;
        }else{

          VAR_20->op = 'D';
          VAR_20->iCoord = 0;
          VAR_20->u.rValue = VAR_19[0].f;
          VAR_20++;
          VAR_20->op = 'B';
          VAR_20->iCoord = 1;
          VAR_20->u.rValue = VAR_19[1].f;
          VAR_20++;
          VAR_20->op = 'D';
          VAR_20->iCoord = 2;
          VAR_20->u.rValue = VAR_19[2].f;
          VAR_20++;
          VAR_20->op = 'B';
          VAR_20->iCoord = 3;
          VAR_20->u.rValue = VAR_19[3].f;
        }
      }
    }
    if( VAR_12==VAR_3 ){
      RtreeSearchPoint *VAR_21;
      VAR_21 = FUNC_11(VAR_10, VAR_1, (u8)(VAR_9->iDepth+1));
      if( VAR_21==0 ){
        VAR_12 = VAR_2;
        goto geopoly_filter_end;
      }
      VAR_21->id = 1;
      VAR_21->iCell = 0;
      VAR_21->eWithin = VAR_0;
      FUNC_1( VAR_10->bPoint==1 );
      VAR_10->aNode[0] = VAR_11;
      VAR_11 = 0;
      FUNC_0(VAR_10, "PUSH-Fm:");
      VAR_12 = FUNC_12(VAR_10);
    }
  }

geopoly_filter_end:
  FUNC_7(VAR_9, VAR_11);
  FUNC_10(VAR_9);
  return VAR_12;
}
