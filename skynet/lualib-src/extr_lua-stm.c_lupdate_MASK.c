
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct boxstm {int obj; } ;
typedef int lua_State ;


 scalar_t__ FUNC_0 (int *,int) ;
 char* FUNC_1 (int *,int,size_t*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 void* FUNC_3 (int *,int) ;
 int FUNC_4 (void*,char const*,size_t) ;
 void* FUNC_5 (size_t) ;
 int FUNC_6 (int ,void*,size_t) ;

__attribute__((used)) static int
FUNC_7(lua_State *VAR_0) {
 struct boxstm * VAR_1 = FUNC_3(VAR_0, 1);
 void * VAR_2;
 size_t VAR_3;
 if (FUNC_2(VAR_0, 2)) {
  VAR_2 = FUNC_3(VAR_0, 2);
  VAR_3 = (size_t)FUNC_0(VAR_0, 3);
 } else {
  const char * VAR_4 = FUNC_1(VAR_0,2,&VAR_3);
  VAR_2 = FUNC_5(VAR_3);
  FUNC_4(VAR_2, VAR_4, VAR_3);
 }
 FUNC_6(VAR_1->obj, VAR_2, VAR_3);

 return 0;
}
