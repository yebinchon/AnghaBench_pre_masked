
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ eType; scalar_t__ pPhrase; struct TYPE_4__* aMI; } ;
typedef TYPE_1__ Fts3Expr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(Fts3Expr *VAR_1){
  FUNC_0( VAR_1->eType==VAR_0 || VAR_1->pPhrase==0 );
  FUNC_1(VAR_1->pPhrase);
  FUNC_2(VAR_1->aMI);
  FUNC_2(VAR_1);
}
