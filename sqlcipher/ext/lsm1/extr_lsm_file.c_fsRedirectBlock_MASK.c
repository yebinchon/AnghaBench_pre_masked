
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int n; TYPE_1__* a; } ;
struct TYPE_4__ {int iFrom; int iTo; } ;
typedef TYPE_2__ Redirect ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(Redirect *VAR_0, int VAR_1){
  if( VAR_0 ){
    int VAR_2;
    for(VAR_2=0; VAR_2<VAR_0->n; VAR_2++){
      if( VAR_1==VAR_0->a[VAR_2].iFrom ) return VAR_0->a[VAR_2].iTo;
    }
  }
  FUNC_0( VAR_1!=0 );
  return VAR_1;
}
