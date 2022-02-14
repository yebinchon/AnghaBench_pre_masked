
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ i64 ;
struct TYPE_11__ {TYPE_1__* pRoot; } ;
struct TYPE_10__ {scalar_t__ iRowid; scalar_t__ bEof; int bNomatch; int nChild; struct TYPE_10__** apChild; } ;
typedef TYPE_1__ Fts5ExprNode ;
typedef TYPE_2__ Fts5Expr ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(
  Fts5Expr *VAR_1,
  Fts5ExprNode *VAR_2
){
  int VAR_3;
  i64 VAR_4 = VAR_2->iRowid;
  int VAR_5 = VAR_0;
  int VAR_6;

  FUNC_0( VAR_2->bEof==0 );
  do {
    VAR_2->bNomatch = 0;
    VAR_6 = 1;
    for(VAR_3=0; VAR_3<VAR_2->nChild; VAR_3++){
      Fts5ExprNode *VAR_7 = VAR_2->apChild[VAR_3];
      int VAR_8 = FUNC_4(VAR_1, VAR_4, VAR_7->iRowid);
      if( VAR_8>0 ){

        VAR_5 = FUNC_1(VAR_1, VAR_7, 1, VAR_4);
        if( VAR_5!=VAR_0 ){
          VAR_2->bNomatch = 0;
          return VAR_5;
        }
      }





      FUNC_0( VAR_7->bEof || FUNC_4(VAR_1, VAR_4, VAR_7->iRowid)<=0 );
      if( VAR_7->bEof ){
        FUNC_3(VAR_2);
        VAR_6 = 1;
        break;
      }else if( VAR_4!=VAR_7->iRowid ){
        VAR_6 = 0;
        VAR_4 = VAR_7->iRowid;
      }

      if( VAR_7->bNomatch ){
        VAR_2->bNomatch = 1;
      }
    }
  }while( VAR_6==0 );

  if( VAR_2->bNomatch && VAR_2!=VAR_1->pRoot ){
    FUNC_2(VAR_2);
  }
  VAR_2->iRowid = VAR_4;
  return VAR_0;
}
