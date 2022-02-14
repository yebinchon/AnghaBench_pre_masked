
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int value; scalar_t__ key; } ;
typedef int TValue ;
typedef TYPE_1__ ROTable ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_4(lua_State *VAR_0, ROTable *VAR_1, int VAR_2,
                             TValue *VAR_3, TValue *VAR_4) {
  if (VAR_1[VAR_2].key) {

    FUNC_3(VAR_0, VAR_3, FUNC_0(VAR_0, VAR_1[VAR_2].key));
    FUNC_2(VAR_0, VAR_4, &VAR_1[VAR_2].value);
  } else {
    FUNC_1(VAR_3);
    FUNC_1(VAR_4);
  }
}
