
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ (* xCellSize ) (TYPE_2__*,scalar_t__) ;} ;
struct TYPE_5__ {int nCell; scalar_t__* apCell; scalar_t__* szCell; TYPE_2__* pRef; } ;
typedef TYPE_1__ CellArray ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(CellArray *VAR_1, int VAR_2, int VAR_3){
  FUNC_0( VAR_2>=0 && VAR_2+VAR_3<=VAR_1->nCell );
  while( VAR_3>0 ){
    FUNC_0( VAR_1->apCell[VAR_2]!=0 );
    if( VAR_1->szCell[VAR_2]==0 ){
      VAR_1->szCell[VAR_2] = VAR_1->pRef->xCellSize(VAR_1->pRef, VAR_1->apCell[VAR_2]);
    }else{
      FUNC_0( VAR_0 ||
              VAR_1->szCell[VAR_2]==VAR_1->pRef->xCellSize(VAR_1->pRef, VAR_1->apCell[VAR_2]) );
    }
    VAR_2++;
    VAR_3--;
  }
}
