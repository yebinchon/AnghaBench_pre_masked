
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
struct TYPE_27__ {scalar_t__ pVtab; } ;
typedef TYPE_4__ sqlite3_vtab_cursor ;
typedef int sqlite3_vtab ;
typedef int sqlite3_value ;
typedef int sqlite3_stmt ;
typedef int i64 ;
struct TYPE_30__ {int iDepth; int nDim2; } ;
struct TYPE_26__ {void* rValue; } ;
struct TYPE_24__ {int * pVtab; } ;
struct TYPE_29__ {int iStrategy; int atEOF; int nConstraint; char op; char iCoord; int bPoint; int ** aNode; TYPE_3__ u; TYPE_2__* pInfo; struct TYPE_29__* anQueue; struct TYPE_29__* aConstraint; int * pReadAux; TYPE_1__ base; int aPoint; } ;
struct TYPE_28__ {int id; void* eWithin; scalar_t__ iCell; } ;
struct TYPE_25__ {int mxLevel; TYPE_6__* anQueue; int nCoord; } ;
typedef TYPE_5__ RtreeSearchPoint ;
typedef int RtreeNode ;
typedef TYPE_6__ RtreeCursor ;
typedef TYPE_6__ RtreeConstraint ;
typedef TYPE_8__ Rtree ;


 void* VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (TYPE_6__*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_6__*) ;
 int FUNC_3 (TYPE_8__*,int,int **,int*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*,int ,int) ;
 int FUNC_6 (TYPE_8__*,int,int ,int **) ;
 int FUNC_7 (TYPE_8__*,int *) ;
 int FUNC_8 (TYPE_8__*,int *,int,int*) ;
 int FUNC_9 (TYPE_8__*) ;
 int FUNC_10 (TYPE_8__*) ;
 TYPE_5__* FUNC_11 (TYPE_6__*,int ,scalar_t__) ;
 int FUNC_12 (TYPE_6__*) ;
 int FUNC_13 (int ) ;
 TYPE_6__* FUNC_14 (int) ;
 void* FUNC_15 (int *) ;
 void* FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (char const*) ;

__attribute__((used)) static int FUNC_18(
  sqlite3_vtab_cursor *VAR_5,
  int VAR_6, const char *VAR_7,
  int VAR_8, sqlite3_value **VAR_9
){
  Rtree *VAR_10 = (Rtree *)VAR_5->pVtab;
  RtreeCursor *VAR_11 = (RtreeCursor *)VAR_5;
  RtreeNode *VAR_12 = 0;
  int VAR_13;
  int VAR_14 = VAR_4;
  int VAR_15 = 0;
  sqlite3_stmt *VAR_16;

  FUNC_9(VAR_10);


  FUNC_4(VAR_11);
  FUNC_13(VAR_11->aPoint);
  VAR_16 = VAR_11->pReadAux;
  FUNC_5(VAR_11, 0, sizeof(RtreeCursor));
  VAR_11->base.pVtab = (sqlite3_vtab*)VAR_10;
  VAR_11->pReadAux = VAR_16;

  VAR_11->iStrategy = VAR_6;
  if( VAR_6==1 ){

    RtreeNode *VAR_17;
    RtreeSearchPoint *VAR_18;
    i64 VAR_19 = FUNC_16(VAR_9[0]);
    i64 VAR_20 = 0;
    VAR_14 = FUNC_3(VAR_10, VAR_19, &VAR_17, &VAR_20);
    if( VAR_14==VAR_4 && VAR_17!=0 ){
      VAR_18 = FUNC_11(VAR_11, VAR_2, 0);
      FUNC_1( VAR_18!=0 );
      VAR_11->aNode[0] = VAR_17;
      VAR_18->id = VAR_20;
      VAR_18->eWithin = VAR_0;
      VAR_14 = FUNC_8(VAR_10, VAR_17, VAR_19, &VAR_15);
      VAR_18->iCell = (u8)VAR_15;
      FUNC_0(VAR_11, "PUSH-F1:");
    }else{
      VAR_11->atEOF = 1;
    }
  }else{



    VAR_14 = FUNC_6(VAR_10, 1, 0, &VAR_12);
    if( VAR_14==VAR_4 && VAR_8>0 ){
      VAR_11->aConstraint = FUNC_14(sizeof(RtreeConstraint)*VAR_8);
      VAR_11->nConstraint = VAR_8;
      if( !VAR_11->aConstraint ){
        VAR_14 = VAR_3;
      }else{
        FUNC_5(VAR_11->aConstraint, 0, sizeof(RtreeConstraint)*VAR_8);
        FUNC_5(VAR_11->anQueue, 0, sizeof(u32)*(VAR_10->iDepth + 1));
        FUNC_1( (VAR_7==0 && VAR_8==0)
                || (VAR_7 && (int)FUNC_17(VAR_7)==VAR_8*2) );
        for(VAR_13=0; VAR_13<VAR_8; VAR_13++){
          RtreeConstraint *VAR_21 = &VAR_11->aConstraint[VAR_13];
          VAR_21->op = VAR_7[VAR_13*2];
          VAR_21->iCoord = VAR_7[VAR_13*2+1]-'0';
          if( VAR_21->op>=VAR_1 ){




            VAR_14 = FUNC_2(VAR_9[VAR_13], VAR_21);
            if( VAR_14!=VAR_4 ){
              break;
            }
            VAR_21->pInfo->nCoord = VAR_10->nDim2;
            VAR_21->pInfo->anQueue = VAR_11->anQueue;
            VAR_21->pInfo->mxLevel = VAR_10->iDepth + 1;
          }else{



            VAR_21->u.rValue = FUNC_15(VAR_9[VAR_13]);

          }
        }
      }
    }
    if( VAR_14==VAR_4 ){
      RtreeSearchPoint *VAR_22;
      VAR_22 = FUNC_11(VAR_11, VAR_2, (u8)(VAR_10->iDepth+1));
      if( VAR_22==0 ) return VAR_3;
      VAR_22->id = 1;
      VAR_22->iCell = 0;
      VAR_22->eWithin = VAR_0;
      FUNC_1( VAR_11->bPoint==1 );
      VAR_11->aNode[0] = VAR_12;
      VAR_12 = 0;
      FUNC_0(VAR_11, "PUSH-Fm:");
      VAR_14 = FUNC_12(VAR_11);
    }
  }

  FUNC_7(VAR_10, VAR_12);
  FUNC_10(VAR_10);
  return VAR_14;
}
