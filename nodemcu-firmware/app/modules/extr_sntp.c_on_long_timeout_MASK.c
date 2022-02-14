
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int list_ref; int err_cb_ref; int sync_cb_ref; } ;
struct TYPE_3__ {int is_on_timeout; void* list_ref; void* err_cb_ref; void* sync_cb_ref; } ;


 int VAR_0 ;
 void* FUNC_0 (int *,int ) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int ,int ) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 TYPE_1__* VAR_3 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6 (void *VAR_4)
{
  (void)VAR_4;
  FUNC_3("sntp: long timer\n");
  lua_State *VAR_5 = FUNC_1 ();
  if (!VAR_3) {
    if (!FUNC_5(VAR_5)) {

      FUNC_2(VAR_5, VAR_0, VAR_1->sync_cb_ref);
      VAR_3->sync_cb_ref = FUNC_0(VAR_5, VAR_0);
      FUNC_2(VAR_5, VAR_0, VAR_1->err_cb_ref);
      VAR_3->err_cb_ref = FUNC_0(VAR_5, VAR_0);
      if (VAR_2 == 0) {
        FUNC_2(VAR_5, VAR_0, VAR_1->list_ref);
        VAR_3->list_ref = FUNC_0(VAR_5, VAR_0);
      }
      VAR_3->is_on_timeout = 1;
      FUNC_4(VAR_5);
    }
  }
}
