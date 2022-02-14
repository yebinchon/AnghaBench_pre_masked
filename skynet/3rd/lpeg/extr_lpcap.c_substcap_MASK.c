
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int luaL_Buffer ;
struct TYPE_8__ {char* s; int siz; } ;
struct TYPE_7__ {TYPE_3__* cap; } ;
typedef TYPE_1__ CapState ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*,char*) ;
 char* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *,char const*,int) ;

__attribute__((used)) static void FUNC_5 (luaL_Buffer *VAR_0, CapState *VAR_1) {
  const char *VAR_2 = VAR_1->cap->s;
  if (FUNC_3(VAR_1->cap))
    FUNC_4(VAR_0, VAR_2, VAR_1->cap->siz - 1);
  else {
    VAR_1->cap++;
    while (!FUNC_2(VAR_1->cap)) {
      const char *VAR_3 = VAR_1->cap->s;
      FUNC_4(VAR_0, VAR_2, VAR_3 - VAR_2);
      if (FUNC_0(VAR_0, VAR_1, "replacement"))
        VAR_2 = FUNC_1(VAR_1->cap - 1);
      else
        VAR_2 = VAR_3;
    }
    FUNC_4(VAR_0, VAR_2, VAR_1->cap->s - VAR_2);
  }
  VAR_1->cap++;
}
