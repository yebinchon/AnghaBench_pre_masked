
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ magic; int nOp; TYPE_3__* pParse; } ;
typedef TYPE_2__ Vdbe ;
struct TYPE_9__ {int nLabel; scalar_t__ nLabelAlloc; int* aLabel; TYPE_1__* db; } ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_3__ Parse ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,int) ;

void FUNC_4(Vdbe *VAR_2, int VAR_3){
  Parse *VAR_4 = VAR_2->pParse;
  int VAR_5 = FUNC_0(VAR_3);
  FUNC_1( VAR_2->magic==VAR_1 );
  FUNC_1( VAR_5<-VAR_4->nLabel );
  FUNC_1( VAR_5>=0 );





  if( VAR_4->nLabelAlloc + VAR_4->nLabel < 0 ){
    FUNC_3(VAR_4,VAR_2,VAR_5);
  }else{
    FUNC_1( VAR_4->aLabel[VAR_5]==(-1) );
    VAR_4->aLabel[VAR_5] = VAR_2->nOp;
  }
}
