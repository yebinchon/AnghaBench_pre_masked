
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {scalar_t__ running; int os_t; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,int ) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_2(lua_State* VAR_2) {
  FUNC_0(VAR_2, VAR_1 != ((void*)0), 1, VAR_0);
  if (VAR_1 != ((void*)0)) {
    FUNC_1(&(VAR_1->os_t));
    VAR_1->running = 0;
  }
  return 0;
}
