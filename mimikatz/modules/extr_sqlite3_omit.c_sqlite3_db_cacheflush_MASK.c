
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
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

int FUNC_8(sqlite3 *VAR_3){
  int VAR_4;
  int VAR_5 = VAR_2;
  int VAR_6 = 0;




  FUNC_6(VAR_3->mutex);
  FUNC_0(VAR_3);
  for(VAR_4=0; VAR_5==VAR_2 && VAR_4<VAR_3->nDb; VAR_4++){
    Btree *VAR_7 = VAR_3->aDb[VAR_4].pBt;
    if( VAR_7 && FUNC_1(VAR_7) ){
      Pager *VAR_8 = FUNC_3(VAR_7);
      VAR_5 = FUNC_4(VAR_8);
      if( VAR_5==VAR_0 ){
        VAR_6 = 1;
        VAR_5 = VAR_2;
      }
    }
  }
  FUNC_2(VAR_3);
  FUNC_7(VAR_3->mutex);
  return ((VAR_5==VAR_2 && VAR_6) ? VAR_0 : VAR_5);
}
