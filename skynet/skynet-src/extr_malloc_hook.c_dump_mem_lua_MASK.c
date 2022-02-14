
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_data {scalar_t__ handle; scalar_t__ allocated; } ;
typedef int lua_State ;
typedef int lua_Integer ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int,int ) ;
 struct mem_data* VAR_1 ;

int
FUNC_3(lua_State *VAR_2) {
 int VAR_3;
 FUNC_0(VAR_2);
 for(VAR_3=0; VAR_3<VAR_0; VAR_3++) {
  struct mem_data* VAR_4 = &VAR_1[VAR_3];
  if(VAR_4->handle != 0 && VAR_4->allocated != 0) {
   FUNC_1(VAR_2, VAR_4->allocated);
   FUNC_2(VAR_2, -2, (lua_Integer)VAR_4->handle);
  }
 }
 return 1;
}
