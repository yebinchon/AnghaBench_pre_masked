
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_4__ {scalar_t__ nCursor; struct TYPE_4__* pNext; struct TYPE_4__* pRule; } ;
typedef TYPE_1__ fuzzer_vtab ;
typedef TYPE_1__ fuzzer_rule ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab *VAR_1){
  fuzzer_vtab *VAR_2 = (fuzzer_vtab*)VAR_1;
  FUNC_0( VAR_2->nCursor==0 );
  while( VAR_2->pRule ){
    fuzzer_rule *VAR_3 = VAR_2->pRule;
    VAR_2->pRule = VAR_3->pNext;
    FUNC_1(VAR_3);
  }
  FUNC_1(VAR_2);
  return VAR_0;
}
