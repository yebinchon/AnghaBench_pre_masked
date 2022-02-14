
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_16__ {int mutex; } ;
struct TYPE_15__ {int nOverflow; scalar_t__ nCell; int* aData; scalar_t__ minLocal; int hdrOffset; int pgno; int pDbPage; int ** apOvfl; TYPE_2__* pBt; } ;
typedef int Pgno ;
typedef TYPE_1__ MemPage ;
typedef TYPE_2__ BtShared ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__* const,TYPE_1__**,int *,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int,int **,scalar_t__*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *) ;
 int * FUNC_4 (TYPE_1__*,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,int *,int,int ,int ,int*) ;
 int FUNC_6 (TYPE_2__* const,int ,int ,int ,int*) ;
 int FUNC_7 (TYPE_1__*,int *,int*) ;
 int FUNC_8 (int*,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_13(MemPage *VAR_7, MemPage *VAR_8, u8 *VAR_9){
  BtShared *const VAR_10 = VAR_8->pBt;
  MemPage *VAR_11;
  int VAR_12;
  Pgno VAR_13;

  FUNC_2( FUNC_11(VAR_8->pBt->mutex) );
  FUNC_2( FUNC_10(VAR_7->pDbPage) );
  FUNC_2( VAR_8->nOverflow==1 );


  if( VAR_8->nCell==0 ) return VAR_5;





  VAR_12 = FUNC_0(VAR_10, &VAR_11, &VAR_13, 0, 0);

  if( VAR_12==VAR_6 ){

    u8 *VAR_14 = &VAR_9[4];
    u8 *VAR_15 = VAR_8->apOvfl[0];
    u16 VAR_16 = FUNC_3(VAR_8, VAR_15);
    u8 *VAR_17;

    FUNC_2( FUNC_10(VAR_11->pDbPage) );
    FUNC_2( VAR_8->aData[0]==(VAR_1|VAR_3|VAR_2) );
    FUNC_12(VAR_11, VAR_1|VAR_3|VAR_2);
    FUNC_1(VAR_11, 1, &VAR_15, &VAR_16);
    if( VAR_0 ){
      FUNC_6(VAR_10, VAR_13, VAR_4, VAR_7->pgno, &VAR_12);
      if( VAR_16>VAR_11->minLocal ){
        FUNC_7(VAR_11, VAR_15, &VAR_12);
      }
    }
    VAR_15 = FUNC_4(VAR_8, VAR_8->nCell-1);
    VAR_17 = &VAR_15[9];
    while( (*(VAR_15++)&0x80) && VAR_15<VAR_17 );
    VAR_17 = &VAR_15[9];
    while( ((*(VAR_14++) = *(VAR_15++))&0x80) && VAR_15<VAR_17 );


    FUNC_5(VAR_7, VAR_7->nCell, VAR_9, (int)(VAR_14-VAR_9),
               0, VAR_8->pgno, &VAR_12);


    FUNC_8(&VAR_7->aData[VAR_7->hdrOffset+8], VAR_13);


    FUNC_9(VAR_11);
  }

  return VAR_12;
}
