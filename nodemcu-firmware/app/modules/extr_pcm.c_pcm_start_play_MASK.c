
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8 ;
typedef scalar_t__ task_param_t ;
struct TYPE_8__ {scalar_t__ isr_throttled; } ;
struct TYPE_7__ {TYPE_3__ cfg; TYPE_1__* drv; } ;
typedef TYPE_2__ pud_t ;
typedef int lua_State ;
typedef TYPE_3__ cfg_t ;
struct TYPE_6__ {int (* play ) (TYPE_3__*) ;int (* stop ) (TYPE_3__*) ;} ;


 int FUNC_0 (int *,char*) ;
 int * FUNC_1 () ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_4( task_param_t VAR_0, uint8 VAR_1 )
{
  lua_State *VAR_2 = FUNC_1();
  pud_t *VAR_3 = (pud_t *)VAR_0;
  cfg_t *VAR_4 = &(VAR_3->cfg);


  VAR_3->drv->stop( VAR_4 );

  if (!VAR_3->drv->play( VAR_4 )) {
      FUNC_0( VAR_2, "pcm driver start" );
  }


  VAR_3->cfg.isr_throttled = 0;
}
