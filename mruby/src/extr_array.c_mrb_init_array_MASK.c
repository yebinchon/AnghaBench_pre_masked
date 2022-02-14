
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_7__ {int object_class; struct RClass* array_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct RClass*,int ) ;
 int VAR_0 ;
 int FUNC_6 (TYPE_1__*,struct RClass*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 struct RClass* FUNC_7 (TYPE_1__*,char*,int ) ;
 int FUNC_8 (TYPE_1__*,struct RClass*,char*,int ,int ) ;
 int FUNC_9 (TYPE_1__*,struct RClass*,char*,int ,int ) ;

void
FUNC_10(mrb_state *VAR_26)
{
  struct RClass *VAR_27;

  VAR_26->array_class = VAR_27 = FUNC_7(VAR_26, "Array", VAR_26->object_class);
  FUNC_5(VAR_27, VAR_0);

  FUNC_8(VAR_26, VAR_27, "[]", VAR_20, FUNC_0());

  FUNC_9(VAR_26, VAR_27, "+", VAR_13, FUNC_4(1));
  FUNC_9(VAR_26, VAR_27, "*", VAR_24, FUNC_4(1));
  FUNC_9(VAR_26, VAR_27, "<<", VAR_15, FUNC_4(1));
  FUNC_9(VAR_26, VAR_27, "[]", VAR_1, FUNC_1(1,1));
  FUNC_9(VAR_26, VAR_27, "[]=", VAR_2, FUNC_1(2,1));
  FUNC_9(VAR_26, VAR_27, "clear", VAR_3, FUNC_2());
  FUNC_9(VAR_26, VAR_27, "concat", VAR_5, FUNC_4(1));
  FUNC_9(VAR_26, VAR_27, "delete_at", VAR_6, FUNC_4(1));
  FUNC_9(VAR_26, VAR_27, "empty?", VAR_7, FUNC_2());
  FUNC_9(VAR_26, VAR_27, "first", VAR_9, FUNC_3(1));
  FUNC_9(VAR_26, VAR_27, "index", VAR_10, FUNC_4(1));
  FUNC_9(VAR_26, VAR_27, "initialize_copy", VAR_16, FUNC_4(1));
  FUNC_9(VAR_26, VAR_27, "join", VAR_11, FUNC_3(1));
  FUNC_9(VAR_26, VAR_27, "last", VAR_12, FUNC_3(1));
  FUNC_9(VAR_26, VAR_27, "length", VAR_22, FUNC_2());
  FUNC_9(VAR_26, VAR_27, "pop", VAR_14, FUNC_2());
  FUNC_9(VAR_26, VAR_27, "push", VAR_15, FUNC_0());
  FUNC_9(VAR_26, VAR_27, "replace", VAR_16, FUNC_4(1));
  FUNC_9(VAR_26, VAR_27, "reverse", VAR_17, FUNC_2());
  FUNC_9(VAR_26, VAR_27, "reverse!", VAR_18, FUNC_2());
  FUNC_9(VAR_26, VAR_27, "rindex", VAR_19, FUNC_4(1));
  FUNC_9(VAR_26, VAR_27, "shift", VAR_21, FUNC_2());
  FUNC_9(VAR_26, VAR_27, "size", VAR_22, FUNC_2());
  FUNC_9(VAR_26, VAR_27, "slice", VAR_1, FUNC_1(1,1));
  FUNC_9(VAR_26, VAR_27, "unshift", VAR_25, FUNC_0());

  FUNC_9(VAR_26, VAR_27, "__ary_eq", VAR_8, FUNC_4(1));
  FUNC_9(VAR_26, VAR_27, "__ary_cmp", VAR_4, FUNC_4(1));
  FUNC_9(VAR_26, VAR_27, "__ary_index", VAR_10, FUNC_4(1));
  FUNC_9(VAR_26, VAR_27, "__svalue", VAR_23, FUNC_2());

  FUNC_6(VAR_26, VAR_27);
}
