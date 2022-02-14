
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pArg; int (* xShutdown ) (int ) ;} ;
struct TYPE_4__ {scalar_t__ pcache_init; TYPE_1__ pcache; } ;


 int FUNC_0 (int ) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void FUNC_1(void *VAR_1){
  VAR_0.pcache.xShutdown(VAR_0.pcache.pArg);
  VAR_0.pcache_init = 0;
}
