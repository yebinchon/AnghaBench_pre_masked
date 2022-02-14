
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_13__ {char const* s; scalar_t__ valuecached; TYPE_1__* cap; int * L; } ;
struct TYPE_12__ {char const* s; int kind; } ;
typedef TYPE_1__ Capture ;
typedef TYPE_2__ CapState ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int,char*) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,int ) ;

int FUNC_12 (CapState *VAR_4, Capture *VAR_5, const char *VAR_6, int *VAR_7) {
  int VAR_8, VAR_9;
  lua_State *VAR_10 = VAR_4->L;
  int VAR_11 = FUNC_6(VAR_10);
  Capture *VAR_12 = FUNC_3(VAR_5);
  FUNC_0(FUNC_1(VAR_12) == VAR_1);
  VAR_9 = FUNC_2(VAR_12, VAR_5);
  VAR_5->kind = VAR_0;
  VAR_5->s = VAR_6;
  VAR_4->cap = VAR_12; VAR_4->valuecached = 0;
  FUNC_4(VAR_10, 4, "too many runtime captures");
  FUNC_10(VAR_4);
  FUNC_8(VAR_10, VAR_3);
  FUNC_7(VAR_10, VAR_6 - VAR_4->s + 1);
  VAR_8 = FUNC_11(VAR_4, 0);
  FUNC_5(VAR_10, VAR_8 + 2, VAR_2);
  if (VAR_9 > 0) {
    int VAR_13;
    for (VAR_13 = VAR_9; VAR_13 <= VAR_11; VAR_13++)
      FUNC_9(VAR_10, VAR_9);
    *VAR_7 = VAR_11 - VAR_9 + 1;
  }
  else
    *VAR_7 = 0;
  return VAR_5 - VAR_12;
}
