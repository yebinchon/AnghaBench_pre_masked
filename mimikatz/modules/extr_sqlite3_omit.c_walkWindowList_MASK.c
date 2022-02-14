
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pFilter; int pPartition; int pOrderBy; struct TYPE_3__* pNextWin; } ;
typedef TYPE_1__ Window ;
typedef int Walker ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(Walker *VAR_2, Window *VAR_3){
  Window *VAR_4;
  for(VAR_4=VAR_3; VAR_4; VAR_4=VAR_4->pNextWin){
    if( FUNC_1(VAR_2, VAR_4->pOrderBy) ) return VAR_0;
    if( FUNC_1(VAR_2, VAR_4->pPartition) ) return VAR_0;
    if( FUNC_0(VAR_2, VAR_4->pFilter) ) return VAR_0;
  }
  return VAR_1;
}
