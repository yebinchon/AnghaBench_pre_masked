
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nFrom; int a; } ;
typedef TYPE_1__ EditDist3Cost ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(EditDist3Cost *VAR_0, EditDist3Cost *VAR_1){
  int VAR_2 = VAR_0->nFrom;
  int VAR_3;
  if( VAR_2>VAR_1->nFrom ) VAR_2 = VAR_1->nFrom;
  VAR_3 = FUNC_0(VAR_0->a, VAR_1->a, VAR_2);
  if( VAR_3==0 ) VAR_3 = VAR_0->nFrom - VAR_1->nFrom;
  return VAR_3;
}
