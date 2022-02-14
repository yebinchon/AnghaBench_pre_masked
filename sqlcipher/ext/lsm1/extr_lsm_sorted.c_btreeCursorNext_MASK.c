
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {size_t iPg; int nDepth; TYPE_1__* aPg; void* iPtr; int pSeg; int pFS; } ;
struct TYPE_5__ {int iCell; int * pPage; } ;
typedef int Page ;
typedef void* LsmPgno ;
typedef TYPE_1__ BtreePg ;
typedef TYPE_2__ BtreeCursor ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 void* FUNC_2 (int *,int,int) ;
 int * FUNC_3 (int *,int*) ;
 int FUNC_4 (int ,int ,void*,int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(BtreeCursor *VAR_1){
  int VAR_2 = VAR_0;

  BtreePg *VAR_3 = &VAR_1->aPg[VAR_1->iPg];
  int VAR_4;
  u8 *VAR_5;
  int VAR_6;

  FUNC_0( VAR_1->iPg>=0 );
  FUNC_0( VAR_1->iPg==VAR_1->nDepth-1 );

  VAR_5 = FUNC_3(VAR_3->pPage, &VAR_6);
  VAR_4 = FUNC_6(VAR_5, VAR_6);
  FUNC_0( VAR_3->iCell<=VAR_4 );
  VAR_3->iCell++;
  if( VAR_3->iCell==VAR_4 ){
    LsmPgno VAR_7;


    FUNC_5(VAR_3->pPage);
    VAR_3->pPage = 0;
    VAR_1->iPg--;
    while( VAR_1->iPg>=0 ){
      VAR_3 = &VAR_1->aPg[VAR_1->iPg];
      VAR_5 = FUNC_3(VAR_3->pPage, &VAR_6);
      if( VAR_3->iCell<FUNC_6(VAR_5, VAR_6) ) break;
      FUNC_5(VAR_3->pPage);
      VAR_1->iPg--;
    }


    VAR_2 = FUNC_1(VAR_1);



    if( VAR_1->iPg>=0 ){
      VAR_1->aPg[VAR_1->iPg].iCell++;

      VAR_7 = FUNC_2(VAR_5, VAR_6, VAR_3->iCell);
      do {
        Page *VAR_8;
        VAR_1->iPg++;
        VAR_2 = FUNC_4(VAR_1->pFS, VAR_1->pSeg, VAR_7, &VAR_8);
        VAR_1->aPg[VAR_1->iPg].pPage = VAR_8;
        VAR_1->aPg[VAR_1->iPg].iCell = 0;
        if( VAR_2==VAR_0 ){
          if( VAR_1->iPg==(VAR_1->nDepth-1) ) break;
          VAR_5 = FUNC_3(VAR_8, &VAR_6);
          VAR_7 = FUNC_2(VAR_5, VAR_6, 0);
        }
      }while( VAR_2==VAR_0 && VAR_1->iPg<(VAR_1->nDepth-1) );
      VAR_1->aPg[VAR_1->iPg].iCell = -1;
    }

  }else{
    VAR_2 = FUNC_1(VAR_1);
  }

  if( VAR_2==VAR_0 && VAR_1->iPg>=0 ){
    VAR_5 = FUNC_3(VAR_1->aPg[VAR_1->iPg].pPage, &VAR_6);
    VAR_1->iPtr = FUNC_2(VAR_5, VAR_6, VAR_1->aPg[VAR_1->iPg].iCell+1);
  }

  return VAR_2;
}
