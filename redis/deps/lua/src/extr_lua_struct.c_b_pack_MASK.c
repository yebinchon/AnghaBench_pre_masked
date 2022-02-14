
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
typedef int luaL_Buffer ;
struct TYPE_5__ {int endian; } ;
typedef TYPE_1__ Header ;


 int FUNC_0 (int *,int,char const**,TYPE_1__*) ;
 int FUNC_1 (char*,size_t,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (size_t,TYPE_1__*,int,size_t) ;
 int FUNC_4 (int *,char) ;
 int FUNC_5 (int *,char const*,size_t) ;
 int FUNC_6 (int *,int,int,char*) ;
 int FUNC_7 (int *,int *) ;
 char* FUNC_8 (int *,int ,size_t*) ;
 double FUNC_9 (int *,int ) ;
 char* FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 size_t FUNC_13 (int *,int,char const**) ;
 int FUNC_14 (int *,int *,int ,int ,size_t) ;

__attribute__((used)) static int FUNC_15 (lua_State *VAR_0) {
  luaL_Buffer VAR_1;
  const char *VAR_2 = FUNC_10(VAR_0, 1);
  Header VAR_3;
  int VAR_4 = 2;
  size_t VAR_5 = 0;
  FUNC_2(&VAR_3);
  FUNC_12(VAR_0);
  FUNC_7(VAR_0, &VAR_1);
  while (*VAR_2 != '\0') {
    int VAR_6 = *VAR_2++;
    size_t VAR_7 = FUNC_13(VAR_0, VAR_6, &VAR_2);
    int VAR_8 = FUNC_3(VAR_5, &VAR_3, VAR_6, VAR_7);
    VAR_5 += VAR_8;
    while (VAR_8-- > 0) FUNC_4(&VAR_1, '\0');
    switch (VAR_6) {
      case 'b': case 'B': case 'h': case 'H':
      case 'l': case 'L': case 'T': case 'i': case 'I': {
        FUNC_14(VAR_0, &VAR_1, VAR_4++, VAR_3.endian, VAR_7);
        break;
      }
      case 'x': {
        FUNC_4(&VAR_1, '\0');
        break;
      }
      case 'f': {
        float VAR_9 = (float)FUNC_9(VAR_0, VAR_4++);
        FUNC_1((char *)&VAR_9, VAR_7, VAR_3.endian);
        FUNC_5(&VAR_1, (char *)&VAR_9, VAR_7);
        break;
      }
      case 'd': {
        double VAR_10 = FUNC_9(VAR_0, VAR_4++);
        FUNC_1((char *)&VAR_10, VAR_7, VAR_3.endian);
        FUNC_5(&VAR_1, (char *)&VAR_10, VAR_7);
        break;
      }
      case 'c': case 's': {
        size_t VAR_11;
        const char *VAR_12 = FUNC_8(VAR_0, VAR_4++, &VAR_11);
        if (VAR_7 == 0) VAR_7 = VAR_11;
        FUNC_6(VAR_0, VAR_11 >= (size_t)VAR_7, VAR_4, "string too short");
        FUNC_5(&VAR_1, VAR_12, VAR_7);
        if (VAR_6 == 's') {
          FUNC_4(&VAR_1, '\0');
          VAR_7++;
        }
        break;
      }
      default: FUNC_0(VAR_0, VAR_6, &VAR_2, &VAR_3);
    }
    VAR_5 += VAR_7;
  }
  FUNC_11(&VAR_1);
  return 1;
}
