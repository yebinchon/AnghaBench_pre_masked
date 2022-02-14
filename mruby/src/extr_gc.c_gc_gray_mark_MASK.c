
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_context {size_t stack; size_t stbase; size_t stend; size_t eidx; int * ci; int * cibase; int status; } ;
struct RObject {int dummy; } ;
struct RHash {int dummy; } ;
struct RFiber {struct mrb_context* cxt; } ;
struct RClass {int dummy; } ;
struct RBasic {int tt; } ;
struct RArray {int dummy; } ;
typedef int mrb_state ;
typedef int mrb_gc ;
typedef int mrb_callinfo ;


 size_t FUNC_0 (struct RArray*) ;
 size_t FUNC_1 (struct RBasic*) ;
 int VAR_0 ;
 size_t FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,struct RBasic*) ;
 size_t FUNC_4 (int *,struct RHash*) ;
 size_t FUNC_5 (int *,struct RObject*) ;
 size_t FUNC_6 (int *,struct RClass*) ;

__attribute__((used)) static size_t
FUNC_7(mrb_state *VAR_1, mrb_gc *VAR_2, struct RBasic *VAR_3)
{
  size_t VAR_4 = 0;

  FUNC_3(VAR_1, VAR_2, VAR_3);

  switch (VAR_3->tt) {
  case 133:
    VAR_4++;
    break;

  case 139:
  case 128:
  case 132:
    {
      struct RClass *VAR_5 = (struct RClass*)VAR_3;

      VAR_4 += FUNC_5(VAR_1, (struct RObject*)VAR_3);
      VAR_4 += FUNC_6(VAR_1, VAR_5);
      VAR_4++;
    }
    break;

  case 131:
  case 138:
  case 136:
    VAR_4 += FUNC_5(VAR_1, (struct RObject*)VAR_3);
    break;

  case 137:
    VAR_4 += FUNC_1(VAR_3);
    break;

  case 135:
    {
      struct mrb_context *VAR_6 = ((struct RFiber*)VAR_3)->cxt;
      size_t VAR_7;
      mrb_callinfo *VAR_8;

      if (!VAR_6 || VAR_6->status == VAR_0) break;


      VAR_7 = VAR_6->stack - VAR_6->stbase;

      if (VAR_6->ci) {
        VAR_7 += FUNC_2(VAR_6->ci);
      }
      if (VAR_6->stbase + VAR_7 > VAR_6->stend) VAR_7 = VAR_6->stend - VAR_6->stbase;
      VAR_4 += VAR_7;


      VAR_4 += VAR_6->eidx;


      if (VAR_6->cibase) {
        for (VAR_7=0, VAR_8 = VAR_6->cibase; VAR_8 <= VAR_6->ci; VAR_7++, VAR_8++)
          ;
      }
      VAR_4 += VAR_7;
    }
    break;

  case 140:
    {
      struct RArray *VAR_9 = (struct RArray*)VAR_3;
      VAR_4 += FUNC_0(VAR_9);
    }
    break;

  case 134:
    VAR_4 += FUNC_5(VAR_1, (struct RObject*)VAR_3);
    VAR_4 += FUNC_4(VAR_1, (struct RHash*)VAR_3);
    break;

  case 130:
  case 129:
    VAR_4+=2;
    break;

  default:
    break;
  }
  return VAR_4;
}
