
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_7__ {struct RClass* kernel_module; int object_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_1__*,struct RClass*,char*,int ,int ) ;
 int FUNC_6 (TYPE_1__*,struct RClass*,char*,int ,int ) ;
 struct RClass* FUNC_7 (TYPE_1__*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (TYPE_1__*,int ,struct RClass*) ;
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

void
FUNC_9(mrb_state *VAR_24)
{
  struct RClass *VAR_25;

  VAR_24->kernel_module = VAR_25 = FUNC_7(VAR_24, "Kernel");
  FUNC_5(VAR_24, VAR_25, "block_given?", VAR_2, FUNC_2());
  FUNC_5(VAR_24, VAR_25, "iterator?", VAR_2, FUNC_2());
;
  FUNC_5(VAR_24, VAR_25, "raise", VAR_3, FUNC_3(2));


  FUNC_6(VAR_24, VAR_25, "===", VAR_1, FUNC_4(1));
  FUNC_6(VAR_24, VAR_25, "block_given?", VAR_2, FUNC_2());
  FUNC_6(VAR_24, VAR_25, "class", VAR_6, FUNC_2());
  FUNC_6(VAR_24, VAR_25, "clone", VAR_7, FUNC_2());
  FUNC_6(VAR_24, VAR_25, "dup", VAR_8, FUNC_2());
  FUNC_6(VAR_24, VAR_25, "eql?", VAR_9, FUNC_4(1));
  FUNC_6(VAR_24, VAR_25, "extend", VAR_10, FUNC_0());
  FUNC_6(VAR_24, VAR_25, "freeze", VAR_11, FUNC_2());
  FUNC_6(VAR_24, VAR_25, "frozen?", VAR_12, FUNC_2());
  FUNC_6(VAR_24, VAR_25, "hash", VAR_13, FUNC_2());
  FUNC_6(VAR_24, VAR_25, "initialize_copy", VAR_15, FUNC_4(1));
  FUNC_6(VAR_24, VAR_25, "inspect", VAR_16, FUNC_2());
  FUNC_6(VAR_24, VAR_25, "instance_of?", VAR_22, FUNC_4(1));

  FUNC_6(VAR_24, VAR_25, "is_a?", VAR_17, FUNC_4(1));
  FUNC_6(VAR_24, VAR_25, "iterator?", VAR_2, FUNC_2());
  FUNC_6(VAR_24, VAR_25, "kind_of?", VAR_17, FUNC_4(1));
  FUNC_6(VAR_24, VAR_25, "method_missing", VAR_18, FUNC_0());
  FUNC_6(VAR_24, VAR_25, "nil?", VAR_4, FUNC_2());
  FUNC_6(VAR_24, VAR_25, "object_id", VAR_14, FUNC_2());
  FUNC_6(VAR_24, VAR_25, "raise", VAR_3, FUNC_0());
  FUNC_6(VAR_24, VAR_25, "remove_instance_variable", VAR_19,FUNC_4(1));
  FUNC_6(VAR_24, VAR_25, "respond_to?", VAR_23, FUNC_1(1,1));
  FUNC_6(VAR_24, VAR_25, "to_s", VAR_0, FUNC_2());
  FUNC_6(VAR_24, VAR_25, "__case_eqq", VAR_5, FUNC_4(1));
  FUNC_6(VAR_24, VAR_25, "__to_int", VAR_20, FUNC_2());
  FUNC_6(VAR_24, VAR_25, "__to_str", VAR_21, FUNC_2());

  FUNC_8(VAR_24, VAR_24->object_class, VAR_24->kernel_module);
}
