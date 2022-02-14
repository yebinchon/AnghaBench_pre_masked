
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
typedef int ptrdiff_t ;
struct TYPE_3__ {int* buf; } ;
typedef TYPE_1__ packet_t ;
typedef int lua_State ;
typedef int luaL_Buffer ;


 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int) ;
 TYPE_1__* FUNC_3 (int *,int,char*) ;
 int FUNC_4 (int *,int,int) ;
 char* FUNC_5 (int *,int,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static int FUNC_9(lua_State *VAR_0, int VAR_1, int VAR_2) {
  packet_t *VAR_3 = FUNC_3(VAR_0, 1, "wifi.packet");

  ptrdiff_t VAR_4 = FUNC_8(FUNC_2(VAR_0, 2), VAR_2);
  ptrdiff_t VAR_5 = FUNC_8(FUNC_4(VAR_0, 3, -1), VAR_2);
  const char *VAR_6 = FUNC_5(VAR_0, 4, "");

  if (VAR_4 < 1) VAR_4 = 1;
  if (VAR_5 > VAR_2) VAR_5 = VAR_2;
  if (VAR_4 <= VAR_5) {
    luaL_Buffer VAR_7;
    FUNC_1(VAR_0, &VAR_7);

    int VAR_8;
    for (VAR_8 = VAR_4 - 1; VAR_8 < VAR_5; VAR_8++) {
      char VAR_9[3];

      if (VAR_8 >= VAR_4) {
        FUNC_0(&VAR_7, VAR_6);
      }

      uint8 VAR_10 = VAR_3->buf[VAR_8 + VAR_1];

      VAR_9[0] = "0123456789abcdef"[VAR_10 >> 4];
      VAR_9[1] = "0123456789abcdef"[VAR_10 & 0xf];
      VAR_9[2] = 0;
      FUNC_0(&VAR_7, VAR_9);
    }

    FUNC_6(&VAR_7);
  } else {
    FUNC_7(VAR_0, "");
  }

  return 1;
}
