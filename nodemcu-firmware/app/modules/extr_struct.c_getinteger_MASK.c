
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_Number ;
typedef int Uinttype ;
typedef int Inttype ;


 int VAR_0 ;

__attribute__((used)) static lua_Number FUNC_0 (const char *VAR_1, int VAR_2,
                        int VAR_3, int VAR_4) {
  Uinttype VAR_5 = 0;
  int VAR_6;
  if (VAR_2 == VAR_0) {
    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
      VAR_5 <<= 8;
      VAR_5 |= (Uinttype)(unsigned char)VAR_1[VAR_6];
    }
  }
  else {
    for (VAR_6 = VAR_4 - 1; VAR_6 >= 0; VAR_6--) {
      VAR_5 <<= 8;
      VAR_5 |= (Uinttype)(unsigned char)VAR_1[VAR_6];
    }
  }
  if (!VAR_3)
    return (lua_Number)VAR_5;
  else {
    Uinttype VAR_7 = (Uinttype)(~((Uinttype)0)) << (VAR_4*8 - 1);
    if (VAR_5 & VAR_7)
      VAR_5 |= VAR_7;
    return (lua_Number)(Inttype)VAR_5;
  }
}
