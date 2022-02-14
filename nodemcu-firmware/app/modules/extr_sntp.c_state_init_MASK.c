
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int server_pos; int last_server_pos; int pcb; void* list_ref; void* err_cb_ref; void* sync_cb_ref; } ;
typedef TYPE_1__ sntp_state_t ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int *) ;

__attribute__((used)) static char *FUNC_5(lua_State *VAR_5) {
  VAR_4 = (sntp_state_t *)FUNC_0 (sizeof (sntp_state_t));
  if (!VAR_4)
    return ("out of memory");

  FUNC_1 (VAR_4, 0, sizeof (sntp_state_t));

  VAR_4->sync_cb_ref = VAR_2;
  VAR_4->err_cb_ref = VAR_2;
  VAR_4->list_ref = VAR_2;

  VAR_4->pcb = FUNC_3 ();
  if (!VAR_4->pcb)
    return ("out of memory");

  if (FUNC_2 (VAR_4->pcb, VAR_1, 0) != VAR_0)
    return ("no port available");

  FUNC_4 (VAR_4->pcb, VAR_3, VAR_5);

  VAR_4->server_pos = -1;
  VAR_4->last_server_pos = -1;

  return ((void*)0);
}
