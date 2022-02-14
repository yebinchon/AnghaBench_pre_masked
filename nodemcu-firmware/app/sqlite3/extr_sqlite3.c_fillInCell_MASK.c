
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_18__ {size_t pageSize; int usableSize; scalar_t__ autoVacuum; int mutex; } ;
struct TYPE_17__ {int nData; int nZero; int nKey; int * pKey; int * pData; } ;
struct TYPE_16__ {unsigned char* pPayload; int nKey; int nSize; int nLocal; } ;
struct TYPE_15__ {unsigned char* aData; int childPtrSize; int maxLocal; int minLocal; int pDbPage; int (* xParseCell ) (TYPE_1__*,unsigned char*,TYPE_2__*) ;TYPE_4__* pBt; int const* intKeyLeaf; scalar_t__ intKey; } ;
typedef scalar_t__ Pgno ;
typedef TYPE_1__ MemPage ;
typedef TYPE_2__ CellInfo ;
typedef TYPE_3__ BtreePayload ;
typedef TYPE_4__ BtShared ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_4__*,TYPE_1__**,scalar_t__*,scalar_t__,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned char*,int const*,int) ;
 int FUNC_5 (unsigned char*,int ,int) ;
 int FUNC_6 (TYPE_4__*,scalar_t__,int ,scalar_t__,int*) ;
 int FUNC_7 (unsigned char*,scalar_t__) ;
 scalar_t__ FUNC_8 (unsigned char*,int ) ;
 scalar_t__ FUNC_9 (unsigned char*,int) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (int ) ;
 int const* FUNC_12 (int ) ;
 int FUNC_13 (TYPE_1__*,unsigned char*,TYPE_2__*) ;
 int FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(
  MemPage *VAR_3,
  unsigned char *VAR_4,
  const BtreePayload *VAR_5,
  int *VAR_6
){
  int VAR_7;
  const u8 *VAR_8;
  int VAR_9, VAR_10, VAR_11;
  int VAR_12;
  MemPage *VAR_13 = 0;
  MemPage *VAR_14 = 0;
  unsigned char *VAR_15;
  unsigned char *VAR_16;
  BtShared *VAR_17 = VAR_3->pBt;
  Pgno VAR_18 = 0;
  int VAR_19;

  FUNC_3( FUNC_12(VAR_3->pBt->mutex) );



  FUNC_3( VAR_4<VAR_3->aData || VAR_4>=&VAR_3->aData[VAR_17->pageSize]
            || FUNC_11(VAR_3->pDbPage) );


  VAR_19 = VAR_3->childPtrSize;
  if( VAR_3->intKey ){
    VAR_7 = VAR_5->nData + VAR_5->nZero;
    VAR_8 = VAR_5->pData;
    VAR_9 = VAR_5->nData;
    FUNC_3( VAR_3->intKeyLeaf );
    VAR_19 += FUNC_9(&VAR_4[VAR_19], VAR_7);
    VAR_19 += FUNC_8(&VAR_4[VAR_19], *(u64*)&VAR_5->nKey);
  }else{
    FUNC_3( VAR_5->nKey<=0x7fffffff && VAR_5->pKey!=0 );
    VAR_9 = VAR_7 = (int)VAR_5->nKey;
    VAR_8 = VAR_5->pKey;
    VAR_19 += FUNC_9(&VAR_4[VAR_19], VAR_7);
  }


  if( VAR_7<=VAR_3->maxLocal ){
    VAR_10 = VAR_19 + VAR_7;
    FUNC_14( VAR_10==3 );
    FUNC_14( VAR_10==4 );
    if( VAR_10<4 ) VAR_10 = 4;
    *VAR_6 = VAR_10;
    VAR_12 = VAR_7;
    VAR_15 = VAR_4;
  }else{
    int VAR_20 = VAR_3->minLocal;
    VAR_10 = VAR_20 + (VAR_7 - VAR_20) % (VAR_3->pBt->usableSize - 4);
    FUNC_14( VAR_10==VAR_3->maxLocal );
    FUNC_14( VAR_10==VAR_3->maxLocal+1 );
    if( VAR_10 > VAR_3->maxLocal ) VAR_10 = VAR_20;
    VAR_12 = VAR_10;
    *VAR_6 = VAR_10 + VAR_19 + 4;
    VAR_15 = &VAR_4[VAR_19+VAR_10];
  }
  VAR_16 = &VAR_4[VAR_19];
  while( VAR_7>0 ){
    if( VAR_12==0 ){

      Pgno VAR_21 = VAR_18;
      if( VAR_17->autoVacuum ){
        do{
          VAR_18++;
        } while(
          FUNC_1(VAR_17, VAR_18) || VAR_18==FUNC_0(VAR_17)
        );
      }

      VAR_11 = FUNC_2(VAR_17, &VAR_13, &VAR_18, VAR_18, 0);
      if( VAR_17->autoVacuum && VAR_11==VAR_2 ){
        u8 VAR_22 = (VAR_21?VAR_1:VAR_0);
        FUNC_6(VAR_17, VAR_18, VAR_22, VAR_21, &VAR_11);
        if( VAR_11 ){
          FUNC_10(VAR_13);
        }
      }

      if( VAR_11 ){
        FUNC_10(VAR_14);
        return VAR_11;
      }



      FUNC_3( VAR_14==0 || FUNC_11(VAR_14->pDbPage) );



      FUNC_3( VAR_15<VAR_3->aData || VAR_15>=&VAR_3->aData[VAR_17->pageSize]
            || FUNC_11(VAR_3->pDbPage) );

      FUNC_7(VAR_15, VAR_18);
      FUNC_10(VAR_14);
      VAR_14 = VAR_13;
      VAR_15 = VAR_13->aData;
      FUNC_7(VAR_15, 0);
      VAR_16 = &VAR_13->aData[4];
      VAR_12 = VAR_17->usableSize - 4;
    }
    VAR_10 = VAR_7;
    if( VAR_10>VAR_12 ) VAR_10 = VAR_12;



    FUNC_3( VAR_14==0 || FUNC_11(VAR_14->pDbPage) );



    FUNC_3( VAR_16<VAR_3->aData || VAR_16>=&VAR_3->aData[VAR_17->pageSize]
            || FUNC_11(VAR_3->pDbPage) );

    if( VAR_9>0 ){
      if( VAR_10>VAR_9 ) VAR_10 = VAR_9;
      FUNC_3( VAR_8 );
      FUNC_4(VAR_16, VAR_8, VAR_10);
    }else{
      FUNC_5(VAR_16, 0, VAR_10);
    }
    VAR_7 -= VAR_10;
    VAR_16 += VAR_10;
    VAR_8 += VAR_10;
    VAR_9 -= VAR_10;
    VAR_12 -= VAR_10;
  }
  FUNC_10(VAR_14);
  return VAR_2;
}
