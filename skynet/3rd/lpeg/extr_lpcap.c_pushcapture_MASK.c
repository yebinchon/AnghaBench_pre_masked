
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;


typedef int lua_State ;
typedef int luaL_Buffer ;
struct TYPE_20__ {TYPE_15__* cap; int ptop; scalar_t__ s; int * L; } ;
struct TYPE_19__ {int idx; } ;
struct TYPE_18__ {int idx; } ;
struct TYPE_17__ {int idx; scalar_t__ s; } ;
typedef TYPE_3__ CapState ;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_15__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int,char*) ;
 int FUNC_7 (int *,char*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*,int) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (int *,TYPE_3__*) ;
 int FUNC_18 (int *,TYPE_3__*) ;
 int FUNC_19 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_20 (CapState *VAR_1) {
  lua_State *VAR_2 = VAR_1->L;
  FUNC_6(VAR_2, 4, "too many captures");
  switch (FUNC_2(VAR_1->cap)) {
    case 134: {
      FUNC_10(VAR_2, VAR_1->cap->s - VAR_1->s + 1);
      VAR_1->cap++;
      return 1;
    }
    case 139: {
      FUNC_14(VAR_1);
      VAR_1->cap++;
      return 1;
    }
    case 141: {
      int VAR_3 = (VAR_1->cap++)->idx;
      if (VAR_3 + VAR_0 > VAR_1->ptop)
        return FUNC_7(VAR_2, "reference to absent extra argument #%d", VAR_3);
      FUNC_11(VAR_2, VAR_3 + VAR_0);
      return 1;
    }
    case 131: {
      int VAR_4 = FUNC_15(VAR_1, 1);
      FUNC_9(VAR_2, -VAR_4);
      return VAR_4;
    }
    case 132: {
      FUNC_11(VAR_2, (VAR_1->cap++)->idx);
      return 1;
    }
    case 130: {
      luaL_Buffer VAR_5;
      FUNC_5(VAR_2, &VAR_5);
      FUNC_17(&VAR_5, VAR_1);
      FUNC_8(&VAR_5);
      return 1;
    }
    case 129: {
      luaL_Buffer VAR_6;
      FUNC_5(VAR_2, &VAR_6);
      FUNC_18(&VAR_6, VAR_1);
      FUNC_8(&VAR_6);
      return 1;
    }
    case 136: {
      if (VAR_1->cap->idx == 0)
        return FUNC_15(VAR_1, 0);
      else {
        FUNC_12(VAR_1);
        return 0;
      }
    }
    case 140: return FUNC_1(VAR_1);
    case 128: return FUNC_19(VAR_1);
    case 137: return FUNC_4(VAR_1);
    case 135: return FUNC_13(VAR_1);
    case 133: return FUNC_16(VAR_1);
    case 138: return FUNC_3(VAR_1);
    default: FUNC_0(0); return 0;
  }
}
