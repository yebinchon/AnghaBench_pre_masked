
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 void* FUNC_0 (int *,int,size_t) ;
 void* FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,void*,int) ;
 int FUNC_4 (int *,int ) ;
 void* FUNC_5 (int *,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (void const*,size_t,void*,size_t) ;

__attribute__((used)) static int
FUNC_8(lua_State *VAR_0) {
 size_t VAR_1=0;
 const void * VAR_2 = FUNC_1(VAR_0, 1, &VAR_1);

 size_t VAR_3 = (VAR_1 + 2047) / 2048 * 2 + VAR_1 + 2;
 void * VAR_4 = FUNC_5(VAR_0, FUNC_6(1));
 int VAR_5;
 int VAR_6 = FUNC_4(VAR_0, FUNC_6(2));
 if (VAR_6 < VAR_3) {
  VAR_4 = FUNC_0(VAR_0, VAR_6, VAR_3);
 }
 VAR_5 = FUNC_7(VAR_2, VAR_1, VAR_4, VAR_3);
 if (VAR_5 > VAR_3) {
  return FUNC_2(VAR_0, "packing error, return size = %d", VAR_5);
 }
 FUNC_3(VAR_0, VAR_4, VAR_5);

 return 1;
}
