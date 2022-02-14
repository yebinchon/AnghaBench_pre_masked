
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_5__ {TYPE_3__* pFKey; } ;
typedef TYPE_1__ Table ;
struct TYPE_7__ {scalar_t__ isDeferred; } ;
struct TYPE_6__ {TYPE_1__* pNewTable; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ FKey ;


 int FUNC_0 (int) ;

void FUNC_1(Parse *VAR_0, int VAR_1){

  Table *VAR_2;
  FKey *VAR_3;
  if( (VAR_2 = VAR_0->pNewTable)==0 || (VAR_3 = VAR_2->pFKey)==0 ) return;
  FUNC_0( VAR_1==0 || VAR_1==1 );
  VAR_3->isDeferred = (u8)VAR_1;

}
