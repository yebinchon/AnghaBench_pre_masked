
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int list_ref; int err_cb_ref; int sync_cb_ref; int pcb; int timer; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4 (lua_State *VAR_2)
{
  FUNC_2 (&VAR_1->timer);
  FUNC_3 (VAR_1->pcb);
  FUNC_1 (VAR_2, VAR_0, VAR_1->sync_cb_ref);
  FUNC_1 (VAR_2, VAR_0, VAR_1->err_cb_ref);
  FUNC_1 (VAR_2, VAR_0, VAR_1->list_ref);
  FUNC_0 (VAR_1);
  VAR_1 = 0;
}
