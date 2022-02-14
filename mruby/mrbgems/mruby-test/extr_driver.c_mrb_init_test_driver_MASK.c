
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_10__ {struct RClass* kernel_module; } ;
typedef TYPE_1__ mrb_state ;
typedef scalar_t__ mrb_bool ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,struct RClass*,char*,int ) ;
 int FUNC_3 (TYPE_1__*,struct RClass*,char*,int ,int ) ;
 struct RClass* FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,char*) ;
 int FUNC_10 () ;
 int VAR_4 ;

void
FUNC_11(mrb_state *VAR_5, mrb_bool VAR_6)
{
  struct RClass *VAR_7, *VAR_8;

  VAR_7 = VAR_5->kernel_module;
  FUNC_3(VAR_5, VAR_7, "t_print", VAR_4, FUNC_0());
  FUNC_3(VAR_5, VAR_7, "_str_match?", VAR_3, FUNC_1(2));

  VAR_8 = FUNC_4(VAR_5, "Mrbtest");

  FUNC_2(VAR_5, VAR_8, "FIXNUM_MAX", FUNC_5(VAR_1));
  FUNC_2(VAR_5, VAR_8, "FIXNUM_MIN", FUNC_5(VAR_2));
  FUNC_2(VAR_5, VAR_8, "FIXNUM_BIT", FUNC_5(VAR_0));





  FUNC_2(VAR_5, VAR_8, "FLOAT_TOLERANCE", FUNC_6(VAR_5, 1e-12));



  FUNC_8(VAR_5);

  if (VAR_6) {
    FUNC_7(VAR_5, FUNC_9(VAR_5, "$mrbtest_verbose"), FUNC_10());
  }
}
