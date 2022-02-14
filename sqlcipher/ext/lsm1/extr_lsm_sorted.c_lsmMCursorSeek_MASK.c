
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__* apTreeCsr; int flags; int nPtr; int nTree; TYPE_2__* aPtr; } ;
struct TYPE_16__ {TYPE_1__* pLevel; int * pSeg; } ;
struct TYPE_15__ {scalar_t__ nRight; int lhs; } ;
typedef TYPE_2__ SegmentPtr ;
typedef TYPE_3__ MultiCursor ;
typedef int LsmPgno ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int*) ;
 int FUNC_7 (TYPE_3__*,int,int) ;
 int FUNC_8 (TYPE_3__*,TYPE_2__*,int,int,void*,int,int *,int*) ;
 int FUNC_9 (TYPE_3__*,scalar_t__,void*,int,int,int*) ;

int FUNC_10(
  MultiCursor *VAR_7,
  int VAR_8,
  void *VAR_9, int VAR_10,
  int VAR_11
){
  int VAR_12 = VAR_11;
  int VAR_13 = 0;
  int VAR_14 = VAR_4;
  int VAR_15 = 0;
  LsmPgno VAR_16 = 0;

  FUNC_0( VAR_7->apTreeCsr[0]==0 || VAR_8==0 );
  FUNC_0( VAR_7->apTreeCsr[1]==0 || VAR_8==0 );

  if( VAR_12==VAR_6 ) VAR_12 = VAR_5;

  FUNC_0( VAR_12==129 || VAR_12==VAR_5 || VAR_12==128 );
  FUNC_0( (VAR_7->flags & VAR_0)==0 );
  FUNC_0( VAR_7->nPtr==0 || VAR_7->aPtr[0].pLevel );

  VAR_7->flags &= ~(VAR_1 | VAR_2 | VAR_3);
  VAR_14 = FUNC_9(VAR_7, VAR_7->apTreeCsr[0], VAR_9, VAR_10, VAR_12, &VAR_13);
  if( VAR_14==VAR_4 && VAR_13==0 ){
    VAR_14 = FUNC_9(VAR_7, VAR_7->apTreeCsr[1], VAR_9, VAR_10, VAR_12, &VAR_13);
  }


  for(VAR_15=0; VAR_15<VAR_7->nPtr && VAR_14==VAR_4 && VAR_13==0; VAR_15++){
    SegmentPtr *VAR_17 = &VAR_7->aPtr[VAR_15];
    FUNC_0( VAR_17->pSeg==&VAR_17->pLevel->lhs );
    VAR_14 = FUNC_8(VAR_7, VAR_17, VAR_12, VAR_8, VAR_9, VAR_10, &VAR_16, &VAR_13);
    VAR_15 += VAR_17->pLevel->nRight;
  }

  if( VAR_11!=129 ){
    if( VAR_14==VAR_4 ){
      VAR_14 = FUNC_5(VAR_7);
    }
    if( VAR_14==VAR_4 ){
      int VAR_18;
      for(VAR_18=VAR_7->nTree-1; VAR_18>0; VAR_18--){
        FUNC_7(VAR_7, VAR_18, VAR_12==VAR_5);
      }
      if( VAR_11==128 ) VAR_7->flags |= VAR_1;
      if( VAR_11==VAR_5 ) VAR_7->flags |= VAR_2;
    }

    FUNC_6(VAR_7, &VAR_14);
    if( VAR_14==VAR_4 && VAR_11!=VAR_6 && 0==FUNC_4(VAR_7, 0) ){
      switch( VAR_12 ){
        case 129:
          FUNC_3(VAR_7);
          break;
        case 128:
          VAR_14 = FUNC_1(VAR_7);
          break;
        default:
          VAR_14 = FUNC_2(VAR_7);
          break;
      }
    }
  }

  return VAR_14;
}
