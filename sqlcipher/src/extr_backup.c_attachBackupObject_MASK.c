
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int isAttached; struct TYPE_4__* pNext; int pSrc; } ;
typedef TYPE_1__ sqlite3_backup ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__** FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(sqlite3_backup *VAR_0){
  sqlite3_backup **VAR_1;
  FUNC_0( FUNC_1(VAR_0->pSrc) );
  VAR_1 = FUNC_3(FUNC_2(VAR_0->pSrc));
  VAR_0->pNext = *VAR_1;
  *VAR_1 = VAR_0;
  VAR_0->isAttached = 1;
}
