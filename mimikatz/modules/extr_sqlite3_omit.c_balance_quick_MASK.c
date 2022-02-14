
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_20__ {int usableSize; int mutex; } ;
struct TYPE_19__ {int nCell; int* szCell; int* ixNx; int * apEnd; int ** apCell; TYPE_1__* pRef; } ;
struct TYPE_18__ {int nOverflow; scalar_t__ nCell; int (* xCellSize ) (TYPE_1__*,int *) ;int* aData; int nFree; int cellOffset; int minLocal; int hdrOffset; int pgno; int aDataEnd; int pDbPage; int ** apOvfl; TYPE_3__* pBt; } ;
typedef int Pgno ;
typedef TYPE_1__ MemPage ;
typedef TYPE_2__ CellArray ;
typedef TYPE_3__ BtShared ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_3__* const,TYPE_1__**,int *,int ,int ) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,int *,int,int ,int ,int*) ;
 int FUNC_5 (TYPE_3__* const,int ,int ,int ,int*) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*,int *,int*) ;
 int FUNC_7 (int*,int ) ;
 int FUNC_8 (TYPE_2__*,int ,int,TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_1__*,int *) ;
 int FUNC_13 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_14(MemPage *VAR_8, MemPage *VAR_9, u8 *VAR_10){
  BtShared *const VAR_11 = VAR_9->pBt;
  MemPage *VAR_12;
  int VAR_13;
  Pgno VAR_14;

  FUNC_2( FUNC_11(VAR_9->pBt->mutex) );
  FUNC_2( FUNC_10(VAR_8->pDbPage) );
  FUNC_2( VAR_9->nOverflow==1 );

  if( VAR_9->nCell==0 ) return VAR_6;





  VAR_13 = FUNC_1(VAR_11, &VAR_12, &VAR_14, 0, 0);

  if( VAR_13==VAR_7 ){

    u8 *VAR_15 = &VAR_10[4];
    u8 *VAR_16 = VAR_9->apOvfl[0];
    u16 VAR_17 = VAR_9->xCellSize(VAR_9, VAR_16);
    u8 *VAR_18;
    CellArray VAR_19;

    FUNC_2( FUNC_10(VAR_12->pDbPage) );
    FUNC_2( VAR_0 || VAR_9->aData[0]==(VAR_2|VAR_4|VAR_3) );
    FUNC_13(VAR_12, VAR_2|VAR_4|VAR_3);
    VAR_19.nCell = 1;
    VAR_19.pRef = VAR_9;
    VAR_19.apCell = &VAR_16;
    VAR_19.szCell = &VAR_17;
    VAR_19.apEnd[0] = VAR_9->aDataEnd;
    VAR_19.ixNx[0] = 2;
    VAR_13 = FUNC_8(&VAR_19, 0, 1, VAR_12);
    if( FUNC_0(VAR_13) ){
      FUNC_9(VAR_12);
      return VAR_13;
    }
    VAR_12->nFree = VAR_11->usableSize - VAR_12->cellOffset - 2 - VAR_17;
    if( VAR_1 ){
      FUNC_5(VAR_11, VAR_14, VAR_5, VAR_8->pgno, &VAR_13);
      if( VAR_17>VAR_12->minLocal ){
        FUNC_6(VAR_12, VAR_12, VAR_16, &VAR_13);
      }
    }
    VAR_16 = FUNC_3(VAR_9, VAR_9->nCell-1);
    VAR_18 = &VAR_16[9];
    while( (*(VAR_16++)&0x80) && VAR_16<VAR_18 );
    VAR_18 = &VAR_16[9];
    while( ((*(VAR_15++) = *(VAR_16++))&0x80) && VAR_16<VAR_18 );


    if( VAR_13==VAR_7 ){
      FUNC_4(VAR_8, VAR_8->nCell, VAR_10, (int)(VAR_15-VAR_10),
                   0, VAR_9->pgno, &VAR_13);
    }


    FUNC_7(&VAR_8->aData[VAR_8->hdrOffset+8], VAR_14);


    FUNC_9(VAR_12);
  }

  return VAR_13;
}
