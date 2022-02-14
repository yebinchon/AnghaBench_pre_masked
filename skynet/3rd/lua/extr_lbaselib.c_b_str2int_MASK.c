
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_Unsigned ;
typedef scalar_t__ lua_Integer ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (char const*,int ) ;
 char FUNC_3 (unsigned char) ;

__attribute__((used)) static const char *FUNC_4 (const char *VAR_1, int VAR_2, lua_Integer *VAR_3) {
  lua_Unsigned VAR_4 = 0;
  int VAR_5 = 0;
  VAR_1 += FUNC_2(VAR_1, VAR_0);
  if (*VAR_1 == '-') { VAR_1++; VAR_5 = 1; }
  else if (*VAR_1 == '+') VAR_1++;
  if (!FUNC_0((unsigned char)*VAR_1))
    return ((void*)0);
  do {
    int VAR_6 = (FUNC_1((unsigned char)*VAR_1)) ? *VAR_1 - '0'
                   : (FUNC_3((unsigned char)*VAR_1) - 'A') + 10;
    if (VAR_6 >= VAR_2) return ((void*)0);
    VAR_4 = VAR_4 * VAR_2 + VAR_6;
    VAR_1++;
  } while (FUNC_0((unsigned char)*VAR_1));
  VAR_1 += FUNC_2(VAR_1, VAR_0);
  *VAR_3 = (lua_Integer)((VAR_5) ? (0u - VAR_4) : VAR_4);
  return VAR_1;
}
