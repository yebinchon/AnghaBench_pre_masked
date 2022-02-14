
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nDb; TYPE_1__* aDb; int mutex; } ;
typedef TYPE_2__ sqlite3 ;
struct TYPE_4__ {int * pSchema; } ;
typedef int Schema ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

int FUNC_2(sqlite3 *VAR_0, Schema *VAR_1){
  int VAR_2 = -1000000;
  FUNC_0( FUNC_1(VAR_0->mutex) );
  if( VAR_1 ){
    for(VAR_2=0; 1; VAR_2++){
      FUNC_0( VAR_2<VAR_0->nDb );
      if( VAR_0->aDb[VAR_2].pSchema==VAR_1 ){
        break;
      }
    }
    FUNC_0( VAR_2>=0 && VAR_2<VAR_0->nDb );
  }
  return VAR_2;
}
