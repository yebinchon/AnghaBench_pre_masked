
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nRight; int * aRhs; int lhs; } ;
typedef int Segment ;
typedef int LsmPgno ;
typedef TYPE_1__ Level ;


 scalar_t__ FUNC_0 (int *,int *,int ,int ) ;

__attribute__((used)) static int FUNC_1(
  Level *VAR_0,
  Segment *VAR_1,
  LsmPgno VAR_2,
  LsmPgno VAR_3
){
  int VAR_4;

  if( FUNC_0(&VAR_0->lhs, VAR_1, VAR_2, VAR_3) ){
    return 1;
  }
  for(VAR_4=0; VAR_4<VAR_0->nRight; VAR_4++){
    if( FUNC_0(&VAR_0->aRhs[VAR_4], VAR_1, VAR_2, VAR_3) ){
      return 1;
    }
  }

  return 0;
}
