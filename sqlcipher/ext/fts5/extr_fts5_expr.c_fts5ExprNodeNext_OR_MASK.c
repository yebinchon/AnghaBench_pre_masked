
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_5__ {int nChild; scalar_t__ bEof; scalar_t__ bNomatch; int iRowid; struct TYPE_5__** apChild; } ;
typedef TYPE_1__ Fts5ExprNode ;
typedef int Fts5Expr ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_1__*,int,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_4(
  Fts5Expr *VAR_1,
  Fts5ExprNode *VAR_2,
  int VAR_3,
  i64 VAR_4
){
  int VAR_5;
  i64 VAR_6 = VAR_2->iRowid;

  for(VAR_5=0; VAR_5<VAR_2->nChild; VAR_5++){
    Fts5ExprNode *VAR_7 = VAR_2->apChild[VAR_5];
    FUNC_0( VAR_7->bEof || FUNC_3(VAR_1, VAR_7->iRowid, VAR_6)>=0 );
    if( VAR_7->bEof==0 ){
      if( (VAR_7->iRowid==VAR_6)
       || (VAR_3 && FUNC_3(VAR_1, VAR_7->iRowid, VAR_4)<0)
      ){
        int VAR_8 = FUNC_1(VAR_1, VAR_7, VAR_3, VAR_4);
        if( VAR_8!=VAR_0 ){
          VAR_2->bNomatch = 0;
          return VAR_8;
        }
      }
    }
  }

  FUNC_2(VAR_1, VAR_2);
  return VAR_0;
}
