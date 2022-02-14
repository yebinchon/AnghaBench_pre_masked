
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int lua_State ;
struct TYPE_2__ {int speed; int mode_delay; } ;


 char* VAR_0 ;
 int FUNC_0 (int *,int,int,char*) ;
 int FUNC_1 (int *,int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_2(lua_State* VAR_2) {
  uint8_t VAR_3 = FUNC_1(VAR_2, 1);
  FUNC_0(VAR_2, VAR_1 != ((void*)0), 1, VAR_0);
  FUNC_0(VAR_2, VAR_3 >= 0 && VAR_3 <= 255, 1, "should be a 0-255");
  VAR_1->speed = VAR_3;
  VAR_1->mode_delay = 10;
  return 0;
}
