
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proxy {int data; } ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 void* FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ,char const*) ;

__attribute__((used)) static int
FUNC_8(lua_State *VAR_4) {
 FUNC_2(VAR_4, VAR_0, VAR_3);
 FUNC_3(VAR_4, 1);

 if (FUNC_4(VAR_4, -2) != VAR_2) {
  FUNC_1(VAR_4, "Invalid proxy table %p", FUNC_5(VAR_4, 1));
 }
 struct proxy * VAR_5 = FUNC_6(VAR_4, -1);
 FUNC_0(VAR_4, 2, VAR_1);
 const char * VAR_6 = FUNC_6(VAR_4, 2);
 FUNC_7(VAR_4, VAR_5->data, VAR_6);
 return 1;
}
