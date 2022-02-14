
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct RBasic {int dummy; } ;
struct TYPE_9__ {scalar_t__ c; scalar_t__ root_c; scalar_t__ arena_err; scalar_t__ stack_err; scalar_t__ nomem_err; scalar_t__ exc; scalar_t__ top_self; scalar_t__ eStandardError_class; scalar_t__ eException_class; scalar_t__ kernel_module; scalar_t__ symbol_class; scalar_t__ nil_class; scalar_t__ false_class; scalar_t__ true_class; scalar_t__ fixnum_class; scalar_t__ float_class; scalar_t__ range_class; scalar_t__ hash_class; scalar_t__ array_class; scalar_t__ string_class; scalar_t__ proc_class; scalar_t__ module_class; scalar_t__ class_class; scalar_t__ object_class; } ;
typedef TYPE_1__ mrb_state ;
struct TYPE_10__ {int arena_idx; struct RBasic** arena; int * atomic_gray_list; int * gray_list; } ;
typedef TYPE_2__ mrb_gc ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,struct RBasic*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(mrb_state *VAR_0, mrb_gc *VAR_1)
{
  int VAR_2, VAR_3;

  if (!FUNC_0(VAR_1)) {
    VAR_1->gray_list = ((void*)0);
    VAR_1->atomic_gray_list = ((void*)0);
  }

  FUNC_3(VAR_0);

  for (VAR_2=0,VAR_3=VAR_1->arena_idx; VAR_2<VAR_3; VAR_2++) {
    FUNC_2(VAR_0, VAR_1->arena[VAR_2]);
  }

  FUNC_2(VAR_0, (struct RBasic*)VAR_0->object_class);


  FUNC_2(VAR_0, (struct RBasic*)VAR_0->class_class);
  FUNC_2(VAR_0, (struct RBasic*)VAR_0->module_class);
  FUNC_2(VAR_0, (struct RBasic*)VAR_0->proc_class);
  FUNC_2(VAR_0, (struct RBasic*)VAR_0->string_class);
  FUNC_2(VAR_0, (struct RBasic*)VAR_0->array_class);
  FUNC_2(VAR_0, (struct RBasic*)VAR_0->hash_class);
  FUNC_2(VAR_0, (struct RBasic*)VAR_0->range_class);


  FUNC_2(VAR_0, (struct RBasic*)VAR_0->float_class);

  FUNC_2(VAR_0, (struct RBasic*)VAR_0->fixnum_class);
  FUNC_2(VAR_0, (struct RBasic*)VAR_0->true_class);
  FUNC_2(VAR_0, (struct RBasic*)VAR_0->false_class);
  FUNC_2(VAR_0, (struct RBasic*)VAR_0->nil_class);
  FUNC_2(VAR_0, (struct RBasic*)VAR_0->symbol_class);
  FUNC_2(VAR_0, (struct RBasic*)VAR_0->kernel_module);

  FUNC_2(VAR_0, (struct RBasic*)VAR_0->eException_class);
  FUNC_2(VAR_0, (struct RBasic*)VAR_0->eStandardError_class);


  FUNC_2(VAR_0, (struct RBasic*)VAR_0->top_self);

  FUNC_2(VAR_0, (struct RBasic*)VAR_0->exc);

  FUNC_2(VAR_0, (struct RBasic*)VAR_0->nomem_err);
  FUNC_2(VAR_0, (struct RBasic*)VAR_0->stack_err);




  FUNC_1(VAR_0, VAR_0->c);
  if (VAR_0->root_c != VAR_0->c) {
    FUNC_1(VAR_0, VAR_0->root_c);
  }
}
