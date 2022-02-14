
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* tmr_t ;
typedef int timer_struct_t ;
typedef int lua_State ;
struct TYPE_2__ {int os; int mode; void* self_ref; void* lua_ref; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5( lua_State *VAR_2 ) {
 tmr_t VAR_3 = (tmr_t)FUNC_2(VAR_2, sizeof(timer_struct_t));
 if (!VAR_3) return FUNC_0(VAR_2, "not enough memory");
 FUNC_1(VAR_2, "tmr.timer");
 FUNC_3(VAR_2, -2);
 VAR_3->lua_ref = VAR_0;
 VAR_3->self_ref = VAR_0;
 VAR_3->mode = VAR_1;
 FUNC_4(&VAR_3->os);
 return 1;
}
