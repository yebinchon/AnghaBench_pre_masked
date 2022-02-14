
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pAppData; int (* xShutdown ) (int ) ;} ;
struct TYPE_4__ {scalar_t__ mem_init; TYPE_1__ mem; } ;


 int FUNC_0 (int ) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void FUNC_1(void *VAR_1){
  VAR_0.mem.xShutdown(VAR_0.mem.pAppData);
  VAR_0.mem_init = 0;
}
