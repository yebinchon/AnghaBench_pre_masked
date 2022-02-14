
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pStruct; scalar_t__ iStructVersion; } ;
typedef TYPE_1__ Fts5Index ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(Fts5Index *VAR_0){
  FUNC_0( VAR_0->pStruct==0 || VAR_0->iStructVersion!=0 );
  if( FUNC_1(VAR_0)!=VAR_0->iStructVersion ){
    FUNC_3(VAR_0);
  }
  return FUNC_2(VAR_0);
}
