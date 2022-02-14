
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {TYPE_1__* bufs; int self_ref; int cb_vu_ref; int cb_stopped_ref; int cb_paused_ref; int cb_drained_ref; int cb_data_ref; } ;
struct TYPE_3__ {int * data; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3( lua_State *VAR_1 )
{
  FUNC_0();

  FUNC_1( VAR_0->cb_data_ref );
  FUNC_1( VAR_0->cb_drained_ref );
  FUNC_1( VAR_0->cb_paused_ref );
  FUNC_1( VAR_0->cb_stopped_ref );
  FUNC_1( VAR_0->cb_vu_ref );
  FUNC_1( VAR_0->self_ref );

  if (VAR_0->bufs[0].data) {
    FUNC_2( VAR_0->bufs[0].data );
    VAR_0->bufs[0].data = ((void*)0);
  }
  if (VAR_0->bufs[1].data) {
    FUNC_2( VAR_0->bufs[1].data );
    VAR_0->bufs[1].data = ((void*)0);
  }

  return 0;
}
