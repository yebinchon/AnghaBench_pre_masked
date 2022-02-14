
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_6__ {int string; } ;
struct TYPE_7__ {int boolean; TYPE_1__ s; int number; } ;
struct TYPE_8__ {int type; TYPE_2__ u; } ;
typedef TYPE_3__ js_Object ;
typedef int js_Buffer ;






 int FUNC_0 (int *,int **,char const*,int) ;
 int FUNC_1 (int *,int **,int ) ;
 int FUNC_2 (int *,int **,TYPE_3__*,char const*,int) ;
 int FUNC_3 (int *,int **,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int,char const*) ;
 scalar_t__ FUNC_7 (int *,int,char*) ;
 scalar_t__ FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (int *,int) ;
 scalar_t__ FUNC_11 (int *,int) ;
 scalar_t__ FUNC_12 (int *,int) ;
 scalar_t__ FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *,char const*) ;
 int FUNC_16 (int *,int **,char*) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int *,int) ;
 int FUNC_19 (int *,int) ;
 TYPE_3__* FUNC_20 (int *,int) ;
 int FUNC_21 (int *,int) ;

__attribute__((used)) static int FUNC_22(js_State *VAR_0, js_Buffer **VAR_1, const char *VAR_2, const char *VAR_3, int VAR_4)
{



 FUNC_6(VAR_0, -1, VAR_2);

 if (FUNC_12(VAR_0, -1)) {
  if (FUNC_7(VAR_0, -1, "toJSON")) {
   if (FUNC_9(VAR_0, -1)) {
    FUNC_5(VAR_0, -2);
    FUNC_15(VAR_0, VAR_2);
    FUNC_4(VAR_0, 1);
    FUNC_17(VAR_0);
   } else {
    FUNC_14(VAR_0, 1);
   }
  }
 }

 if (FUNC_9(VAR_0, 2)) {
  FUNC_5(VAR_0, 2);
  FUNC_5(VAR_0, -3);
  FUNC_15(VAR_0, VAR_2);
  FUNC_5(VAR_0, -4);
  FUNC_4(VAR_0, 2);
  FUNC_17(VAR_0);
 }

 if (FUNC_12(VAR_0, -1) && !FUNC_9(VAR_0, -1)) {
  js_Object *VAR_5 = FUNC_20(VAR_0, -1);
  switch (VAR_5->type) {
  case 129: FUNC_1(VAR_0, VAR_1, VAR_5->u.number); break;
  case 128: FUNC_3(VAR_0, VAR_1, VAR_5->u.s.string); break;
  case 130: FUNC_16(VAR_0, VAR_1, VAR_5->u.boolean ? "true" : "false"); break;
  case 131: FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4); break;
  default: FUNC_2(VAR_0, VAR_1, VAR_5, VAR_3, VAR_4); break;
  }
 }
 else if (FUNC_8(VAR_0, -1))
  FUNC_16(VAR_0, VAR_1, FUNC_18(VAR_0, -1) ? "true" : "false");
 else if (FUNC_11(VAR_0, -1))
  FUNC_1(VAR_0, VAR_1, FUNC_19(VAR_0, -1));
 else if (FUNC_13(VAR_0, -1))
  FUNC_3(VAR_0, VAR_1, FUNC_21(VAR_0, -1));
 else if (FUNC_10(VAR_0, -1))
  FUNC_16(VAR_0, VAR_1, "null");
 else {
  FUNC_14(VAR_0, 1);
  return 0;
 }

 FUNC_14(VAR_0, 1);
 return 1;
}
