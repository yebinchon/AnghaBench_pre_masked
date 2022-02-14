
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_8__ {scalar_t__ top; } ;
typedef TYPE_1__ lua_State ;
typedef scalar_t__ StkId ;






 char* VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;

void FUNC_5 (lua_State *VAR_1, int VAR_2, StkId VAR_3) {
  switch (VAR_2) {
    case 130: {
      ptrdiff_t VAR_4 = FUNC_2(VAR_1, VAR_3);
      FUNC_4(VAR_1, FUNC_1(VAR_1, VAR_4), FUNC_0(VAR_1, VAR_0));
      break;
    }
    case 131: {
      ptrdiff_t VAR_5 = FUNC_2(VAR_1, VAR_3);
      FUNC_4(VAR_1, FUNC_1(VAR_1, VAR_5), FUNC_0(VAR_1, "error in error handling"));
      break;
    }
    case 128:
    case 129: {
      FUNC_3(VAR_1, VAR_3, VAR_1->top - 1);
      break;
    }
  }
  VAR_1->top = VAR_3 + 1;
}
