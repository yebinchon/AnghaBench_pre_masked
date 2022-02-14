
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * pBtree; int pKey; int aOverflow; struct TYPE_8__* pNext; TYPE_1__* pBt; } ;
struct TYPE_7__ {TYPE_2__* pCursor; } ;
typedef int Btree ;
typedef TYPE_1__ BtShared ;
typedef TYPE_2__ BtCursor ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;

int FUNC_7(BtCursor *VAR_1){
  Btree *VAR_2 = VAR_1->pBtree;
  if( VAR_2 ){
    BtShared *VAR_3 = VAR_1->pBt;
    FUNC_3(VAR_2);
    FUNC_1( VAR_3->pCursor!=0 );
    if( VAR_3->pCursor==VAR_1 ){
      VAR_3->pCursor = VAR_1->pNext;
    }else{
      BtCursor *VAR_4 = VAR_3->pCursor;
      do{
        if( VAR_4->pNext==VAR_1 ){
          VAR_4->pNext = VAR_1->pNext;
          break;
        }
        VAR_4 = VAR_4->pNext;
      }while( FUNC_0(VAR_4) );
    }
    FUNC_2(VAR_1);
    FUNC_6(VAR_3);
    FUNC_5(VAR_1->aOverflow);
    FUNC_5(VAR_1->pKey);
    FUNC_4(VAR_2);
    VAR_1->pBtree = 0;
  }
  return VAR_0;
}
