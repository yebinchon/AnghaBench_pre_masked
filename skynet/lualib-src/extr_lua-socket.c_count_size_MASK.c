
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int,size_t*) ;
 scalar_t__ FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static size_t
FUNC_3(lua_State *VAR_1, int VAR_2) {
 size_t VAR_3 = 0;
 int VAR_4;
 for (VAR_4=1;FUNC_1(VAR_1, VAR_2, VAR_4) != VAR_0; ++VAR_4) {
  size_t VAR_5;
  FUNC_0(VAR_1, -1, &VAR_5);
  VAR_3 += VAR_5;
  FUNC_2(VAR_1,1);
 }
 FUNC_2(VAR_1,1);
 return VAR_3;
}
