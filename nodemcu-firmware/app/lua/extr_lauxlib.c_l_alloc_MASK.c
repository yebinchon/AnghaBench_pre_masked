
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {int egcmode; scalar_t__ memlimit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (void*,size_t,size_t) ;

__attribute__((used)) static void *FUNC_6 (void *VAR_3, void *VAR_4, size_t VAR_5, size_t VAR_6) {
  lua_State *VAR_7 = (lua_State *)VAR_3;
  int VAR_8 = VAR_7 == ((void*)0) ? 0 : FUNC_0(VAR_7)->egcmode;
  void *VAR_9;

  if (VAR_6 == 0) {



    FUNC_1(VAR_4);
    return ((void*)0);

  }
  if (VAR_7 != ((void*)0) && (VAR_8 & VAR_0))
    FUNC_3(VAR_7);

  if (VAR_7 != ((void*)0) && (VAR_8 & VAR_2) && FUNC_0(VAR_7)->memlimit < 0 &&
      (FUNC_4() < (-FUNC_0(VAR_7)->memlimit)))
    FUNC_3(VAR_7);

  if(VAR_6 > VAR_5 && VAR_7 != ((void*)0)) {



    if(FUNC_0(VAR_7)->memlimit > 0 && (VAR_8 & VAR_2) && FUNC_2(VAR_7, VAR_6 - VAR_5))
      return ((void*)0);
  }
  VAR_9 = (void *)FUNC_5(VAR_4, VAR_5, VAR_6);
  if (VAR_9 == ((void*)0) && VAR_7 != ((void*)0) && (VAR_8 & VAR_1)) {
    FUNC_3(VAR_7);
    VAR_9 = (void *)FUNC_5(VAR_4, VAR_5, VAR_6);
  }
  return VAR_9;
}
