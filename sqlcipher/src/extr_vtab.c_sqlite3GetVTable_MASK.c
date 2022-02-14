
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_6__ {struct TYPE_6__* pNext; int * db; } ;
typedef TYPE_1__ VTable ;
struct TYPE_7__ {TYPE_1__* pVTable; } ;
typedef TYPE_2__ Table ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;

VTable *FUNC_2(sqlite3 *VAR_0, Table *VAR_1){
  VTable *VAR_2;
  FUNC_1( FUNC_0(VAR_1) );
  for(VAR_2=VAR_1->pVTable; VAR_2 && VAR_2->db!=VAR_0; VAR_2=VAR_2->pNext);
  return VAR_2;
}
