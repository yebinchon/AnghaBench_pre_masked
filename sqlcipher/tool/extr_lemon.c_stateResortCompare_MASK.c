
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct state {int nNtAct; int nTknAct; int statenum; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1){
  const struct state *VAR_2 = *(const struct state**)VAR_0;
  const struct state *VAR_3 = *(const struct state**)VAR_1;
  int VAR_4;

  VAR_4 = VAR_3->nNtAct - VAR_2->nNtAct;
  if( VAR_4==0 ){
    VAR_4 = VAR_3->nTknAct - VAR_2->nTknAct;
    if( VAR_4==0 ){
      VAR_4 = VAR_3->statenum - VAR_2->statenum;
    }
  }
  FUNC_0( VAR_4!=0 );
  return VAR_4;
}
