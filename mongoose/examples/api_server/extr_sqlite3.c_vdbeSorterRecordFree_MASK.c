
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_4__ {struct TYPE_4__* pNext; } ;
typedef TYPE_1__ SorterRecord ;


 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(sqlite3 *VAR_0, SorterRecord *VAR_1){
  SorterRecord *VAR_2;
  SorterRecord *VAR_3;
  for(VAR_2=VAR_1; VAR_2; VAR_2=VAR_3){
    VAR_3 = VAR_2->pNext;
    FUNC_0(VAR_0, VAR_2);
  }
}
