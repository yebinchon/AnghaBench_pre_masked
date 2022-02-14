
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {int mutex; } ;
struct TYPE_8__ {int nCell; int hdrOffset; int * aData; int leaf; TYPE_2__* pBt; int pgno; } ;
typedef int Pgno ;
typedef TYPE_1__ MemPage ;
typedef TYPE_2__ BtShared ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int ,int*) ;
 int FUNC_5 (TYPE_1__*,int *,int*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(MemPage *VAR_2){
  int VAR_3;
  int VAR_4;
  int VAR_5;
  BtShared *VAR_6 = VAR_2->pBt;
  Pgno VAR_7 = VAR_2->pgno;

  FUNC_0( FUNC_6(VAR_2->pBt->mutex) );
  VAR_5 = FUNC_1(VAR_2);
  if( VAR_5!=VAR_1 ) return VAR_5;
  VAR_4 = VAR_2->nCell;

  for(VAR_3=0; VAR_3<VAR_4; VAR_3++){
    u8 *VAR_8 = FUNC_2(VAR_2, VAR_3);

    FUNC_5(VAR_2, VAR_8, &VAR_5);

    if( !VAR_2->leaf ){
      Pgno VAR_9 = FUNC_3(VAR_8);
      FUNC_4(VAR_6, VAR_9, VAR_0, VAR_7, &VAR_5);
    }
  }

  if( !VAR_2->leaf ){
    Pgno VAR_10 = FUNC_3(&VAR_2->aData[VAR_2->hdrOffset+8]);
    FUNC_4(VAR_6, VAR_10, VAR_0, VAR_7, &VAR_5);
  }

  return VAR_5;
}
