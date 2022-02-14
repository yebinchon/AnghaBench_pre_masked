
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_5__ {int tabFlags; } ;
typedef TYPE_1__ Table ;
struct TYPE_6__ {TYPE_1__* pEpoTab; } ;
typedef TYPE_2__ Module ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;

void FUNC_1(sqlite3 *VAR_1, Module *VAR_2){
  Table *VAR_3 = VAR_2->pEpoTab;
  if( VAR_3!=0 ){



    VAR_3->tabFlags |= VAR_0;
    FUNC_0(VAR_1, VAR_3);
    VAR_2->pEpoTab = 0;
  }
}
