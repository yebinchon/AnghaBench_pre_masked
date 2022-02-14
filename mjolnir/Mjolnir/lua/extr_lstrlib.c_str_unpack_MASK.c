
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
typedef int lua_Number ;
typedef size_t lua_Integer ;
struct TYPE_6__ {int n; int d; int f; int buff; } ;
struct TYPE_5__ {int islittle; } ;
typedef int KOption ;
typedef TYPE_1__ Header ;
typedef TYPE_2__ Ftypes ;
 int FUNC_0 (int ,char const*,int,int ) ;
 int FUNC_1 (TYPE_1__*,size_t,char const**,int*,int*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,int,int,char*) ;
 int FUNC_4 (int *,int,char*) ;
 char* FUNC_5 (int *,int,size_t*) ;
 int FUNC_6 (int *,int,char*) ;
 char* FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int,int) ;
 int FUNC_9 (int *,size_t) ;
 int FUNC_10 (int *,char const*,size_t) ;
 int FUNC_11 (int *,int ) ;
 scalar_t__ FUNC_12 (int ,size_t) ;
 scalar_t__ FUNC_13 (char const*) ;
 size_t FUNC_14 (int *,char const*,int ,int,int) ;

__attribute__((used)) static int FUNC_15 (lua_State *VAR_0) {
  Header VAR_1;
  const char *VAR_2 = FUNC_7(VAR_0, 1);
  size_t VAR_3;
  const char *VAR_4 = FUNC_5(VAR_0, 2, &VAR_3);
  size_t VAR_5 = (size_t)FUNC_12(FUNC_8(VAR_0, 3, 1), VAR_3) - 1;
  int VAR_6 = 0;
  FUNC_3(VAR_0, VAR_5 <= VAR_3, 3, "initial position out of string");
  FUNC_2(VAR_0, &VAR_1);
  while (*VAR_2 != '\0') {
    int VAR_7, VAR_8;
    KOption VAR_9 = FUNC_1(&VAR_1, VAR_5, &VAR_2, &VAR_7, &VAR_8);
    if ((size_t)VAR_8 + VAR_7 > ~VAR_5 || VAR_5 + VAR_8 + VAR_7 > VAR_3)
      FUNC_4(VAR_0, 2, "data string too short");
    VAR_5 += VAR_8;

    FUNC_6(VAR_0, 2, "too many results");
    VAR_6++;
    switch (VAR_9) {
      case 134:
      case 129: {
        lua_Integer VAR_10 = FUNC_14(VAR_0, VAR_4 + VAR_5, VAR_1.islittle, VAR_7,
                                       (VAR_9 == 134));
        FUNC_9(VAR_0, VAR_10);
        break;
      }
      case 135: {
        volatile Ftypes VAR_11;
        lua_Number VAR_12;
        FUNC_0(VAR_11.buff, VAR_4 + VAR_5, VAR_7, VAR_1.islittle);
        if (VAR_7 == sizeof(VAR_11.f)) VAR_12 = (lua_Number)VAR_11.f;
        else if (VAR_7 == sizeof(VAR_11.d)) VAR_12 = (lua_Number)VAR_11.d;
        else VAR_12 = VAR_11.n;
        FUNC_11(VAR_0, VAR_12);
        break;
      }
      case 136: {
        FUNC_10(VAR_0, VAR_4 + VAR_5, VAR_7);
        break;
      }
      case 130: {
        size_t VAR_13 = (size_t)FUNC_14(VAR_0, VAR_4 + VAR_5, VAR_1.islittle, VAR_7, 0);
        FUNC_3(VAR_0, VAR_5 + VAR_13 + VAR_7 <= VAR_3, 2, "data string too short");
        FUNC_10(VAR_0, VAR_4 + VAR_5 + VAR_7, VAR_13);
        VAR_5 += VAR_13;
        break;
      }
      case 128: {
        size_t VAR_14 = (int)FUNC_13(VAR_4 + VAR_5);
        FUNC_10(VAR_0, VAR_4 + VAR_5, VAR_14);
        VAR_5 += VAR_14 + 1;
        break;
      }
      case 132: case 131: case 133:
        VAR_6--;
        break;
    }
    VAR_5 += VAR_7;
  }
  FUNC_9(VAR_0, VAR_5 + 1);
  return VAR_6 + 1;
}
