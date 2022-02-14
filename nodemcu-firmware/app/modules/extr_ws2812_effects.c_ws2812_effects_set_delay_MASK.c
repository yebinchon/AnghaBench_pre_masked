
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {int mode_delay; scalar_t__ speed; } ;


 char* VAR_0 ;
 int FUNC_0 (int *,int,int,char*) ;
 int FUNC_1 (int *,int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_2(lua_State* VAR_2) {
  FUNC_0(VAR_2, VAR_1 != ((void*)0), 1, VAR_0);
  const int VAR_3 = FUNC_1(VAR_2, 1);
  FUNC_0(VAR_2, VAR_3 >= 10, 1, "must be equal / larger than 10");

  VAR_1->mode_delay = VAR_3;
  VAR_1->speed = 0;
  return 1;
}
