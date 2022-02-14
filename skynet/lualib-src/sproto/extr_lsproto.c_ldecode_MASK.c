
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sproto_type {int dummy; } ;
struct decode_ud {int mainindex_tag; int result_index; scalar_t__ key_index; scalar_t__ deep; int * array_tag; scalar_t__ array_index; int * L; } ;
typedef int lua_State ;


 int VAR_0 ;
 void* FUNC_0 (int *,int,size_t*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 struct sproto_type* FUNC_7 (int *,int) ;
 int FUNC_8 (struct sproto_type*,void const*,int,int ,struct decode_ud*) ;

__attribute__((used)) static int
FUNC_9(lua_State *VAR_1) {
 struct sproto_type * VAR_2 = FUNC_7(VAR_1, 1);
 const void * VAR_3;
 struct decode_ud VAR_4;
 size_t VAR_5;
 int VAR_6;
 if (VAR_2 == ((void*)0)) {

  return 0;
 }
 VAR_5 = 0;
 VAR_3 = FUNC_0(VAR_1, 2, &VAR_5);
 if (!FUNC_3(VAR_1, -1)) {
  FUNC_4(VAR_1);
 }
 VAR_4.L = VAR_1;
 VAR_4.result_index = FUNC_2(VAR_1);
 VAR_4.array_index = 0;
 VAR_4.array_tag = ((void*)0);
 VAR_4.deep = 0;
 VAR_4.mainindex_tag = -1;
 VAR_4.key_index = 0;
 VAR_6 = FUNC_8(VAR_2, VAR_3, (int)VAR_5, VAR_0, &VAR_4);
 if (VAR_6 < 0) {
  return FUNC_1(VAR_1, "decode error");
 }
 FUNC_6(VAR_1, VAR_4.result_index);
 FUNC_5(VAR_1, VAR_6);
 return 2;
}
