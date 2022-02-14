
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_9__ {TYPE_1__* drv; } ;
struct TYPE_8__ {int isr_throttled; int cb_stopped_ref; int self_ref; TYPE_2__* bufs; } ;
struct TYPE_7__ {int empty; } ;
struct TYPE_6__ {int (* stop ) (TYPE_3__*) ;} ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (int *,int ,int ,int ) ;
 TYPE_4__* VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_3( lua_State *VAR_3 )
{
  FUNC_0();


  VAR_1->isr_throttled = -1;

  VAR_2->drv->stop( VAR_1 );


  VAR_1->bufs[0].empty = VAR_1->bufs[1].empty = VAR_0;

  FUNC_1( VAR_3, VAR_1->self_ref, VAR_1->cb_stopped_ref, 0 );

  return 0;
}
