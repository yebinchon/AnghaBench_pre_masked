
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table {int dummy; } ;
struct proxy {void const* data; int index; } ;
typedef int lua_State ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct table* FUNC_1 (void const*,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int,struct table const*) ;
 int FUNC_13 (int *,int) ;
 struct proxy* FUNC_14 (int *,int) ;
 int FUNC_15 (int) ;

__attribute__((used)) static void
FUNC_16(lua_State *VAR_4, const void *VAR_5, const void * VAR_6) {
 FUNC_2(VAR_4, VAR_0, VAR_2);
 int VAR_7 = FUNC_3(VAR_4);
 FUNC_2(VAR_4, VAR_0, VAR_3);
 int VAR_8 = VAR_7 + 1;
 FUNC_5(VAR_4);
 int VAR_9 = VAR_8 + 1;
 FUNC_8(VAR_4);
 while (FUNC_6(VAR_4, VAR_7) != 0) {

  FUNC_9(VAR_4, -1);
  if (FUNC_10(VAR_4, VAR_8) == VAR_1) {

   struct proxy * VAR_10 = FUNC_14(VAR_4, -1);
   if (VAR_10->data == VAR_5) {

    VAR_10->data = VAR_6;
    const struct table * VAR_11 = FUNC_1(VAR_6, VAR_10->index);
    FUNC_7(VAR_4, 1);

    FUNC_0(VAR_4);
    FUNC_9(VAR_4, FUNC_15(1));

    FUNC_13(VAR_4, -2);

    if (VAR_11) {
     FUNC_12(VAR_4, VAR_9, VAR_11);
    } else {
     FUNC_7(VAR_4, 1);
    }

    FUNC_9(VAR_4, -1);
    FUNC_8(VAR_4);
    FUNC_11(VAR_4, VAR_7);
   } else {
    FUNC_7(VAR_4, 2);
   }
  } else {
   FUNC_7(VAR_4, 2);

  }
 }

 FUNC_8(VAR_4);
 while (FUNC_6(VAR_4, VAR_9) != 0) {
  FUNC_9(VAR_4, -2);
  FUNC_4(VAR_4, -2);

  FUNC_11(VAR_4, VAR_7);
 }

 FUNC_7(VAR_4, 3);
}
