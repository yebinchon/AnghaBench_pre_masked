
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int nColumn; struct TYPE_8__* azContentColumn; struct TYPE_8__* azColumn; TYPE_3__* pTokenizer; int ** pFulltextStatements; } ;
typedef TYPE_2__ fulltext_vtab ;
struct TYPE_9__ {TYPE_1__* pModule; } ;
struct TYPE_7__ {int (* xDestroy ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_5(fulltext_vtab *VAR_1){
  int VAR_2, VAR_3;

  FUNC_0(("FTS1 Destroy %p\n", VAR_1));
  for( VAR_2=0; VAR_2<VAR_0; VAR_2++ ){
    if( VAR_1->pFulltextStatements[VAR_2]!=((void*)0) ){
      FUNC_2(VAR_1->pFulltextStatements[VAR_2]);
      VAR_1->pFulltextStatements[VAR_2] = ((void*)0);
    }
  }

  if( VAR_1->pTokenizer!=((void*)0) ){
    VAR_1->pTokenizer->pModule->xDestroy(VAR_1->pTokenizer);
    VAR_1->pTokenizer = ((void*)0);
  }

  FUNC_1(VAR_1->azColumn);
  for(VAR_3 = 0; VAR_3 < VAR_1->nColumn; ++VAR_3) {
    FUNC_3(VAR_1->azContentColumn[VAR_3]);
  }
  FUNC_1(VAR_1->azContentColumn);
  FUNC_1(VAR_1);
}
