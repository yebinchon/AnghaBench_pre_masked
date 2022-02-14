
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_5__ {scalar_t__ ePlan; int pExpr; TYPE_1__* pSorter; } ;
struct TYPE_4__ {int iRowid; } ;
typedef TYPE_2__ Fts5Cursor ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static i64 FUNC_2(Fts5Cursor *VAR_3){
  FUNC_0( VAR_3->ePlan==VAR_0
       || VAR_3->ePlan==VAR_1
       || VAR_3->ePlan==VAR_2
  );
  if( VAR_3->pSorter ){
    return VAR_3->pSorter->iRowid;
  }else{
    return FUNC_1(VAR_3->pExpr);
  }
}
