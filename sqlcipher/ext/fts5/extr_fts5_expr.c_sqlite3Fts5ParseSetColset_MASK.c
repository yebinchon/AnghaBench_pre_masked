
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int zErr; int rc; TYPE_1__* pConfig; } ;
struct TYPE_5__ {scalar_t__ eDetail; } ;
typedef TYPE_2__ Fts5Parse ;
typedef int Fts5ExprNode ;
typedef int Fts5Colset ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int *,int *,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;

void FUNC_3(
  Fts5Parse *VAR_2,
  Fts5ExprNode *VAR_3,
  Fts5Colset *VAR_4
){
  Fts5Colset *VAR_5 = VAR_4;
  if( VAR_2->pConfig->eDetail==VAR_0 ){
    VAR_2->rc = VAR_1;
    VAR_2->zErr = FUNC_2(
      "fts5: column queries are not supported (detail=none)"
    );
  }else{
    FUNC_0(VAR_2, VAR_3, VAR_4, &VAR_5);
  }
  FUNC_1(VAR_5);
}
