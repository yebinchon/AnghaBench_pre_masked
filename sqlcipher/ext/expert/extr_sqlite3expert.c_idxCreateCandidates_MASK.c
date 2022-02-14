
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* pScan; } ;
typedef TYPE_1__ sqlite3expert ;
struct TYPE_7__ {scalar_t__ pOrder; struct TYPE_7__* pNextScan; } ;
typedef TYPE_2__ IdxScan ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(sqlite3expert *VAR_1){
  int VAR_2 = VAR_0;
  IdxScan *VAR_3;

  for(VAR_3=VAR_1->pScan; VAR_3 && VAR_2==VAR_0; VAR_3=VAR_3->pNextScan){
    VAR_2 = FUNC_0(VAR_1, VAR_3, 0);
    if( VAR_2==VAR_0 && VAR_3->pOrder ){
      VAR_2 = FUNC_0(VAR_1, VAR_3, VAR_3->pOrder);
    }
  }

  return VAR_2;
}
