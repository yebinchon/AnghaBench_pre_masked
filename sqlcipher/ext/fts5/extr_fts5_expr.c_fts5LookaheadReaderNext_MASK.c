
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ iPos; scalar_t__ iLookahead; int i; int n; int a; } ;
typedef TYPE_1__ Fts5LookaheadReader ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(Fts5LookaheadReader *VAR_1){
  VAR_1->iPos = VAR_1->iLookahead;
  if( FUNC_0(VAR_1->a, VAR_1->n, &VAR_1->i, &VAR_1->iLookahead) ){
    VAR_1->iLookahead = VAR_0;
  }
  return (VAR_1->iPos==VAR_0);
}
