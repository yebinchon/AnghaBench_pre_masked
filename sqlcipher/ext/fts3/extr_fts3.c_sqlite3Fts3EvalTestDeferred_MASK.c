
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int pExpr; scalar_t__ pDeferred; } ;
typedef TYPE_1__ Fts3Cursor ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(Fts3Cursor *VAR_1, int *VAR_2){
  int VAR_3 = *VAR_2;
  int VAR_4 = 0;
  if( VAR_3==VAR_0 ){







    if( VAR_1->pDeferred ){
      VAR_3 = FUNC_0(0, VAR_1);
      if( VAR_3==VAR_0 ){
        VAR_3 = FUNC_2(VAR_1);
      }
    }
    VAR_4 = (0==FUNC_1(VAR_1, VAR_1->pExpr, &VAR_3));


    FUNC_3(VAR_1);
    *VAR_2 = VAR_3;
  }
  return (VAR_3==VAR_0 && VAR_4);
}
