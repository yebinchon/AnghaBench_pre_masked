
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


struct RObject {int dummy; } ;
struct RClass {struct RClass* c; } ;
struct TYPE_15__ {struct RObject* top_self; struct RClass* object_class; struct RClass* proc_class; struct RClass* class_class; struct RClass* module_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (struct RClass*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct RClass* FUNC_8 (TYPE_1__*,struct RClass*) ;
 int FUNC_9 (TYPE_1__*,struct RClass*) ;
 int VAR_4 ;
 int FUNC_10 (TYPE_1__*,struct RClass*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (TYPE_1__*,int *,struct RClass*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 struct RClass* FUNC_12 (TYPE_1__*,char*,struct RClass*) ;
 int FUNC_13 (TYPE_1__*,struct RClass*,char*,int ,int) ;
 int FUNC_14 (TYPE_1__*,struct RClass*,char*,int ) ;
 int FUNC_15 (TYPE_1__*,struct RClass*,char*,int ,int) ;
 int FUNC_16 (TYPE_1__*,struct RObject*,char*,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_17 (TYPE_1__*,char*) ;
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
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 scalar_t__ FUNC_18 (TYPE_1__*,int ,struct RClass*) ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_19 (struct RClass*) ;
 int FUNC_20 (TYPE_1__*,struct RClass*,char*) ;
 int VAR_39 ;

void
FUNC_21(mrb_state *VAR_40)
{
  struct RClass *VAR_41;
  struct RClass *VAR_42;
  struct RClass *VAR_43;
  struct RClass *VAR_44;


  VAR_41 = FUNC_8(VAR_40, 0);
  VAR_42 = FUNC_8(VAR_40, VAR_41); VAR_40->object_class = VAR_42;
  VAR_43 = FUNC_8(VAR_40, VAR_42); VAR_40->module_class = VAR_43;
  VAR_44 = FUNC_8(VAR_40, VAR_43); VAR_40->class_class = VAR_44;

  VAR_41->c = VAR_42->c = VAR_43->c = VAR_44->c = VAR_44;
  FUNC_10(VAR_40, VAR_41);
  FUNC_10(VAR_40, VAR_42);
  FUNC_10(VAR_40, VAR_43);
  FUNC_10(VAR_40, VAR_44);


  FUNC_14(VAR_40, VAR_41, "BasicObject", FUNC_19(VAR_41));
  FUNC_14(VAR_40, VAR_42, "Object", FUNC_19(VAR_42));
  FUNC_14(VAR_40, VAR_42, "Module", FUNC_19(VAR_43));
  FUNC_14(VAR_40, VAR_42, "Class", FUNC_19(VAR_44));


  FUNC_11(VAR_40, ((void*)0), VAR_41, FUNC_17(VAR_40, "BasicObject"));
  FUNC_11(VAR_40, ((void*)0), VAR_42, FUNC_17(VAR_40, "Object"));
  FUNC_11(VAR_40, ((void*)0), VAR_43, FUNC_17(VAR_40, "Module"));
  FUNC_11(VAR_40, ((void*)0), VAR_44, FUNC_17(VAR_40, "Class"));

  VAR_40->proc_class = FUNC_12(VAR_40, "Proc", VAR_40->object_class);
  FUNC_7(VAR_40->proc_class, VAR_3);

  FUNC_7(VAR_44, VAR_0);
  FUNC_15(VAR_40, VAR_41, "initialize", VAR_6, FUNC_3());
  FUNC_15(VAR_40, VAR_41, "!", VAR_7, FUNC_3());
  FUNC_15(VAR_40, VAR_41, "==", VAR_35, FUNC_5(1));
  FUNC_15(VAR_40, VAR_41, "!=", VAR_38, FUNC_5(1));
  FUNC_15(VAR_40, VAR_41, "__id__", VAR_36, FUNC_3());
  FUNC_15(VAR_40, VAR_41, "__send__", VAR_11, FUNC_5(1)|FUNC_6()|FUNC_2());
  FUNC_15(VAR_40, VAR_41, "equal?", VAR_35, FUNC_5(1));
  FUNC_15(VAR_40, VAR_41, "instance_eval", VAR_37, FUNC_4(1)|FUNC_2());

  FUNC_13(VAR_40, VAR_44, "new", VAR_9, FUNC_4(1)|FUNC_2());
  FUNC_15(VAR_40, VAR_44, "allocate", VAR_12, FUNC_3());
  FUNC_15(VAR_40, VAR_44, "superclass", VAR_10, FUNC_3());
  FUNC_15(VAR_40, VAR_44, "initialize", VAR_8, FUNC_4(1));
  FUNC_15(VAR_40, VAR_44, "inherited", VAR_6, FUNC_5(1));

  FUNC_9(VAR_40, VAR_44);

  FUNC_7(VAR_43, VAR_1);
  FUNC_15(VAR_40, VAR_43, "extend_object", VAR_25, FUNC_5(1));
  FUNC_15(VAR_40, VAR_43, "extended", VAR_6, FUNC_5(1));
  FUNC_15(VAR_40, VAR_43, "prepended", VAR_6, FUNC_5(1));
  FUNC_15(VAR_40, VAR_43, "prepend_features", VAR_31, FUNC_5(1));
  FUNC_15(VAR_40, VAR_43, "include?", VAR_26, FUNC_5(1));
  FUNC_15(VAR_40, VAR_43, "append_features", VAR_15, FUNC_5(1));
  FUNC_15(VAR_40, VAR_43, "class_eval", VAR_29, FUNC_0());
  FUNC_15(VAR_40, VAR_43, "included", VAR_6, FUNC_5(1));
  FUNC_15(VAR_40, VAR_43, "initialize", VAR_27, FUNC_3());
  FUNC_15(VAR_40, VAR_43, "module_eval", VAR_29, FUNC_0());
  FUNC_15(VAR_40, VAR_43, "module_function", VAR_30, FUNC_0());
  FUNC_15(VAR_40, VAR_43, "private", VAR_22, FUNC_0());
  FUNC_15(VAR_40, VAR_43, "protected", VAR_22, FUNC_0());
  FUNC_15(VAR_40, VAR_43, "public", VAR_22, FUNC_0());
  FUNC_15(VAR_40, VAR_43, "attr_reader", VAR_16, FUNC_0());
  FUNC_15(VAR_40, VAR_43, "attr_writer", VAR_17, FUNC_0());
  FUNC_15(VAR_40, VAR_43, "to_s", VAR_33, FUNC_3());
  FUNC_15(VAR_40, VAR_43, "inspect", VAR_33, FUNC_3());
  FUNC_15(VAR_40, VAR_43, "alias_method", VAR_13, FUNC_0());
  FUNC_15(VAR_40, VAR_43, "ancestors", VAR_14, FUNC_3());
  FUNC_15(VAR_40, VAR_43, "undef_method", VAR_34, FUNC_0());
  FUNC_15(VAR_40, VAR_43, "const_defined?", VAR_18, FUNC_1(1,1));
  FUNC_15(VAR_40, VAR_43, "const_get", VAR_19, FUNC_5(1));
  FUNC_15(VAR_40, VAR_43, "const_set", VAR_21, FUNC_5(2));
  FUNC_15(VAR_40, VAR_43, "remove_const", VAR_32, FUNC_5(1));
  FUNC_15(VAR_40, VAR_43, "const_missing", VAR_20, FUNC_5(1));
  FUNC_15(VAR_40, VAR_43, "method_defined?", VAR_28, FUNC_5(1));
  FUNC_15(VAR_40, VAR_43, "define_method", VAR_5, FUNC_1(1,1));
  FUNC_15(VAR_40, VAR_43, "===", VAR_24, FUNC_5(1));
  FUNC_15(VAR_40, VAR_43, "dup", VAR_23, FUNC_3());

  FUNC_20(VAR_40, VAR_44, "append_features");
  FUNC_20(VAR_40, VAR_44, "extend_object");

  VAR_40->top_self = (struct RObject*)FUNC_18(VAR_40, VAR_2, VAR_40->object_class);
  FUNC_16(VAR_40, VAR_40->top_self, "inspect", VAR_4, FUNC_3());
  FUNC_16(VAR_40, VAR_40->top_self, "to_s", VAR_4, FUNC_3());
  FUNC_16(VAR_40, VAR_40->top_self, "define_method", VAR_39, FUNC_1(1,1));
}
