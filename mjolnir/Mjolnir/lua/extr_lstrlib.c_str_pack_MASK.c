
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_Unsigned ;
typedef int lua_State ;
typedef scalar_t__ lua_Number ;
typedef int lua_Integer ;
typedef int luaL_Buffer ;
struct TYPE_6__ {float f; double d; int buff; scalar_t__ n; } ;
struct TYPE_5__ {int islittle; } ;
typedef int KOption ;
typedef TYPE_1__ Header ;
typedef TYPE_2__ Ftypes ;
 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int,int ) ;
 int FUNC_1 (TYPE_1__*,size_t,char const**,int*,int*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,char) ;
 int FUNC_4 (int *,char const*,size_t) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int,int,char*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int) ;
 char* FUNC_9 (int *,int,size_t*) ;
 scalar_t__ FUNC_10 (int *,int) ;
 char* FUNC_11 (int *,int) ;
 char* FUNC_12 (int *,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int,int ,int,int) ;
 size_t FUNC_16 (char const*) ;

__attribute__((used)) static int FUNC_17 (lua_State *VAR_3) {
  luaL_Buffer VAR_4;
  Header VAR_5;
  const char *VAR_6 = FUNC_11(VAR_3, 1);
  int VAR_7 = 1;
  size_t VAR_8 = 0;
  FUNC_2(VAR_3, &VAR_5);
  FUNC_14(VAR_3);
  FUNC_7(VAR_3, &VAR_4);
  while (*VAR_6 != '\0') {
    int VAR_9, VAR_10;
    KOption VAR_11 = FUNC_1(&VAR_5, VAR_8, &VAR_6, &VAR_9, &VAR_10);
    VAR_8 += VAR_10 + VAR_9;
    while (VAR_10-- > 0)
     FUNC_3(&VAR_4, VAR_0);
    VAR_7++;
    switch (VAR_11) {
      case 134: {
        lua_Integer VAR_12 = FUNC_8(VAR_3, VAR_7);
        if (VAR_9 < VAR_2) {
          lua_Integer VAR_13 = (lua_Integer)1 << ((VAR_9 * VAR_1) - 1);
          FUNC_6(VAR_3, -VAR_13 <= VAR_12 && VAR_12 < VAR_13, VAR_7, "integer overflow");
        }
        FUNC_15(&VAR_4, (lua_Unsigned)VAR_12, VAR_5.islittle, VAR_9, (VAR_12 < 0));
        break;
      }
      case 129: {
        lua_Integer VAR_14 = FUNC_8(VAR_3, VAR_7);
        if (VAR_9 < VAR_2)
          FUNC_6(VAR_3, (lua_Unsigned)VAR_14 < ((lua_Unsigned)1 << (VAR_9 * VAR_1)),
                           VAR_7, "unsigned overflow");
        FUNC_15(&VAR_4, (lua_Unsigned)VAR_14, VAR_5.islittle, VAR_9, 0);
        break;
      }
      case 135: {
        volatile Ftypes VAR_15;
        char *VAR_16 = FUNC_12(&VAR_4, VAR_9);
        lua_Number VAR_17 = FUNC_10(VAR_3, VAR_7);
        if (VAR_9 == sizeof(VAR_15.f)) VAR_15.f = (float)VAR_17;
        else if (VAR_9 == sizeof(VAR_15.d)) VAR_15.d = (double)VAR_17;
        else VAR_15.n = VAR_17;

        FUNC_0(VAR_16, VAR_15.buff, VAR_9, VAR_5.islittle);
        FUNC_5(&VAR_4, VAR_9);
        break;
      }
      case 136: {
        size_t VAR_18;
        const char *VAR_19 = FUNC_9(VAR_3, VAR_7, &VAR_18);
        FUNC_6(VAR_3, VAR_18 <= (size_t)VAR_9, VAR_7,
                         "string longer than given size");
        FUNC_4(&VAR_4, VAR_19, VAR_18);
        while (VAR_18++ < (size_t)VAR_9)
          FUNC_3(&VAR_4, VAR_0);
        break;
      }
      case 130: {
        size_t VAR_20;
        const char *VAR_21 = FUNC_9(VAR_3, VAR_7, &VAR_20);
        FUNC_6(VAR_3, VAR_9 >= (int)sizeof(size_t) ||
                         VAR_20 < ((size_t)1 << (VAR_9 * VAR_1)),
                         VAR_7, "string length does not fit in given size");
        FUNC_15(&VAR_4, (lua_Unsigned)VAR_20, VAR_5.islittle, VAR_9, 0);
        FUNC_4(&VAR_4, VAR_21, VAR_20);
        VAR_8 += VAR_20;
        break;
      }
      case 128: {
        size_t VAR_22;
        const char *VAR_23 = FUNC_9(VAR_3, VAR_7, &VAR_22);
        FUNC_6(VAR_3, FUNC_16(VAR_23) == VAR_22, VAR_7, "string contains zeros");
        FUNC_4(&VAR_4, VAR_23, VAR_22);
        FUNC_3(&VAR_4, '\0');
        VAR_8 += VAR_22 + 1;
        break;
      }
      case 131: FUNC_3(&VAR_4, VAR_0);
      case 132: case 133:
        VAR_7--;
        break;
    }
  }
  FUNC_13(&VAR_4);
  return 1;
}
