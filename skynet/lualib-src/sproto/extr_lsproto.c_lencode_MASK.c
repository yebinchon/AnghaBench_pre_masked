
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sproto_type {int dummy; } ;
struct encode_ud {int tbl_index; scalar_t__ iter_key; scalar_t__ iter_table; scalar_t__ iter_func; scalar_t__ deep; scalar_t__ array_index; int * array_tag; struct sproto_type* st; int * L; } ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,void*,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 void* FUNC_6 (int *,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct sproto_type*,void*,int,int ,struct encode_ud*) ;

__attribute__((used)) static int
FUNC_9(lua_State *VAR_2) {
 struct encode_ud VAR_3;
 void * VAR_4 = FUNC_6(VAR_2, FUNC_7(1));
 int VAR_5 = FUNC_5(VAR_2, FUNC_7(2));
 int VAR_6 = 2;
 struct sproto_type * VAR_7 = FUNC_6(VAR_2, 1);
 if (VAR_7 == ((void*)0)) {
  FUNC_1(VAR_2, VAR_6, VAR_0);
  FUNC_3(VAR_2, "");
  return 1;
 }
 VAR_3.L = VAR_2;
 VAR_3.st = VAR_7;
 VAR_3.tbl_index = VAR_6;
 for (;;) {
  int VAR_8;
  VAR_3.array_tag = ((void*)0);
  VAR_3.array_index = 0;
  VAR_3.deep = 0;

  FUNC_4(VAR_2, VAR_6);
  VAR_3.iter_func = 0;
  VAR_3.iter_table = 0;
  VAR_3.iter_key = 0;

  VAR_8 = FUNC_8(VAR_7, VAR_4, VAR_5, VAR_1, &VAR_3);
  if (VAR_8<0) {
   VAR_4 = FUNC_0(VAR_2, VAR_5, VAR_5*2);
   VAR_5 *= 2;
  } else {
   FUNC_2(VAR_2, VAR_4, VAR_8);
   return 1;
  }
 }
}
