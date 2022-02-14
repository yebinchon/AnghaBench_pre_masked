
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ nPendingData; int pendingTerms; } ;
typedef TYPE_1__ fulltext_vtab ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_2(fulltext_vtab *VAR_1){
  if( VAR_1->nPendingData>=0 ){
    int VAR_2 = FUNC_1(VAR_1, &VAR_1->pendingTerms);
    if( VAR_2==VAR_0 ) FUNC_0(VAR_1);
    return VAR_2;
  }
  return VAR_0;
}
