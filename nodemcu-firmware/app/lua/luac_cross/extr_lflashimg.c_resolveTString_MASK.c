
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ top; } ;
typedef TYPE_1__ lua_State ;
typedef int TString ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,scalar_t__,int *) ;

__attribute__((used)) static void *FUNC_8(lua_State* VAR_0, TString *VAR_1) {
  if (!VAR_1)
    return ((void*)0);
  FUNC_4(VAR_0);
  FUNC_7(VAR_0, VAR_0->top-1, VAR_1);
  FUNC_5(VAR_0, -2);
  FUNC_1(!FUNC_2(VAR_0, -1));
  void *VAR_2 = FUNC_0(FUNC_6(VAR_0, -1));
  FUNC_3(VAR_0, 1);
  return VAR_2;
}
