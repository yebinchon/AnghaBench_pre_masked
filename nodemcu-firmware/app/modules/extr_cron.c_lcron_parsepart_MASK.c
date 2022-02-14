
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int lua_State ;


 int FUNC_0 (int *,char*,scalar_t__,...) ;
 scalar_t__ FUNC_1 (char*,char**,int) ;

__attribute__((used)) static uint64_t FUNC_2(lua_State *VAR_0, char *VAR_1, char **VAR_2, uint8_t VAR_3, uint8_t VAR_4) {
  uint64_t VAR_5 = 0;


  while (*VAR_1 != '\0' && (*VAR_1 == ' ' || *VAR_1 == '\t')) {
    VAR_1++;
  }

  if (VAR_1[0] == '*') {
    uint32_t VAR_6 = 1;
    *VAR_2 = VAR_1 + 1;
    if (VAR_1[1] == '/') {
      VAR_6 = FUNC_1(VAR_1 + 2, VAR_2, 10);
      if (VAR_6 == 0 || VAR_6 >= VAR_4 - VAR_3) {
        return FUNC_0(VAR_0, "invalid spec (each %d)", VAR_6);
      }
    }
    for (int VAR_7 = 0; VAR_7 <= (VAR_4 - VAR_3); VAR_7++) {
      if ((VAR_7 % VAR_6) == 0) VAR_5 |= (uint64_t)1 << VAR_7;
    }
  } else {
    uint32_t VAR_8;
    while (1) {
      VAR_8 = FUNC_1(VAR_1, VAR_2, 10);
      if (VAR_8 < VAR_3 || VAR_8 > VAR_4) {
        return FUNC_0(VAR_0, "invalid spec (val %d out of range %d..%d)", VAR_8, VAR_3, VAR_4);
      }
      VAR_5 |= (uint64_t)1 << (VAR_8 - VAR_3);
      if (**VAR_2 != ',') break;
      VAR_1 = *VAR_2 + 1;
    }
  }
  return VAR_5;
}
