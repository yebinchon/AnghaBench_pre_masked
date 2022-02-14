
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_3__ {int buf; } ;
typedef TYPE_1__ packet_t ;
typedef int lua_State ;


 int FUNC_0 (int *,int) ;
 TYPE_1__* FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(lua_State *VAR_0, int VAR_1, int VAR_2) {
  packet_t *VAR_3 = FUNC_1(VAR_0, 1, "wifi.packet");

  ptrdiff_t VAR_4 = FUNC_5(FUNC_0(VAR_0, 2), VAR_2);
  ptrdiff_t VAR_5 = FUNC_5(FUNC_2(VAR_0, 3, -1), VAR_2);

  if (VAR_4 < 1) VAR_4 = 1;
  if (VAR_5 > VAR_2) VAR_5 = VAR_2;
  if (VAR_4 <= VAR_5) {
    FUNC_4(VAR_0, VAR_3->buf+VAR_4-1 + VAR_1, VAR_5-VAR_4+1);
  } else {
    FUNC_3(VAR_0, "");
  }

  return 1;
}
