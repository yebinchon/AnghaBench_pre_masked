
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_7__ {TYPE_1__* drv; } ;
struct TYPE_6__ {int isr_throttled; int cb_paused_ref; int self_ref; } ;
struct TYPE_5__ {int (* stop ) (TYPE_2__*) ;} ;


 int FUNC_0 () ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (int *,int ,int ,int ) ;
 TYPE_3__* VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3( lua_State *VAR_2 )
{
  FUNC_0();


  VAR_0->isr_throttled = -1;

  VAR_1->drv->stop( VAR_0 );

  FUNC_1( VAR_2, VAR_0->self_ref, VAR_0->cb_paused_ref, 0 );

  return 0;
}
