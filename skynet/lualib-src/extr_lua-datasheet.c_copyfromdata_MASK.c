
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proxy {int dummy; } ;
typedef int lua_State ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,struct proxy*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 struct proxy* FUNC_9 (int *,int) ;

__attribute__((used)) static void
FUNC_10(lua_State *VAR_3) {
 FUNC_2(VAR_3, VAR_0, VAR_2);
 FUNC_5(VAR_3, 1);

 if (FUNC_6(VAR_3, -2) != VAR_1) {
  FUNC_1(VAR_3, "Invalid proxy table %p", FUNC_8(VAR_3, 1));
 }
 struct proxy * VAR_4 = FUNC_9(VAR_3, -1);
 FUNC_3(VAR_3, 2);
 FUNC_0(VAR_3, 1, VAR_4);
 FUNC_4(VAR_3);
 FUNC_7(VAR_3, 1);
}
