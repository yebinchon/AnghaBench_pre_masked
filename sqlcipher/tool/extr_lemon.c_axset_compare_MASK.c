
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axset {int nAction; int iOrder; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1){
  struct axset *VAR_2 = (struct axset*)VAR_0;
  struct axset *VAR_3 = (struct axset*)VAR_1;
  int VAR_4;
  VAR_4 = VAR_3->nAction - VAR_2->nAction;
  if( VAR_4==0 ){
    VAR_4 = VAR_2->iOrder - VAR_3->iOrder;
  }
  FUNC_0( VAR_4!=0 || VAR_2==VAR_3 );
  return VAR_4;
}
