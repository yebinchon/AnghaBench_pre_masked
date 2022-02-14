
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ pVtab; } ;
struct TYPE_11__ {int pExpr; TYPE_1__ base; } ;
struct TYPE_10__ {scalar_t__ bFts4; } ;
typedef int Fts3TokenAndCost ;
typedef TYPE_2__ Fts3Table ;
typedef int Fts3Expr ;
typedef TYPE_3__ Fts3Cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,int*,int*,int*) ;
 int FUNC_1 (TYPE_3__*,int *,int *,int) ;
 int FUNC_2 (TYPE_3__*,int ,int*) ;
 int FUNC_3 (TYPE_3__*,int ,int ,int **,int ***,int*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(Fts3Cursor *VAR_2){
  Fts3Table *VAR_3 = (Fts3Table *)VAR_2->base.pVtab;
  int VAR_4 = VAR_1;
  int VAR_5 = 0;
  int VAR_6 = 0;


  FUNC_0(VAR_2, VAR_2->pExpr, &VAR_5, &VAR_6, &VAR_4);



  if( VAR_4==VAR_1 && VAR_5>1 && VAR_3->bFts4 ){
    Fts3TokenAndCost *VAR_7;
    Fts3Expr **VAR_8;
    VAR_7 = (Fts3TokenAndCost *)FUNC_5(
        sizeof(Fts3TokenAndCost) * VAR_5
      + sizeof(Fts3Expr *) * VAR_6 * 2
    );
    VAR_8 = (Fts3Expr **)&VAR_7[VAR_5];

    if( !VAR_7 ){
      VAR_4 = VAR_0;
    }else{
      int VAR_9;
      Fts3TokenAndCost *VAR_10 = VAR_7;
      Fts3Expr **VAR_11 = VAR_8;

      FUNC_3(VAR_2, 0, VAR_2->pExpr, &VAR_10, &VAR_11, &VAR_4);
      VAR_5 = (int)(VAR_10-VAR_7);
      VAR_6 = (int)(VAR_11-VAR_8);

      if( VAR_4==VAR_1 ){
        VAR_4 = FUNC_1(VAR_2, 0, VAR_7, VAR_5);
        for(VAR_9=0; VAR_4==VAR_1 && VAR_9<VAR_6; VAR_9++){
          VAR_4 = FUNC_1(VAR_2, VAR_8[VAR_9], VAR_7, VAR_5);
        }
      }

      FUNC_4(VAR_7);
    }
  }


  FUNC_2(VAR_2, VAR_2->pExpr, &VAR_4);
  return VAR_4;
}
