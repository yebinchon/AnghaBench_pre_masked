
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int nCell; int iCell; int nKey; int nVal; int pVal; int blob2; int eType; int blob1; int pKey; int iPgPtr; scalar_t__ pPg; } ;
typedef TYPE_1__ SegmentPtr ;


 scalar_t__ FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_0 ;
 size_t FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int * FUNC_4 (scalar_t__,int*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,int,int,int *,int *) ;

__attribute__((used)) static int FUNC_8(
  SegmentPtr *VAR_1,
  int VAR_2
){
  int VAR_3 = VAR_0;
  if( VAR_1->pPg ){
    u8 *VAR_4;
    int VAR_5;
    int VAR_6;

    FUNC_3( VAR_2<VAR_1->nCell );
    VAR_1->iCell = VAR_2;
    VAR_4 = FUNC_4(VAR_1->pPg, &VAR_6);
    VAR_5 = FUNC_5(&VAR_4[FUNC_2(VAR_6, VAR_1->iCell)]);
    VAR_1->eType = VAR_4[VAR_5];
    VAR_5++;
    VAR_5 += FUNC_1(&VAR_4[VAR_5], VAR_1->iPgPtr);
    VAR_5 += FUNC_0(&VAR_4[VAR_5], VAR_1->nKey);
    if( FUNC_6(VAR_1->eType) ){
      VAR_5 += FUNC_0(&VAR_4[VAR_5], VAR_1->nVal);
    }
    FUNC_3( VAR_1->nKey>=0 );

    VAR_3 = FUNC_7(
        VAR_1, VAR_5, VAR_1->nKey, &VAR_1->pKey, &VAR_1->blob1
    );
    if( VAR_3==VAR_0 && FUNC_6(VAR_1->eType) ){
      VAR_3 = FUNC_7(
          VAR_1, VAR_5+VAR_1->nKey, VAR_1->nVal, &VAR_1->pVal, &VAR_1->blob2
      );
    }else{
      VAR_1->nVal = 0;
      VAR_1->pVal = 0;
    }
  }

  return VAR_3;
}
