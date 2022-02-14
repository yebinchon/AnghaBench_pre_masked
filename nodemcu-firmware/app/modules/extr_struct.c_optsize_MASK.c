
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 size_t FUNC_0 (char const**,int) ;
 int FUNC_1 (int *,char*,int,int) ;

__attribute__((used)) static size_t FUNC_2 (lua_State *VAR_1, char VAR_2, const char **VAR_3) {
  switch (VAR_2) {
    case 'B': case 'b': return sizeof(char);
    case 'H': case 'h': return sizeof(short);
    case 'L': case 'l': return sizeof(long);
    case 'T': return sizeof(size_t);

    case 'f': return sizeof(float);
    case 'd': return sizeof(double);

    case 'x': return 1;
    case 'c': return FUNC_0(VAR_3, 1);
    case 'i': case 'I': {
      int VAR_4 = FUNC_0(VAR_3, sizeof(int));
      if (VAR_4 > VAR_0)
        FUNC_1(VAR_1, "integral size %d is larger than limit of %d",
                       VAR_4, VAR_0);
      return VAR_4;
    }
    default: return 0;
  }
}
