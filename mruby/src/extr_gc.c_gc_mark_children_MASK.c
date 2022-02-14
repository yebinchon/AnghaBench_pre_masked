
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mrb_context {int dummy; } ;
struct TYPE_10__ {scalar_t__ fshared; } ;
struct TYPE_11__ {TYPE_3__ aux; } ;
struct TYPE_12__ {TYPE_4__ heap; } ;
struct RString {TYPE_5__ as; } ;
struct RRange {int dummy; } ;
struct TYPE_8__ {scalar_t__ env; } ;
struct RProc {TYPE_1__ e; scalar_t__ upper; } ;
struct RObject {int dummy; } ;
struct RHash {int dummy; } ;
struct RFiber {struct mrb_context* cxt; } ;
struct REnv {int * stack; TYPE_2__* cxt; } ;
struct RClass {scalar_t__ super; } ;
struct RBasic {int tt; scalar_t__ c; int gcnext; } ;
struct RArray {int dummy; } ;
typedef int mrb_state ;
typedef size_t mrb_int ;
struct TYPE_13__ {int gray_list; } ;
typedef TYPE_6__ mrb_gc ;
struct TYPE_9__ {scalar_t__ fib; } ;


 size_t FUNC_0 (struct RArray*) ;
 int * FUNC_1 (struct RArray*) ;
 size_t FUNC_2 (struct REnv*) ;
 int FUNC_3 (struct REnv*) ;
 int FUNC_4 (struct RClass*,int ) ;
 int VAR_0 ;
 int FUNC_5 (struct RBasic*) ;
 int FUNC_6 (struct RBasic*) ;
 int FUNC_7 (int *,struct mrb_context*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,struct RBasic*) ;
 int FUNC_10 (int *,struct RHash*) ;
 int FUNC_11 (int *,struct RObject*) ;
 int FUNC_12 (int *,struct RClass*) ;
 int FUNC_13 (int *,struct RRange*) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (struct RBasic*) ;

__attribute__((used)) static void
FUNC_16(mrb_state *VAR_1, mrb_gc *VAR_2, struct RBasic *VAR_3)
{
  FUNC_8(FUNC_6(VAR_3));
  FUNC_15(VAR_3);
  VAR_2->gray_list = VAR_3->gcnext;
  FUNC_9(VAR_1, (struct RBasic*)VAR_3->c);
  switch (VAR_3->tt) {
  case 134:
    {
      struct RClass *VAR_4 = (struct RClass*)VAR_3;
      if (FUNC_4(VAR_4, VAR_0))
        FUNC_12(VAR_1, VAR_4);
      FUNC_9(VAR_1, (struct RBasic*)((struct RClass*)VAR_3)->super);
    }
    break;

  case 140:
  case 133:
  case 129:
    {
      struct RClass *VAR_5 = (struct RClass*)VAR_3;

      FUNC_12(VAR_1, VAR_5);
      FUNC_9(VAR_1, (struct RBasic*)VAR_5->super);
    }


  case 132:
  case 139:
  case 137:
    FUNC_11(VAR_1, (struct RObject*)VAR_3);
    break;

  case 131:
    {
      struct RProc *VAR_6 = (struct RProc*)VAR_3;

      FUNC_9(VAR_1, (struct RBasic*)VAR_6->upper);
      FUNC_9(VAR_1, (struct RBasic*)VAR_6->e.env);
    }
    break;

  case 138:
    {
      struct REnv *VAR_7 = (struct REnv*)VAR_3;
      mrb_int VAR_8, VAR_9;

      if (FUNC_3(VAR_7) && VAR_7->cxt && VAR_7->cxt->fib) {
        FUNC_9(VAR_1, (struct RBasic*)VAR_7->cxt->fib);
      }
      VAR_9 = FUNC_2(VAR_7);
      for (VAR_8=0; VAR_8<VAR_9; VAR_8++) {
        FUNC_14(VAR_1, VAR_7->stack[VAR_8]);
      }
    }
    break;

  case 136:
    {
      struct mrb_context *VAR_10 = ((struct RFiber*)VAR_3)->cxt;

      if (VAR_10) FUNC_7(VAR_1, VAR_10);
    }
    break;

  case 141:
    {
      struct RArray *VAR_11 = (struct RArray*)VAR_3;
      size_t VAR_12, VAR_13;

      for (VAR_12=0,VAR_13=FUNC_0(VAR_11); VAR_12<VAR_13; VAR_12++) {
        FUNC_14(VAR_1, FUNC_1(VAR_11)[VAR_12]);
      }
    }
    break;

  case 135:
    FUNC_11(VAR_1, (struct RObject*)VAR_3);
    FUNC_10(VAR_1, (struct RHash*)VAR_3);
    break;

  case 128:
    if (FUNC_5(VAR_3)) {
      struct RString *VAR_14 = (struct RString*)VAR_3;
      FUNC_9(VAR_1, (struct RBasic*)VAR_14->as.heap.aux.fshared);
    }
    break;

  case 130:
    FUNC_13(VAR_1, (struct RRange*)VAR_3);
    break;

  default:
    break;
  }
}
