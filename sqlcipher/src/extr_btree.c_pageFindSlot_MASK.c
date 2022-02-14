
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int hdrOffset; int* aData; TYPE_1__* pBt; } ;
struct TYPE_5__ {int usableSize; } ;
typedef TYPE_2__ MemPage ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static u8 *FUNC_6(MemPage *VAR_0, int VAR_1, int *VAR_2){
  const int VAR_3 = VAR_0->hdrOffset;
  u8 * const VAR_4 = VAR_0->aData;
  int VAR_5 = VAR_3 + 1;
  int VAR_6 = FUNC_2(&VAR_4[VAR_5]);
  int VAR_7;
  int VAR_8 = VAR_0->pBt->usableSize - VAR_1;
  int VAR_9;

  FUNC_1( VAR_6>0 );
  while( VAR_6<=VAR_8 ){



    VAR_9 = FUNC_2(&VAR_4[VAR_6+2]);
    if( (VAR_7 = VAR_9 - VAR_1)>=0 ){
      FUNC_5( VAR_7==4 );
      FUNC_5( VAR_7==3 );
      if( VAR_7<4 ){


        if( VAR_4[VAR_3+7]>57 ) return 0;



        FUNC_3(&VAR_4[VAR_5], &VAR_4[VAR_6], 2);
        VAR_4[VAR_3+7] += (u8)VAR_7;
      }else if( VAR_7+VAR_6 > VAR_8 ){

        *VAR_2 = FUNC_0(VAR_0);
        return 0;
      }else{


        FUNC_4(&VAR_4[VAR_6+2], VAR_7);
      }
      return &VAR_4[VAR_6 + VAR_7];
    }
    VAR_5 = VAR_6;
    VAR_6 = FUNC_2(&VAR_4[VAR_6]);
    if( VAR_6<=VAR_5+VAR_9 ){
      if( VAR_6 ){

        *VAR_2 = FUNC_0(VAR_0);
      }
      return 0;
    }
  }
  if( VAR_6>VAR_8+VAR_1-4 ){

    *VAR_2 = FUNC_0(VAR_0);
  }
  return 0;
}
