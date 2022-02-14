
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* pCsr; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_7__ {struct TYPE_7__* pNext; } ;
typedef TYPE_2__ MultiCursor ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;

int FUNC_1(lsm_db *VAR_1){
  int VAR_2 = VAR_0;
  MultiCursor *VAR_3;

  for(VAR_3=VAR_1->pCsr; VAR_2==VAR_0 && VAR_3; VAR_3=VAR_3->pNext){
    VAR_2 = FUNC_0(VAR_1, VAR_3);
  }
  return VAR_2;
}
