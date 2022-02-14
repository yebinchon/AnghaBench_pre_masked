
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct mc_package {void* data; scalar_t__ size; scalar_t__ reference; } ;
typedef int ret ;
typedef int lua_State ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,struct mc_package**) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(lua_State *VAR_0, void *VAR_1, size_t VAR_2) {
 struct mc_package * VAR_3 = FUNC_2(sizeof(struct mc_package));
 VAR_3->reference = 0;
 VAR_3->size = (uint32_t)VAR_2;
 VAR_3->data = VAR_1;
 struct mc_package ** VAR_4 = FUNC_2(sizeof(*VAR_4));
 *VAR_4 = VAR_3;
 FUNC_1(VAR_0, VAR_4);
 FUNC_0(VAR_0, sizeof(VAR_4));
 return 2;
}
