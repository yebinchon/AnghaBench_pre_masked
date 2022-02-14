
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * buf; } ;
typedef TYPE_1__ packet_t ;
typedef int lua_State ;


 int FUNC_0 (int *,int) ;
 TYPE_1__* FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(lua_State *VAR_0, int VAR_1, int VAR_2) {
  packet_t *VAR_3 = FUNC_1(VAR_0, 1, "wifi.packet");

  int VAR_4 = FUNC_0(VAR_0, 2);

  if (VAR_4 < 1 || VAR_4 > VAR_2) {
    return 0;
  }

  FUNC_2(VAR_0, VAR_3->buf[VAR_4 - 1 + VAR_1]);

  return 1;
}
