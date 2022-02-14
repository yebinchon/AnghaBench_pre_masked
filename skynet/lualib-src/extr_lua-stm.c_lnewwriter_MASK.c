
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct boxstm {int obj; } ;
typedef int lua_State ;


 scalar_t__ FUNC_0 (int *,int) ;
 char* FUNC_1 (int *,int,size_t*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 struct boxstm* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int) ;
 void* FUNC_6 (int *,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (void*,char const*,size_t) ;
 void* FUNC_9 (size_t) ;
 int FUNC_10 (void*,size_t) ;

__attribute__((used)) static int
FUNC_11(lua_State *VAR_0) {
 void * VAR_1;
 size_t VAR_2;
 if (FUNC_2(VAR_0,1)) {
  VAR_1 = FUNC_6(VAR_0, 1);
  VAR_2 = (size_t)FUNC_0(VAR_0, 2);
 } else {
  const char * VAR_3 = FUNC_1(VAR_0,1,&VAR_2);
  VAR_1 = FUNC_9(VAR_2);
  FUNC_8(VAR_1, VAR_3, VAR_2);
 }
 struct boxstm * VAR_4 = FUNC_3(VAR_0, sizeof(*VAR_4));
 VAR_4->obj = FUNC_10(VAR_1,VAR_2);
 FUNC_4(VAR_0, FUNC_7(1));
 FUNC_5(VAR_0, -2);

 return 1;
}
