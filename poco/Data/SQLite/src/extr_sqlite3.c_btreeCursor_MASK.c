
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct KeyInfo {int dummy; } ;
struct TYPE_15__ {scalar_t__ pgnoRoot; int iPage; int eState; struct TYPE_15__* pNext; int curFlags; int curPagerFlags; TYPE_3__* pBt; TYPE_2__* pBtree; struct KeyInfo* pKeyInfo; } ;
struct TYPE_14__ {int btsFlags; scalar_t__ pTmpSpace; TYPE_4__* pCursor; TYPE_1__* pPage1; } ;
struct TYPE_13__ {scalar_t__ inTrans; TYPE_3__* pBt; } ;
struct TYPE_12__ {scalar_t__ aData; } ;
typedef scalar_t__ Pgno ;
typedef TYPE_2__ Btree ;
typedef TYPE_3__ BtShared ;
typedef TYPE_4__ BtCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int,int,int) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(
  Btree *VAR_11,
  int VAR_12,
  int VAR_13,
  struct KeyInfo *VAR_14,
  BtCursor *VAR_15
){
  BtShared *VAR_16 = VAR_11->pBt;
  BtCursor *VAR_17;

  FUNC_1( FUNC_5(VAR_11) );
  FUNC_1( VAR_13==0
       || VAR_13==VAR_3
       || VAR_13==(VAR_3|VAR_2)
  );





  FUNC_1( FUNC_4(VAR_11, VAR_12, VAR_14!=0, (VAR_13?2:1)) );
  FUNC_1( VAR_13==0 || !FUNC_3(VAR_11, VAR_12) );


  FUNC_1( VAR_11->inTrans>VAR_9 );
  FUNC_1( VAR_13==0 || VAR_11->inTrans==VAR_10 );
  FUNC_1( VAR_16->pPage1 && VAR_16->pPage1->aData );
  FUNC_1( VAR_13==0 || (VAR_16->btsFlags & VAR_4)==0 );

  if( VAR_13 ){
    FUNC_0(VAR_16);
    if( VAR_16->pTmpSpace==0 ) return VAR_7;
  }
  if( VAR_12==1 && FUNC_2(VAR_16)==0 ){
    FUNC_1( VAR_13==0 );
    VAR_12 = 0;
  }



  VAR_15->pgnoRoot = (Pgno)VAR_12;
  VAR_15->iPage = -1;
  VAR_15->pKeyInfo = VAR_14;
  VAR_15->pBtree = VAR_11;
  VAR_15->pBt = VAR_16;
  VAR_15->curFlags = VAR_13 ? VAR_1 : 0;
  VAR_15->curPagerFlags = VAR_13 ? 0 : VAR_6;


  for(VAR_17=VAR_16->pCursor; VAR_17; VAR_17=VAR_17->pNext){
    if( VAR_17->pgnoRoot==(Pgno)VAR_12 ){
      VAR_17->curFlags |= VAR_0;
      VAR_15->curFlags |= VAR_0;
    }
  }
  VAR_15->pNext = VAR_16->pCursor;
  VAR_16->pCursor = VAR_15;
  VAR_15->eState = VAR_5;
  return VAR_8;
}
