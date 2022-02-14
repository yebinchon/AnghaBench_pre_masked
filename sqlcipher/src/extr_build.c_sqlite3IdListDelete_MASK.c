
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_6__ {struct TYPE_6__* zName; } ;
struct TYPE_5__ {int nId; TYPE_4__* a; } ;
typedef TYPE_1__ IdList ;


 int FUNC_0 (int *,TYPE_4__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;

void FUNC_2(sqlite3 *VAR_0, IdList *VAR_1){
  int VAR_2;
  if( VAR_1==0 ) return;
  for(VAR_2=0; VAR_2<VAR_1->nId; VAR_2++){
    FUNC_0(VAR_0, VAR_1->a[VAR_2].zName);
  }
  FUNC_0(VAR_0, VAR_1->a);
  FUNC_1(VAR_0, VAR_1);
}
