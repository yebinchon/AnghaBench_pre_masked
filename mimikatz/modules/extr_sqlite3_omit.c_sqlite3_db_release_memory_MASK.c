
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int nDb; int mutex; TYPE_1__* aDb; } ;
typedef TYPE_2__ sqlite3 ;
struct TYPE_7__ {int * pBt; } ;
typedef int Pager ;
typedef int Btree ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

int FUNC_7(sqlite3 *VAR_2){
  int VAR_3;




  FUNC_5(VAR_2->mutex);
  FUNC_0(VAR_2);
  for(VAR_3=0; VAR_3<VAR_2->nDb; VAR_3++){
    Btree *VAR_4 = VAR_2->aDb[VAR_3].pBt;
    if( VAR_4 ){
      Pager *VAR_5 = FUNC_2(VAR_4);
      FUNC_3(VAR_5);
    }
  }
  FUNC_1(VAR_2);
  FUNC_6(VAR_2->mutex);
  return VAR_1;
}
