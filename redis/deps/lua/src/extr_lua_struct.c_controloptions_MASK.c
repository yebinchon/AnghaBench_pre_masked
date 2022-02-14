
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int align; int endian; } ;
typedef TYPE_1__ Header ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const**,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int,char const*) ;
 int FUNC_3 (int *,char*,int) ;
 char* FUNC_4 (int *,char*,int) ;

__attribute__((used)) static void FUNC_5 (lua_State *VAR_3, int VAR_4, const char **VAR_5,
                            Header *VAR_6) {
  switch (VAR_4) {
    case ' ': return;
    case '>': VAR_6->endian = VAR_0; return;
    case '<': VAR_6->endian = VAR_1; return;
    case '!': {
      int VAR_7 = FUNC_0(VAR_5, VAR_2);
      if (!FUNC_1(VAR_7))
        FUNC_3(VAR_3, "alignment %d is not a power of 2", VAR_7);
      VAR_6->align = VAR_7;
      return;
    }
    default: {
      const char *VAR_8 = FUNC_4(VAR_3, "invalid format option '%c'", VAR_4);
      FUNC_2(VAR_3, 1, VAR_8);
    }
  }
}
