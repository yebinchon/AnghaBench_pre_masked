
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm_copy {int sz; int msg; } ;
struct boxreader {struct stm_copy* lastcopy; int obj; } ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 struct boxreader* FUNC_9 (int *,int) ;
 struct stm_copy* FUNC_10 (int ) ;
 int FUNC_11 (struct stm_copy*) ;

__attribute__((used)) static int
FUNC_12(lua_State *VAR_2) {
 struct boxreader * VAR_3 = FUNC_9(VAR_2, 1);
 FUNC_0(VAR_2, 2, VAR_1);

 struct stm_copy * VAR_4 = FUNC_10(VAR_3->obj);
 if (VAR_4 == VAR_3->lastcopy) {

  FUNC_11(VAR_4);
  FUNC_3(VAR_2, 0);
  return 1;
 }

 FUNC_11(VAR_3->lastcopy);
 VAR_3->lastcopy = VAR_4;
 if (VAR_4) {
  FUNC_8(VAR_2, 3);
  FUNC_7(VAR_2, 1);
  FUNC_8(VAR_2, 2);
  FUNC_5(VAR_2, VAR_4->msg);
  FUNC_4(VAR_2, VAR_4->sz);
  FUNC_6(VAR_2, 1);
  FUNC_1(VAR_2, 3, VAR_0);
  FUNC_3(VAR_2, 1);
  FUNC_7(VAR_2, 1);
  return FUNC_2(VAR_2);
 } else {
  FUNC_3(VAR_2, 0);
  return 1;
 }
}
