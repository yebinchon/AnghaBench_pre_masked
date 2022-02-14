
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_11__ {scalar_t__ iTable; scalar_t__ eLock; struct TYPE_11__* pNext; TYPE_2__* pBtree; } ;
struct TYPE_10__ {TYPE_4__* pLock; } ;
struct TYPE_9__ {int sharable; TYPE_1__* db; TYPE_3__* pBt; } ;
struct TYPE_8__ {int flags; } ;
typedef scalar_t__ Pgno ;
typedef TYPE_2__ Btree ;
typedef TYPE_3__ BtShared ;
typedef TYPE_4__ BtLock ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(Btree *VAR_5, Pgno VAR_6, u8 VAR_7){
  BtShared *VAR_8 = VAR_5->pBt;
  BtLock *VAR_9 = 0;
  BtLock *VAR_10;

  FUNC_0( FUNC_2(VAR_5) );
  FUNC_0( VAR_7==VAR_0 || VAR_7==VAR_4 );
  FUNC_0( VAR_5->db!=0 );





  FUNC_0( 0==(VAR_5->db->flags&VAR_3) || VAR_7==VAR_4 );



  FUNC_0( VAR_5->sharable );
  FUNC_0( VAR_2==FUNC_1(VAR_5, VAR_6, VAR_7) );


  for(VAR_10=VAR_8->pLock; VAR_10; VAR_10=VAR_10->pNext){
    if( VAR_10->iTable==VAR_6 && VAR_10->pBtree==VAR_5 ){
      VAR_9 = VAR_10;
      break;
    }
  }




  if( !VAR_9 ){
    VAR_9 = (BtLock *)FUNC_3(sizeof(BtLock));
    if( !VAR_9 ){
      return VAR_1;
    }
    VAR_9->iTable = VAR_6;
    VAR_9->pBtree = VAR_5;
    VAR_9->pNext = VAR_8->pLock;
    VAR_8->pLock = VAR_9;
  }





  FUNC_0( VAR_4>VAR_0 );
  if( VAR_7>VAR_9->eLock ){
    VAR_9->eLock = VAR_7;
  }

  return VAR_2;
}
