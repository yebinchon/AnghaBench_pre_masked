
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nPendingData; int pHash; } ;
typedef TYPE_1__ Fts5Index ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(Fts5Index *VAR_0){

  if( VAR_0->nPendingData ){
    FUNC_0( VAR_0->pHash );
    VAR_0->nPendingData = 0;
    FUNC_1(VAR_0);
  }
}
