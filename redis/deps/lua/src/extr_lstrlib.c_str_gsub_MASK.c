
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
typedef int luaL_Buffer ;
struct TYPE_4__ {char const* src_init; char const* src_end; scalar_t__ level; int * L; } ;
typedef TYPE_1__ MatchState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int *,char const*,char const*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char const*,int) ;
 int FUNC_3 (int *,int,int,char*) ;
 int FUNC_4 (int *,int *) ;
 char* FUNC_5 (int *,int,size_t*) ;
 char* FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int,size_t) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 char* FUNC_11 (TYPE_1__*,char const*,char const*) ;

__attribute__((used)) static int FUNC_12 (lua_State *VAR_4) {
  size_t VAR_5;
  const char *VAR_6 = FUNC_5(VAR_4, 1, &VAR_5);
  const char *VAR_7 = FUNC_6(VAR_4, 2);
  int VAR_8 = FUNC_10(VAR_4, 3);
  int VAR_9 = FUNC_7(VAR_4, 4, VAR_5+1);
  int VAR_10 = (*VAR_7 == '^') ? (VAR_7++, 1) : 0;
  int VAR_11 = 0;
  MatchState VAR_12;
  luaL_Buffer VAR_13;
  FUNC_3(VAR_4, VAR_8 == VAR_1 || VAR_8 == VAR_2 ||
                   VAR_8 == VAR_0 || VAR_8 == VAR_3, 3,
                      "string/function/table expected");
  FUNC_4(VAR_4, &VAR_13);
  VAR_12.L = VAR_4;
  VAR_12.src_init = VAR_6;
  VAR_12.src_end = VAR_6+VAR_5;
  while (VAR_11 < VAR_9) {
    const char *VAR_14;
    VAR_12.level = 0;
    VAR_14 = FUNC_11(&VAR_12, VAR_6, VAR_7);
    if (VAR_14) {
      VAR_11++;
      FUNC_0(&VAR_12, &VAR_13, VAR_6, VAR_14);
    }
    if (VAR_14 && VAR_14>VAR_6)
      VAR_6 = VAR_14;
    else if (VAR_6 < VAR_12.src_end)
      FUNC_1(&VAR_13, *VAR_6++);
    else break;
    if (VAR_10) break;
  }
  FUNC_2(&VAR_13, VAR_6, VAR_12.src_end-VAR_6);
  FUNC_8(&VAR_13);
  FUNC_9(VAR_4, VAR_11);
  return 2;
}
