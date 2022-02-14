
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_node {struct buffer_node* next; scalar_t__ sz; int * msg; } ;
typedef int lua_State ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*) ;
 struct buffer_node* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int,char*) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int
FUNC_5(lua_State *VAR_1, int VAR_2) {
 struct buffer_node * VAR_3 = FUNC_1(VAR_1, sizeof(struct buffer_node) * VAR_2);
 int VAR_4;
 for (VAR_4=0;VAR_4<VAR_2;VAR_4++) {
  VAR_3[VAR_4].msg = ((void*)0);
  VAR_3[VAR_4].sz = 0;
  VAR_3[VAR_4].next = &VAR_3[VAR_4+1];
 }
 VAR_3[VAR_2-1].next = ((void*)0);
 if (FUNC_0(VAR_1, "buffer_pool")) {
  FUNC_2(VAR_1, VAR_0);
  FUNC_3(VAR_1, -2, "__gc");
 }
 FUNC_4(VAR_1, -2);
 return 1;
}
