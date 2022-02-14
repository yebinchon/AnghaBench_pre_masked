
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_9__ {int ix; scalar_t__ iPage; TYPE_1__* pPage; } ;
struct TYPE_8__ {int nCell; int hdrOffset; int * aData; scalar_t__ leaf; int intKey; } ;
typedef TYPE_1__ MemPage ;
typedef TYPE_2__ BtCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

int FUNC_5(BtCursor *VAR_2, i64 *VAR_3){
  i64 VAR_4 = 0;
  int VAR_5;

  VAR_5 = FUNC_4(VAR_2);
  if( VAR_5==VAR_0 ){
    *VAR_3 = 0;
    return VAR_1;
  }




  while( VAR_5==VAR_1 ){
    int VAR_6;
    MemPage *VAR_7;





    VAR_7 = VAR_2->pPage;
    if( VAR_7->leaf || !VAR_7->intKey ){
      VAR_4 += VAR_7->nCell;
    }
    if( VAR_7->leaf ){
      do {
        if( VAR_2->iPage==0 ){

          *VAR_3 = VAR_4;
          return FUNC_4(VAR_2);
        }
        FUNC_3(VAR_2);
      }while ( VAR_2->ix>=VAR_2->pPage->nCell );

      VAR_2->ix++;
      VAR_7 = VAR_2->pPage;
    }




    VAR_6 = VAR_2->ix;
    if( VAR_6==VAR_7->nCell ){
      VAR_5 = FUNC_2(VAR_2, FUNC_1(&VAR_7->aData[VAR_7->hdrOffset+8]));
    }else{
      VAR_5 = FUNC_2(VAR_2, FUNC_1(FUNC_0(VAR_7, VAR_6)));
    }
  }


  return VAR_5;
}
