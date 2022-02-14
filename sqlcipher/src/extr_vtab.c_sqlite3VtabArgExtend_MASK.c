
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int n; int * z; } ;
typedef TYPE_1__ Token ;
struct TYPE_6__ {TYPE_1__ sArg; } ;
typedef TYPE_2__ Parse ;


 int FUNC_0 (int) ;

void FUNC_1(Parse *VAR_0, Token *VAR_1){
  Token *VAR_2 = &VAR_0->sArg;
  if( VAR_2->z==0 ){
    VAR_2->z = VAR_1->z;
    VAR_2->n = VAR_1->n;
  }else{
    FUNC_0(VAR_2->z <= VAR_1->z);
    VAR_2->n = (int)(&VAR_1->z[VAR_1->n] - VAR_2->z);
  }
}
