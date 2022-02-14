
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int luaL_Buffer ;
struct TYPE_15__ {TYPE_4__* cap; int L; } ;
struct TYPE_14__ {int idx; } ;
struct TYPE_11__ {scalar_t__ s; scalar_t__ e; } ;
struct TYPE_12__ {TYPE_4__* cp; TYPE_1__ s; } ;
struct TYPE_13__ {TYPE_2__ u; scalar_t__ isstring; } ;
typedef TYPE_3__ StrAux ;
typedef TYPE_4__ Capture ;
typedef TYPE_5__ CapState ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_5__*,char*) ;
 int FUNC_1 (TYPE_5__*,TYPE_3__*,int ) ;
 int FUNC_2 (int *,char const) ;
 int FUNC_3 (int *,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,char*,int) ;
 char* FUNC_5 (int ,int ,size_t*) ;
 int FUNC_6 (TYPE_5__*,int ) ;

__attribute__((used)) static void FUNC_7 (luaL_Buffer *VAR_1, CapState *VAR_2) {
  StrAux VAR_3[VAR_0];
  int VAR_4;
  size_t VAR_5, VAR_6;
  const char *VAR_7;
  VAR_7 = FUNC_5(VAR_2->L, FUNC_6(VAR_2, VAR_2->cap->idx), &VAR_5);
  VAR_4 = FUNC_1(VAR_2, VAR_3, 0) - 1;
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
    if (VAR_7[VAR_6] != '%')
      FUNC_2(VAR_1, VAR_7[VAR_6]);
    else if (VAR_7[++VAR_6] < '0' || VAR_7[VAR_6] > '9')
      FUNC_2(VAR_1, VAR_7[VAR_6]);
    else {
      int VAR_8 = VAR_7[VAR_6] - '0';
      if (VAR_8 > VAR_4)
        FUNC_4(VAR_2->L, "invalid capture index (%d)", VAR_8);
      else if (VAR_3[VAR_8].isstring)
        FUNC_3(VAR_1, VAR_3[VAR_8].u.s.s, VAR_3[VAR_8].u.s.e - VAR_3[VAR_8].u.s.s);
      else {
        Capture *VAR_9 = VAR_2->cap;
        VAR_2->cap = VAR_3[VAR_8].u.cp;
        if (!FUNC_0(VAR_1, VAR_2, "capture"))
          FUNC_4(VAR_2->L, "no values in capture index %d", VAR_8);
        VAR_2->cap = VAR_9;
      }
    }
  }
}
