
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
typedef int lua_Integer ;
struct TYPE_4__ {char const* src_init; char const* src_end; scalar_t__ level; int * L; } ;
typedef TYPE_1__ MatchState ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 char* FUNC_3 (int *,int ,size_t*) ;
 char* FUNC_4 (int *,int ) ;
 int FUNC_5 (int) ;
 char* FUNC_6 (TYPE_1__*,char const*,char const*) ;
 int FUNC_7 (TYPE_1__*,char const*,char const*) ;

__attribute__((used)) static int FUNC_8 (lua_State *VAR_0) {
  MatchState VAR_1;
  size_t VAR_2;
  const char *VAR_3 = FUNC_3(VAR_0, FUNC_5(1), &VAR_2);
  const char *VAR_4 = FUNC_4(VAR_0, FUNC_5(2));
  const char *VAR_5;
  VAR_1.L = VAR_0;
  VAR_1.src_init = VAR_3;
  VAR_1.src_end = VAR_3+VAR_2;
  for (VAR_5 = VAR_3 + (size_t)FUNC_2(VAR_0, FUNC_5(3));
       VAR_5 <= VAR_1.src_end;
       VAR_5++) {
    const char *VAR_6;
    VAR_1.level = 0;
    if ((VAR_6 = FUNC_6(&VAR_1, VAR_5, VAR_4)) != ((void*)0)) {
      lua_Integer VAR_7 = VAR_6-VAR_3;
      if (VAR_6 == VAR_5) VAR_7++;
      FUNC_0(VAR_0, VAR_7);
      FUNC_1(VAR_0, FUNC_5(3));
      return FUNC_7(&VAR_1, VAR_5, VAR_6);
    }
  }
  return 0;
}
