
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned char u8 ;
struct TYPE_6__ {scalar_t__ nOverflow; unsigned char* aData; int hdrOffset; int cellOffset; int nCell; int (* xCellSize ) (TYPE_2__*,unsigned char*) ;unsigned char nFree; int pDbPage; TYPE_1__* pBt; } ;
struct TYPE_5__ {int usableSize; int pPager; int mutex; } ;
typedef TYPE_2__ MemPage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;
 int FUNC_4 (unsigned char*,int ,int) ;
 int FUNC_5 (unsigned char*,int) ;
 int FUNC_6 (int ) ;
 unsigned char* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,unsigned char*) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(MemPage *VAR_3, int VAR_4){
  int VAR_5;
  int VAR_6;
  int VAR_7;
  int VAR_8;
  int VAR_9;
  int VAR_10;
  int VAR_11;
  int VAR_12;
  unsigned char *VAR_13;
  unsigned char *VAR_14;
  unsigned char *VAR_15;
  int VAR_16;
  int VAR_17;

  FUNC_0( FUNC_6(VAR_3->pDbPage) );
  FUNC_0( VAR_3->pBt!=0 );
  FUNC_0( VAR_3->pBt->usableSize <= VAR_1 );
  FUNC_0( VAR_3->nOverflow==0 );
  FUNC_0( FUNC_8(VAR_3->pBt->mutex) );
  VAR_14 = 0;
  VAR_15 = VAR_13 = VAR_3->aData;
  VAR_7 = VAR_3->hdrOffset;
  VAR_10 = VAR_3->cellOffset;
  VAR_12 = VAR_3->nCell;
  FUNC_0( VAR_12==FUNC_1(&VAR_13[VAR_7+3]) );
  VAR_16 = VAR_10 + 2*VAR_12;
  VAR_9 = VAR_3->pBt->usableSize;






  if( (int)VAR_13[VAR_7+7]<=VAR_4 ){
    int VAR_18 = FUNC_1(&VAR_13[VAR_7+1]);
    if( VAR_18 ){
      int VAR_19 = FUNC_1(&VAR_13[VAR_18]);







      FUNC_0( VAR_19==0 || VAR_19>VAR_18 );
      FUNC_0( VAR_18+FUNC_1(&VAR_13[VAR_18+2]) <= VAR_9 );
      FUNC_0( VAR_19==0 || VAR_19+FUNC_1(&VAR_13[VAR_19+2]) <= VAR_9 );

      if( 0==VAR_19 || (VAR_13[VAR_19]==0 && VAR_13[VAR_19+1]==0) ){
        u8 *VAR_20 = &VAR_13[VAR_10 + VAR_12*2];
        u8 *VAR_21;
        int VAR_22 = 0;
        int VAR_23 = FUNC_1(&VAR_13[VAR_18+2]);
        int VAR_24 = FUNC_1(&VAR_13[VAR_7+5]);
        if( VAR_19 ){
          if( VAR_18+VAR_23>VAR_19 ) return VAR_0;
          VAR_22 = FUNC_1(&VAR_13[VAR_19+2]);
          FUNC_0( VAR_18+VAR_23+VAR_22+VAR_19-(VAR_18+VAR_23) <= VAR_9 );
          FUNC_3(&VAR_13[VAR_18+VAR_23+VAR_22], &VAR_13[VAR_18+VAR_23], VAR_19-(VAR_18+VAR_23));
          VAR_23 += VAR_22;
        }
        VAR_11 = VAR_24+VAR_23;
        FUNC_0( VAR_11+(VAR_18-VAR_24) <= VAR_9 );
        FUNC_3(&VAR_13[VAR_11], &VAR_13[VAR_24], VAR_18-VAR_24);
        for(VAR_21=&VAR_13[VAR_10]; VAR_21<VAR_20; VAR_21+=2){
          VAR_6 = FUNC_1(VAR_21);
          if( VAR_6<VAR_18 ){ FUNC_5(VAR_21, VAR_6+VAR_23); }
          else if( VAR_6<VAR_19 ){ FUNC_5(VAR_21, VAR_6+VAR_22); }
        }
        goto defragment_out;
      }
    }
  }

  VAR_11 = VAR_9;
  VAR_17 = VAR_9 - 4;
  for(VAR_5=0; VAR_5<VAR_12; VAR_5++){
    u8 *VAR_25;
    VAR_25 = &VAR_13[VAR_10 + VAR_5*2];
    VAR_6 = FUNC_1(VAR_25);
    FUNC_10( VAR_6==VAR_16 );
    FUNC_10( VAR_6==VAR_17 );



    if( VAR_6<VAR_16 || VAR_6>VAR_17 ){
      return VAR_0;
    }
    FUNC_0( VAR_6>=VAR_16 && VAR_6<=VAR_17 );
    VAR_8 = VAR_3->xCellSize(VAR_3, &VAR_15[VAR_6]);
    VAR_11 -= VAR_8;
    if( VAR_11<VAR_16 || VAR_6+VAR_8>VAR_9 ){
      return VAR_0;
    }
    FUNC_0( VAR_11+VAR_8<=VAR_9 && VAR_11>=VAR_16 );
    FUNC_10( VAR_11+VAR_8==VAR_9 );
    FUNC_10( VAR_6+VAR_8==VAR_9 );
    FUNC_5(VAR_25, VAR_11);
    if( VAR_14==0 ){
      int VAR_26;
      if( VAR_11==VAR_6 ) continue;
      VAR_14 = FUNC_7(VAR_3->pBt->pPager);
      VAR_26 = FUNC_1(&VAR_13[VAR_7+5]);
      FUNC_2(&VAR_14[VAR_26], &VAR_13[VAR_26], (VAR_11+VAR_8) - VAR_26);
      VAR_15 = VAR_14;
    }
    FUNC_2(&VAR_13[VAR_11], &VAR_15[VAR_6], VAR_8);
  }
  VAR_13[VAR_7+7] = 0;

 defragment_out:
  if( VAR_13[VAR_7+7]+VAR_11-VAR_16!=VAR_3->nFree ){
    return VAR_0;
  }
  FUNC_0( VAR_11>=VAR_16 );
  FUNC_5(&VAR_13[VAR_7+5], VAR_11);
  VAR_13[VAR_7+1] = 0;
  VAR_13[VAR_7+2] = 0;
  FUNC_4(&VAR_13[VAR_16], 0, VAR_11-VAR_16);
  FUNC_0( FUNC_6(VAR_3->pDbPage) );
  return VAR_2;
}
