
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
 int VAR_4 ;
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

__attribute__((used)) static int FUNC_12 (lua_State *VAR_5) {
  size_t VAR_6;
  const char *VAR_7 = FUNC_5(VAR_5, 1, &VAR_6);
  const char *VAR_8 = FUNC_6(VAR_5, 2);
  int VAR_9 = FUNC_10(VAR_5, 3);
  int VAR_10 = FUNC_7(VAR_5, 4, VAR_6+1);
  int VAR_11 = (*VAR_8 == '^') ? (VAR_8++, 1) : 0;
  int VAR_12 = 0;
  MatchState VAR_13;
  luaL_Buffer VAR_14;
  FUNC_3(VAR_5, VAR_9 == VAR_2 || VAR_9 == VAR_3 ||
                   VAR_9 == VAR_0 || VAR_9 == VAR_4 ||
                   VAR_9 == VAR_1, 3,
                   "string/function/table/lightfunction expected");
  FUNC_4(VAR_5, &VAR_14);
  VAR_13.L = VAR_5;
  VAR_13.src_init = VAR_7;
  VAR_13.src_end = VAR_7+VAR_6;
  while (VAR_12 < VAR_10) {
    const char *VAR_15;
    VAR_13.level = 0;
    VAR_15 = FUNC_11(&VAR_13, VAR_7, VAR_8);
    if (VAR_15) {
      VAR_12++;
      FUNC_0(&VAR_13, &VAR_14, VAR_7, VAR_15);
    }
    if (VAR_15 && VAR_15>VAR_7)
      VAR_7 = VAR_15;
    else if (VAR_7 < VAR_13.src_end)
      FUNC_1(&VAR_14, *VAR_7++);
    else break;
    if (VAR_11) break;
  }
  FUNC_2(&VAR_14, VAR_7, VAR_13.src_end-VAR_7);
  FUNC_8(&VAR_14);
  FUNC_9(VAR_5, VAR_12);
  return 2;
}
