
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ nMerge; int pWorker; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_8__ {scalar_t__ iAge; scalar_t__ nRight; } ;
typedef TYPE_2__ Level ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_2__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(lsm_db *VAR_0){
  Level *VAR_1 = FUNC_1(VAR_0->pWorker);

  if( FUNC_0(VAR_0) ) return 1;
  if( VAR_1 && VAR_1->iAge==0
   && (VAR_1->nRight || FUNC_2(VAR_1)>=VAR_0->nMerge)
  ){
    return 1;
  }
  return 0;
}
