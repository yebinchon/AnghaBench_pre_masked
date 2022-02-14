
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_7__ {scalar_t__ pgno; int* aData; int isInit; int hdrOffset; int childPtrSize; int nCell; int nFree; TYPE_1__* pBt; int pDbPage; } ;
struct TYPE_6__ {scalar_t__ db; int usableSize; int mutex; } ;
typedef TYPE_2__ MemPage ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(MemPage *VAR_1){
  int VAR_2;
  u8 VAR_3;
  u8 *VAR_4;
  int VAR_5;
  int VAR_6;
  int VAR_7;
  int VAR_8;
  int VAR_9;

  FUNC_1( VAR_1->pBt!=0 );
  FUNC_1( VAR_1->pBt->db!=0 );
  FUNC_1( FUNC_7(VAR_1->pBt->mutex) );
  FUNC_1( VAR_1->pgno==FUNC_6(VAR_1->pDbPage) );
  FUNC_1( VAR_1 == FUNC_5(VAR_1->pDbPage) );
  FUNC_1( VAR_1->aData == FUNC_4(VAR_1->pDbPage) );
  FUNC_1( VAR_1->isInit==1 );
  FUNC_1( VAR_1->nFree<0 );

  VAR_5 = VAR_1->pBt->usableSize;
  VAR_3 = VAR_1->hdrOffset;
  VAR_4 = VAR_1->aData;



  VAR_7 = FUNC_3(&VAR_4[VAR_3+5]);
  VAR_8 = VAR_3 + 8 + VAR_1->childPtrSize + 2*VAR_1->nCell;
  VAR_9 = VAR_5 - 4;





  VAR_2 = FUNC_2(&VAR_4[VAR_3+1]);
  VAR_6 = VAR_4[VAR_3+7] + VAR_7;
  if( VAR_2>0 ){
    u32 VAR_10, VAR_11;
    if( VAR_2<VAR_8 ){



      return FUNC_0(VAR_1);
    }
    while( 1 ){
      if( VAR_2>VAR_9 ){

        return FUNC_0(VAR_1);
      }
      VAR_10 = FUNC_2(&VAR_4[VAR_2]);
      VAR_11 = FUNC_2(&VAR_4[VAR_2+2]);
      VAR_6 = VAR_6 + VAR_11;
      if( VAR_10<=VAR_2+VAR_11+3 ) break;
      VAR_2 = VAR_10;
    }
    if( VAR_10>0 ){

      return FUNC_0(VAR_1);
    }
    if( VAR_2+VAR_11>(unsigned int)VAR_5 ){

      return FUNC_0(VAR_1);
    }
  }
  if( VAR_6>VAR_5 ){
    return FUNC_0(VAR_1);
  }
  VAR_1->nFree = (u16)(VAR_6 - VAR_8);
  return VAR_0;
}
