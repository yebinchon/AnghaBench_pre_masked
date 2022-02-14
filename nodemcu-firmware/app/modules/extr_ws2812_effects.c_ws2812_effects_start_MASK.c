
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {int running; int mode_delay; int os_t; scalar_t__ counter_mode_step; scalar_t__ counter_mode_call; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int *) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(lua_State* VAR_4) {


  FUNC_0(VAR_4, VAR_2 != ((void*)0), 1, VAR_1);
  if (VAR_2 != ((void*)0)) {
    FUNC_2(&(VAR_2->os_t));
    VAR_2->running = 1;
    VAR_2->counter_mode_call = 0;
    VAR_2->counter_mode_step = 0;

    FUNC_3(&(VAR_2->os_t), VAR_3, ((void*)0));
    FUNC_1(&(VAR_2->os_t), VAR_2->mode_delay, VAR_0);
  }
  return 0;
}
