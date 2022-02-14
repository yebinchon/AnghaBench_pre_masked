
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int n; TYPE_1__* a; } ;
struct TYPE_5__ {TYPE_2__* apSubst; TYPE_2__* apDel; } ;
typedef TYPE_2__ EditDist3FromString ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(EditDist3FromString *VAR_0){
  int VAR_1;
  if( VAR_0 ){
    for(VAR_1=0; VAR_1<VAR_0->n; VAR_1++){
      FUNC_0(VAR_0->a[VAR_1].apDel);
      FUNC_0(VAR_0->a[VAR_1].apSubst);
    }
    FUNC_0(VAR_0);
  }
}
