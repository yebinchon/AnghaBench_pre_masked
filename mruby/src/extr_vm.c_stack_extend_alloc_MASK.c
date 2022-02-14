
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int mrb_value ;
struct TYPE_8__ {int stack_err; TYPE_1__* c; } ;
typedef TYPE_2__ mrb_state ;
typedef scalar_t__ mrb_int ;
struct TYPE_7__ {int * stbase; int * stend; int * stack; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_2__*,int *,int *,size_t) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *,int) ;
 int FUNC_4 (int *,size_t) ;

__attribute__((used)) static void
FUNC_5(mrb_state *VAR_2, mrb_int VAR_3)
{
  mrb_value *VAR_4 = VAR_2->c->stbase;
  mrb_value *VAR_5;
  size_t VAR_6 = VAR_2->c->stend - VAR_2->c->stbase;
  size_t VAR_7 = VAR_6;
  size_t VAR_8 = VAR_2->c->stack - VAR_2->c->stbase;

  if (VAR_8 > VAR_7) VAR_7 = VAR_8;
  if (VAR_3 <= VAR_0)
    VAR_7 += VAR_0;
  else
    VAR_7 += VAR_3;


  VAR_5 = (mrb_value *)FUNC_3(VAR_2, VAR_2->c->stbase, sizeof(mrb_value) * VAR_7);
  if (VAR_5 == ((void*)0)) {
    FUNC_1(VAR_2, FUNC_2(VAR_2->stack_err));
  }
  FUNC_4(&(VAR_5[VAR_6]), VAR_7 - VAR_6);
  FUNC_0(VAR_2, VAR_4, VAR_5, VAR_6);
  VAR_2->c->stbase = VAR_5;
  VAR_2->c->stack = VAR_2->c->stbase + VAR_8;
  VAR_2->c->stend = VAR_2->c->stbase + VAR_7;



  if (VAR_7 > VAR_1) {
    FUNC_1(VAR_2, FUNC_2(VAR_2->stack_err));
  }
}
