
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_node {int * msg; } ;
typedef int lua_State ;


 int FUNC_0 (int *,int) ;
 struct buffer_node* FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(lua_State *VAR_0) {
 struct buffer_node * VAR_1 = FUNC_1(VAR_0, 1);
 int VAR_2 = FUNC_0(VAR_0,1) / sizeof(*VAR_1);
 int VAR_3;
 for (VAR_3=0;VAR_3<VAR_2;VAR_3++) {
  struct buffer_node *VAR_4 = &VAR_1[VAR_3];
  if (VAR_4->msg) {
   FUNC_2(VAR_4->msg);
   VAR_4->msg = ((void*)0);
  }
 }
 return 0;
}
