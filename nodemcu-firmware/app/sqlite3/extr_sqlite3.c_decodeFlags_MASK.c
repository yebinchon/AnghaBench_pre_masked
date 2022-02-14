
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int max1bytePayload; int minLocal; int maxLocal; int minLeaf; int maxLeaf; int mutex; } ;
struct TYPE_4__ {int hdrOffset; int pgno; int leaf; int childPtrSize; int intKey; int intKeyLeaf; int max1bytePayload; int minLocal; int maxLocal; int xParseCell; int xCellSize; TYPE_2__* pBt; } ;
typedef TYPE_1__ MemPage ;
typedef TYPE_2__ BtShared ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(MemPage *VAR_11, int VAR_12){
  BtShared *VAR_13;

  FUNC_0( VAR_11->hdrOffset==(VAR_11->pgno==1 ? 100 : 0) );
  FUNC_0( FUNC_1(VAR_11->pBt->mutex) );
  VAR_11->leaf = (u8)(VAR_12>>3); FUNC_0( VAR_1 == 1<<3 );
  VAR_12 &= ~VAR_1;
  VAR_11->childPtrSize = 4-4*VAR_11->leaf;
  VAR_11->xCellSize = VAR_9;
  VAR_13 = VAR_11->pBt;
  if( VAR_12==(VAR_2 | VAR_0) ){


    FUNC_0( (VAR_2|VAR_0)==5 );


    FUNC_0( (VAR_2|VAR_0|VAR_1)==13 );
    VAR_11->intKey = 1;
    if( VAR_11->leaf ){
      VAR_11->intKeyLeaf = 1;
      VAR_11->xParseCell = VAR_6;
    }else{
      VAR_11->intKeyLeaf = 0;
      VAR_11->xCellSize = VAR_10;
      VAR_11->xParseCell = VAR_8;
    }
    VAR_11->maxLocal = VAR_13->maxLeaf;
    VAR_11->minLocal = VAR_13->minLeaf;
  }else if( VAR_12==VAR_3 ){


    FUNC_0( (VAR_3)==2 );


    FUNC_0( (VAR_3|VAR_1)==10 );
    VAR_11->intKey = 0;
    VAR_11->intKeyLeaf = 0;
    VAR_11->xParseCell = VAR_7;
    VAR_11->maxLocal = VAR_13->maxLocal;
    VAR_11->minLocal = VAR_13->minLocal;
  }else{


    return VAR_4;
  }
  VAR_11->max1bytePayload = VAR_13->max1bytePayload;
  return VAR_5;
}
