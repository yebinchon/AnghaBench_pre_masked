
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * pParse; } ;
typedef TYPE_1__ Walker ;
struct TYPE_9__ {int pWinDefn; int pLimit; int pOrderBy; int pHaving; int pGroupBy; int pWhere; int pEList; } ;
typedef TYPE_2__ Select ;
typedef int Parse ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

int FUNC_4(Walker *VAR_3, Select *VAR_4){
  if( FUNC_2(VAR_3, VAR_4->pEList) ) return VAR_1;
  if( FUNC_1(VAR_3, VAR_4->pWhere) ) return VAR_1;
  if( FUNC_2(VAR_3, VAR_4->pGroupBy) ) return VAR_1;
  if( FUNC_1(VAR_3, VAR_4->pHaving) ) return VAR_1;
  if( FUNC_2(VAR_3, VAR_4->pOrderBy) ) return VAR_1;
  if( FUNC_1(VAR_3, VAR_4->pLimit) ) return VAR_1;

  {
    Parse *VAR_5 = VAR_3->pParse;
    if( VAR_5 && VAR_0 ){
      int VAR_6 = FUNC_3(VAR_3, VAR_4->pWinDefn);
      FUNC_0( VAR_6==VAR_2 );
      return VAR_6;
    }
  }

  return VAR_2;
}
