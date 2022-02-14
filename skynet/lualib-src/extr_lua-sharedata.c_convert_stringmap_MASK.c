
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table {int dummy; } ;
struct state {struct table* root; scalar_t__ ref; scalar_t__ dirty; } ;
struct context {scalar_t__ string_index; int * L; } ;
typedef int lua_State ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int ,int ) ;
 struct state* FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int *,int) ;

__attribute__((used)) static void
FUNC_10(struct context *VAR_2, struct table *VAR_3) {
 lua_State *VAR_4 = VAR_2->L;
 FUNC_0(VAR_4, VAR_2->string_index + VAR_1);
 FUNC_8(VAR_4, VAR_2->string_index + 1);
 FUNC_6(VAR_4, 1);
 struct state * VAR_5 = FUNC_2(VAR_4, sizeof(*VAR_5));
 VAR_5->dirty = 0;
 VAR_5->ref = 0;
 VAR_5->root = VAR_3;
 FUNC_7(VAR_4, 1);
 FUNC_7(VAR_4, -2);

 FUNC_5(VAR_4);

 while (FUNC_3(VAR_4, -2) != 0) {
  int VAR_6 = FUNC_9(VAR_4, -1);
  FUNC_4(VAR_4, 1);
  FUNC_6(VAR_4, -1);
  FUNC_7(VAR_4, VAR_6);
 }

 FUNC_4(VAR_4, 1);

 FUNC_1(VAR_4, VAR_0, 0);
}
