
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ eFrmType; scalar_t__ eStart; scalar_t__ eEnd; scalar_t__ eExclude; int pOrderBy; int pPartition; int pEnd; int pStart; } ;
typedef TYPE_1__ Window ;
typedef int Parse ;


 scalar_t__ FUNC_0 (int *,int ,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;

int FUNC_2(Parse *VAR_0, Window *VAR_1, Window *VAR_2){
  if( VAR_1->eFrmType!=VAR_2->eFrmType ) return 1;
  if( VAR_1->eStart!=VAR_2->eStart ) return 1;
  if( VAR_1->eEnd!=VAR_2->eEnd ) return 1;
  if( VAR_1->eExclude!=VAR_2->eExclude ) return 1;
  if( FUNC_0(VAR_0, VAR_1->pStart, VAR_2->pStart, -1) ) return 1;
  if( FUNC_0(VAR_0, VAR_1->pEnd, VAR_2->pEnd, -1) ) return 1;
  if( FUNC_1(VAR_1->pPartition, VAR_2->pPartition, -1) ) return 1;
  if( FUNC_1(VAR_1->pOrderBy, VAR_2->pOrderBy, -1) ) return 1;
  return 0;
}
