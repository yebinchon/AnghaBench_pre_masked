
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int lua_State ;
typedef int bloom_t ;


 int FUNC_0 (int const*,size_t,int *,int) ;
 scalar_t__ FUNC_1 (int *,int,size_t*) ;
 scalar_t__ FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(lua_State *VAR_0) {
  bloom_t *VAR_1 = (bloom_t *)FUNC_2(VAR_0, 1, "bloom.filter");
  size_t VAR_2;
  const uint8 *VAR_3 = (uint8 *) FUNC_1(VAR_0, 2, &VAR_2);

  bool VAR_4 = FUNC_0(VAR_3, VAR_2, VAR_1, 1);

  FUNC_3(VAR_0, VAR_4);
  return 1;
}
