
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ptrdiff_t ;
typedef int lua_State ;
struct TYPE_4__ {char const* src_init; char const* src_end; scalar_t__ level; int * L; } ;
typedef TYPE_1__ MatchState ;


 int VAR_0 ;
 char* FUNC_0 (char const*,size_t,char const*,size_t) ;
 char* FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int) ;
 char* FUNC_6 (TYPE_1__*,char const*,char const*) ;
 int FUNC_7 (int ,size_t) ;
 int FUNC_8 (TYPE_1__*,char const*,char const*) ;
 int * FUNC_9 (char const*,int ) ;

__attribute__((used)) static int FUNC_10 (lua_State *VAR_1, int VAR_2) {
  size_t VAR_3, VAR_4;
  const char *VAR_5 = FUNC_1(VAR_1, 1, &VAR_3);
  const char *VAR_6 = FUNC_1(VAR_1, 2, &VAR_4);
  ptrdiff_t VAR_7 = FUNC_7(FUNC_2(VAR_1, 3, 1), VAR_3) - 1;
  if (VAR_7 < 0) VAR_7 = 0;
  else if ((size_t)(VAR_7) > VAR_3) VAR_7 = (ptrdiff_t)VAR_3;
  if (VAR_2 && (FUNC_5(VAR_1, 4) ||
      FUNC_9(VAR_6, VAR_0) == ((void*)0))) {

    const char *VAR_8 = FUNC_0(VAR_5+VAR_7, VAR_3-VAR_7, VAR_6, VAR_4);
    if (VAR_8) {
      FUNC_3(VAR_1, VAR_8-VAR_5+1);
      FUNC_3(VAR_1, VAR_8-VAR_5+VAR_4);
      return 2;
    }
  }
  else {
    MatchState VAR_9;
    int VAR_10 = (*VAR_6 == '^') ? (VAR_6++, 1) : 0;
    const char *VAR_11=VAR_5+VAR_7;
    VAR_9.L = VAR_1;
    VAR_9.src_init = VAR_5;
    VAR_9.src_end = VAR_5+VAR_3;
    do {
      const char *VAR_12;
      VAR_9.level = 0;
      if ((VAR_12=FUNC_6(&VAR_9, VAR_11, VAR_6)) != ((void*)0)) {
        if (VAR_2) {
          FUNC_3(VAR_1, VAR_11-VAR_5+1);
          FUNC_3(VAR_1, VAR_12-VAR_5);
          return FUNC_8(&VAR_9, ((void*)0), 0) + 2;
        }
        else
          return FUNC_8(&VAR_9, VAR_11, VAR_12);
      }
    } while (VAR_11++ < VAR_9.src_end && !VAR_10);
  }
  FUNC_4(VAR_1);
  return 1;
}
