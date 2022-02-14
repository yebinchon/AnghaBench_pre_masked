
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u16 ;
struct TYPE_6__ {int btsFlags; size_t usableSize; int pageSize; int mutex; } ;
struct TYPE_5__ {unsigned char* aData; size_t hdrOffset; scalar_t__ pgno; size_t nFree; size_t cellOffset; unsigned char* aDataEnd; unsigned char* aCellIdx; size_t maskPage; int isInit; scalar_t__ nCell; scalar_t__ nOverflow; int pDbPage; TYPE_2__* pBt; } ;
typedef TYPE_1__ MemPage ;
typedef TYPE_2__ BtShared ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (unsigned char*,size_t) ;
 unsigned char* FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(MemPage *VAR_2, int VAR_3){
  unsigned char *VAR_4 = VAR_2->aData;
  BtShared *VAR_5 = VAR_2->pBt;
  u8 VAR_6 = VAR_2->hdrOffset;
  u16 VAR_7;

  FUNC_0( FUNC_7(VAR_2->pDbPage)==VAR_2->pgno );
  FUNC_0( FUNC_5(VAR_2->pDbPage) == (void*)VAR_2 );
  FUNC_0( FUNC_4(VAR_2->pDbPage) == VAR_4 );
  FUNC_0( FUNC_6(VAR_2->pDbPage) );
  FUNC_0( FUNC_8(VAR_5->mutex) );
  if( VAR_5->btsFlags & VAR_0 ){
    FUNC_2(&VAR_4[VAR_6], 0, VAR_5->usableSize - VAR_6);
  }
  VAR_4[VAR_6] = (char)VAR_3;
  VAR_7 = VAR_6 + 8 + 4*((VAR_3&VAR_1)==0 ?1:0);
  FUNC_2(&VAR_4[VAR_6+1], 0, 4);
  VAR_4[VAR_6+7] = 0;
  FUNC_3(&VAR_4[VAR_6+5], VAR_5->usableSize);
  VAR_2->nFree = (u16)(VAR_5->usableSize - VAR_7);
  FUNC_1(VAR_2, VAR_3);
  VAR_2->hdrOffset = VAR_6;
  VAR_2->cellOffset = VAR_7;
  VAR_2->aDataEnd = &VAR_4[VAR_5->usableSize];
  VAR_2->aCellIdx = &VAR_4[VAR_7];
  VAR_2->nOverflow = 0;
  FUNC_0( VAR_5->pageSize>=512 && VAR_5->pageSize<=65536 );
  VAR_2->maskPage = (u16)(VAR_5->pageSize - 1);
  VAR_2->nCell = 0;
  VAR_2->isInit = 1;
}
