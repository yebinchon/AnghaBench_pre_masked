
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* pWorker; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_9__ {TYPE_2__* pLevel; } ;
struct TYPE_8__ {int nRight; struct TYPE_8__* pNext; } ;
typedef TYPE_2__ Level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (TYPE_1__*,int ,int ) ;

int FUNC_2(lsm_db *VAR_3){
  Level *VAR_4;
  int VAR_5 = 0;

  FUNC_0( FUNC_1(VAR_3, VAR_1, VAR_0) );
  FUNC_0( VAR_3->pWorker );

  for(VAR_4=VAR_3->pWorker->pLevel; VAR_4; VAR_4=VAR_4->pNext){
    VAR_5 += (VAR_4->nRight ? VAR_4->nRight : 1);
  }

  return (VAR_5 >= VAR_2);
}
