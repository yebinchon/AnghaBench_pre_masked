
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ sqlite3_rtree_dbl ;
struct TYPE_26__ {scalar_t__ eCoordType; int nBytesPerCell; } ;
struct TYPE_25__ {scalar_t__ op; } ;
struct TYPE_24__ {int nConstraint; int atEOF; TYPE_4__* aConstraint; } ;
struct TYPE_23__ {scalar_t__* zData; } ;
struct TYPE_22__ {int iLevel; int iCell; int id; scalar_t__ eWithin; } ;
typedef TYPE_1__ RtreeSearchPoint ;
typedef TYPE_2__ RtreeNode ;
typedef TYPE_3__ RtreeCursor ;
typedef TYPE_4__ RtreeConstraint ;
typedef TYPE_5__ Rtree ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_5__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (TYPE_4__*,int,scalar_t__*,TYPE_1__*,scalar_t__*,int*) ;
 int FUNC_6 (TYPE_4__*,int,scalar_t__*,int*) ;
 TYPE_2__* FUNC_7 (TYPE_3__*,int*) ;
 int FUNC_8 (TYPE_4__*,int,scalar_t__*,int*) ;
 TYPE_1__* FUNC_9 (TYPE_3__*) ;
 TYPE_1__* FUNC_10 (TYPE_3__*,scalar_t__,int) ;
 int FUNC_11 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_12(RtreeCursor *VAR_7){
  RtreeSearchPoint *VAR_8;
  Rtree *VAR_9 = FUNC_1(VAR_7);
  RtreeNode *VAR_10;
  int VAR_11;
  int VAR_12 = VAR_6;
  int VAR_13;
  int VAR_14 = VAR_7->nConstraint;
  int VAR_15;
  int VAR_16;
  RtreeSearchPoint VAR_17;

  VAR_16 = VAR_9->eCoordType==VAR_2;
  while( (VAR_8 = FUNC_9(VAR_7))!=0 && VAR_8->iLevel>0 ){
    VAR_10 = FUNC_7(VAR_7, &VAR_12);
    if( VAR_12 ) return VAR_12;
    VAR_13 = FUNC_0(VAR_10);
    FUNC_3( VAR_13<200 );
    while( VAR_8->iCell<VAR_13 ){
      sqlite3_rtree_dbl VAR_18 = (sqlite3_rtree_dbl)-1;
      u8 *VAR_19 = VAR_10->zData + (4+VAR_9->nBytesPerCell*VAR_8->iCell);
      VAR_11 = VAR_0;
      for(VAR_15=0; VAR_15<VAR_14; VAR_15++){
        RtreeConstraint *VAR_20 = VAR_7->aConstraint + VAR_15;
        if( VAR_20->op>=VAR_3 ){
          VAR_12 = FUNC_5(VAR_20, VAR_16, VAR_19, VAR_8,
                                       &VAR_18, &VAR_11);
          if( VAR_12 ) return VAR_12;
        }else if( VAR_8->iLevel==1 ){
          FUNC_6(VAR_20, VAR_16, VAR_19, &VAR_11);
        }else{
          FUNC_8(VAR_20, VAR_16, VAR_19, &VAR_11);
        }
        if( VAR_11==VAR_1 ) break;
      }
      VAR_8->iCell++;
      if( VAR_11==VAR_1 ) continue;
      VAR_17.iLevel = VAR_8->iLevel - 1;
      if( VAR_17.iLevel ){
        VAR_17.id = FUNC_4(VAR_19);
        VAR_17.iCell = 0;
      }else{
        VAR_17.id = VAR_8->id;
        VAR_17.iCell = VAR_8->iCell - 1;
      }
      if( VAR_8->iCell>=VAR_13 ){
        FUNC_2(VAR_7, "POP-S:");
        FUNC_11(VAR_7);
      }
      if( VAR_18<VAR_4 ) VAR_18 = VAR_4;
      VAR_8 = FUNC_10(VAR_7, VAR_18, VAR_17.iLevel);
      if( VAR_8==0 ) return VAR_5;
      VAR_8->eWithin = (u8)VAR_11;
      VAR_8->id = VAR_17.id;
      VAR_8->iCell = VAR_17.iCell;
      FUNC_2(VAR_7, "PUSH-S:");
      break;
    }
    if( VAR_8->iCell>=VAR_13 ){
      FUNC_2(VAR_7, "POP-Se:");
      FUNC_11(VAR_7);
    }
  }
  VAR_7->atEOF = VAR_8==0;
  return VAR_6;
}
