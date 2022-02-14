
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int nColumn; int* aiColumn; TYPE_2__* pTable; } ;
struct TYPE_6__ {TYPE_1__* aCol; } ;
struct TYPE_5__ {int notNull; } ;
typedef TYPE_3__ Index ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(Index *VAR_0, int VAR_1){
  int VAR_2;
  FUNC_0( VAR_0!=0 );
  FUNC_0( VAR_1>=0 && VAR_1<VAR_0->nColumn );
  VAR_2 = VAR_0->aiColumn[VAR_1];
  if( VAR_2>=0 ){
    return VAR_0->pTable->aCol[VAR_2].notNull;
  }else if( VAR_2==(-1) ){
    return 1;
  }else{
    FUNC_0( VAR_2==(-2) );
    return 0;

  }
}
