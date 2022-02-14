
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table {int dummy; } ;
struct proxy {int index; void const* data; } ;
typedef int lua_State ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct table* FUNC_0 (void const*,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 struct proxy* FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int,struct table const*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int,struct table const*) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int) ;

__attribute__((used)) static void
FUNC_13(lua_State *VAR_4, const void *VAR_5, int VAR_6) {
 const struct table * VAR_7 = FUNC_0(VAR_5, VAR_6);
 if (VAR_7 == ((void*)0)) {
  FUNC_1(VAR_4, "Invalid index %d", VAR_6);
 }
 FUNC_2(VAR_4, VAR_0, VAR_2);
 if (FUNC_7(VAR_4, -1, VAR_7) == VAR_1) {
  FUNC_10(VAR_4, -2);
  return;
 }
 FUNC_5(VAR_4, 1);
 FUNC_3(VAR_4);
 FUNC_6(VAR_4, FUNC_12(1));
 FUNC_11(VAR_4, -2);
 FUNC_6(VAR_4, -1);

 FUNC_9(VAR_4, -3, VAR_7);

 FUNC_2(VAR_4, VAR_0, VAR_3);

 FUNC_6(VAR_4, -2);

 struct proxy * VAR_8 = FUNC_4(VAR_4, sizeof(struct proxy));

 VAR_8->data = VAR_5;
 VAR_8->index = VAR_6;
 FUNC_8(VAR_4, -3);

 FUNC_5(VAR_4, 1);

 FUNC_10(VAR_4, -2);

}
