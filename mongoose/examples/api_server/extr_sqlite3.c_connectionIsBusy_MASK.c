
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nDb; TYPE_1__* aDb; scalar_t__ pVdbe; int mutex; } ;
typedef TYPE_2__ sqlite3 ;
struct TYPE_4__ {int * pBt; } ;
typedef int Btree ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(sqlite3 *VAR_0){
  int VAR_1;
  FUNC_0( FUNC_2(VAR_0->mutex) );
  if( VAR_0->pVdbe ) return 1;
  for(VAR_1=0; VAR_1<VAR_0->nDb; VAR_1++){
    Btree *VAR_2 = VAR_0->aDb[VAR_1].pBt;
    if( VAR_2 && FUNC_1(VAR_2) ) return 1;
  }
  return 0;
}
