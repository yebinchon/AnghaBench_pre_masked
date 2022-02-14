
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int hdrOffset; int* aData; int cellOffset; int nCell; TYPE_1__* pBt; } ;
struct TYPE_4__ {int usableSize; } ;
typedef TYPE_2__ MemPage ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static u8 *FUNC_5(MemPage *VAR_1, int VAR_2, int *VAR_3){
  const int VAR_4 = VAR_1->hdrOffset;
  u8 * const VAR_5 = VAR_1->aData;
  int VAR_6 = VAR_4 + 1;
  int VAR_7 = FUNC_1(&VAR_5[VAR_6]);
  int VAR_8;
  int VAR_9 = VAR_1->pBt->usableSize;

  FUNC_0( VAR_7>0 );
  do{
    int VAR_10;


    if( VAR_7>VAR_9-4 || VAR_7<VAR_6+4 ){
      *VAR_3 = VAR_0;
      return 0;
    }



    VAR_10 = FUNC_1(&VAR_5[VAR_7+2]);
    if( (VAR_8 = VAR_10 - VAR_2)>=0 ){
      FUNC_4( VAR_8==4 );
      FUNC_4( VAR_8==3 );
      if( VAR_7 < VAR_1->cellOffset+2*VAR_1->nCell || VAR_10+VAR_7 > VAR_9 ){
        *VAR_3 = VAR_0;
        return 0;
      }else if( VAR_8<4 ){


        if( VAR_5[VAR_4+7]>57 ) return 0;



        FUNC_2(&VAR_5[VAR_6], &VAR_5[VAR_7], 2);
        VAR_5[VAR_4+7] += (u8)VAR_8;
      }else{


        FUNC_3(&VAR_5[VAR_7+2], VAR_8);
      }
      return &VAR_5[VAR_7 + VAR_8];
    }
    VAR_6 = VAR_7;
    VAR_7 = FUNC_1(&VAR_5[VAR_7]);
  }while( VAR_7 );

  return 0;
}
