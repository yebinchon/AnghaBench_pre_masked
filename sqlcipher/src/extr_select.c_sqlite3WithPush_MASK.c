
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_5__ {struct TYPE_5__* pOuter; } ;
typedef TYPE_1__ With ;
struct TYPE_6__ {TYPE_1__* pWithToFree; TYPE_1__* pWith; } ;
typedef TYPE_2__ Parse ;


 int FUNC_0 (int) ;

void FUNC_1(Parse *VAR_0, With *VAR_1, u8 VAR_2){
  FUNC_0( VAR_2==0 || (VAR_0->pWith==0 && VAR_0->pWithToFree==0) );
  if( VAR_1 ){
    FUNC_0( VAR_0->pWith!=VAR_1 );
    VAR_1->pOuter = VAR_0->pWith;
    VAR_0->pWith = VAR_1;
    if( VAR_2 ) VAR_0->pWithToFree = VAR_1;
  }
}
