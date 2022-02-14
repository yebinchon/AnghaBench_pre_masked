
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nPendingData; int pendingTerms; } ;
typedef TYPE_1__ fulltext_vtab ;
typedef int fts2HashElem ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(fulltext_vtab *VAR_1){
  if( VAR_1->nPendingData>=0 ){
    fts2HashElem *VAR_2;
    for(VAR_2=FUNC_3(&VAR_1->pendingTerms); VAR_2; VAR_2=FUNC_4(VAR_2)){
      FUNC_0(FUNC_2(VAR_2));
    }
    FUNC_1(&VAR_1->pendingTerms);
    VAR_1->nPendingData = -1;
  }
  return VAR_0;
}
