
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pArg; int (* xShutdown ) (int ) ;} ;
struct TYPE_4__ {TYPE_1__ pcache2; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ) ;

void FUNC_1(void){
  if( VAR_0.pcache2.xShutdown ){

    VAR_0.pcache2.xShutdown(VAR_0.pcache2.pArg);
  }
}
