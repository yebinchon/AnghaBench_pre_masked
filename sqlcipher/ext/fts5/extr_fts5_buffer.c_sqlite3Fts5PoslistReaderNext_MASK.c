
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bEof; int iPos; int i; int n; int a; } ;
typedef TYPE_1__ Fts5PoslistReader ;


 scalar_t__ FUNC_0 (int ,int ,int *,int *) ;

int FUNC_1(Fts5PoslistReader *VAR_0){
  if( FUNC_0(VAR_0->a, VAR_0->n, &VAR_0->i, &VAR_0->iPos) ){
    VAR_0->bEof = 1;
  }
  return VAR_0->bEof;
}
