
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_5__ {int nCol; TYPE_2__* aCol; } ;
typedef TYPE_1__ Table ;
struct TYPE_6__ {struct TYPE_6__* zColl; struct TYPE_6__* zType; struct TYPE_6__* zDflt; int pDflt; struct TYPE_6__* zName; } ;
typedef TYPE_2__ Column ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(sqlite3 *VAR_0, Table *VAR_1){
  int VAR_2;
  Column *VAR_3;
  FUNC_0( VAR_1!=0 );
  if( (VAR_3 = VAR_1->aCol)!=0 ){
    for(VAR_2=0; VAR_2<VAR_1->nCol; VAR_2++, VAR_3++){
      FUNC_1(VAR_0, VAR_3->zName);
      FUNC_2(VAR_0, VAR_3->pDflt);
      FUNC_1(VAR_0, VAR_3->zDflt);
      FUNC_1(VAR_0, VAR_3->zType);
      FUNC_1(VAR_0, VAR_3->zColl);
    }
    FUNC_1(VAR_0, VAR_1->aCol);
  }
}
