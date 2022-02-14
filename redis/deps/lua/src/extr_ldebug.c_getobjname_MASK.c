
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_7__ {TYPE_2__* p; } ;
struct TYPE_9__ {TYPE_1__ l; } ;
struct TYPE_8__ {int * upvalues; int * k; } ;
typedef TYPE_2__ Proto ;
typedef int Instruction ;
typedef int CallInfo ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;





 TYPE_6__* FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 char* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *) ;
 char* FUNC_9 (TYPE_2__*,int) ;
 char* FUNC_10 (TYPE_2__*,int,int) ;
 int FUNC_11 (int) ;
 char* FUNC_12 (int *) ;
 int FUNC_13 (TYPE_2__*,int,int) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static const char *FUNC_15 (lua_State *VAR_0, CallInfo *VAR_1, int VAR_2,
                               const char **VAR_3) {
  if (FUNC_8(VAR_1)) {
    Proto *VAR_4 = FUNC_5(VAR_1)->l.p;
    int VAR_5 = FUNC_6(VAR_0, VAR_1);
    Instruction VAR_6;
    *VAR_3 = FUNC_10(VAR_4, VAR_2+1, VAR_5);
    if (*VAR_3)
      return "local";
    VAR_6 = FUNC_13(VAR_4, VAR_5, VAR_2);
    FUNC_11(VAR_5 != -1);
    switch (FUNC_4(VAR_6)) {
      case 132: {
        int VAR_7 = FUNC_2(VAR_6);
        FUNC_11(FUNC_14(&VAR_4->k[VAR_7]));
        *VAR_3 = FUNC_12(&VAR_4->k[VAR_7]);
        return "global";
      }
      case 129: {
        int VAR_8 = FUNC_0(VAR_6);
        int VAR_9 = FUNC_1(VAR_6);
        if (VAR_9 < VAR_8)
          return FUNC_15(VAR_0, VAR_1, VAR_9, VAR_3);
        break;
      }
      case 131: {
        int VAR_10 = FUNC_3(VAR_6);
        *VAR_3 = FUNC_9(VAR_4, VAR_10);
        return "field";
      }
      case 130: {
        int VAR_11 = FUNC_1(VAR_6);
        *VAR_3 = VAR_4->upvalues ? FUNC_7(VAR_4->upvalues[VAR_11]) : "?";
        return "upvalue";
      }
      case 128: {
        int VAR_12 = FUNC_3(VAR_6);
        *VAR_3 = FUNC_9(VAR_4, VAR_12);
        return "method";
      }
      default: break;
    }
  }
  return ((void*)0);
}
