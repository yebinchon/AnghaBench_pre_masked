
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int bEof; scalar_t__ xNext; int nChild; int eType; struct TYPE_7__** apChild; int iRowid; scalar_t__ bNomatch; } ;
typedef TYPE_1__ Fts5ExprNode ;
typedef int Fts5Expr ;



 int VAR_0 ;

 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(Fts5Expr *VAR_2, Fts5ExprNode *VAR_3){
  int VAR_4 = VAR_1;
  VAR_3->bEof = 0;
  VAR_3->bNomatch = 0;

  if( FUNC_0(VAR_3) ){

    VAR_4 = FUNC_2(VAR_2, VAR_3);
  }else if( VAR_3->xNext==0 ){
    VAR_3->bEof = 1;
  }else{
    int VAR_5;
    int VAR_6 = 0;
    for(VAR_5=0; VAR_5<VAR_3->nChild && VAR_4==VAR_1; VAR_5++){
      Fts5ExprNode *VAR_7 = VAR_3->apChild[VAR_5];
      VAR_4 = FUNC_5(VAR_2, VAR_3->apChild[VAR_5]);
      FUNC_1( VAR_7->bEof==0 || VAR_7->bEof==1 );
      VAR_6 += VAR_7->bEof;
    }
    VAR_3->iRowid = VAR_3->apChild[0]->iRowid;

    switch( VAR_3->eType ){
      case 129:
        if( VAR_6>0 ) FUNC_4(VAR_3);
        break;

      case 128:
        if( VAR_3->nChild==VAR_6 ) FUNC_4(VAR_3);
        break;

      default:
        FUNC_1( VAR_3->eType==VAR_0 );
        VAR_3->bEof = VAR_3->apChild[0]->bEof;
        break;
    }
  }

  if( VAR_4==VAR_1 ){
    VAR_4 = FUNC_3(VAR_2, VAR_3);
  }
  return VAR_4;
}
