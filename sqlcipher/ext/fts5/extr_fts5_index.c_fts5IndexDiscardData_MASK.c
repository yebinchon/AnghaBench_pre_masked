
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nPendingData; scalar_t__ pHash; } ;
typedef TYPE_1__ Fts5Index ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(Fts5Index *VAR_0){
  FUNC_0( VAR_0->pHash || VAR_0->nPendingData==0 );
  if( VAR_0->pHash ){
    FUNC_1(VAR_0->pHash);
    VAR_0->nPendingData = 0;
  }
}
