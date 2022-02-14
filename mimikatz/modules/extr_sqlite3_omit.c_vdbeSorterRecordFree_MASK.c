
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_5__ {TYPE_2__* pNext; } ;
struct TYPE_6__ {TYPE_1__ u; } ;
typedef TYPE_2__ SorterRecord ;


 int FUNC_0 (int *,TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(sqlite3 *VAR_0, SorterRecord *VAR_1){
  SorterRecord *VAR_2;
  SorterRecord *VAR_3;
  for(VAR_2=VAR_1; VAR_2; VAR_2=VAR_3){
    VAR_3 = VAR_2->u.pNext;
    FUNC_0(VAR_0, VAR_2);
  }
}
