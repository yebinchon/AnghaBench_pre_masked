
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct mrb_rational {int dummy; } ;
struct RClass {int dummy; } ;
struct TYPE_8__ {struct RClass* fixnum_class; } ;
typedef TYPE_1__ mrb_state ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct RClass*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 struct RClass* FUNC_5 (TYPE_1__*,char*,int ) ;
 int FUNC_6 (TYPE_1__*,struct RClass*,char*,int ,int ) ;
 int FUNC_7 (TYPE_1__*,struct RClass*,char*,int ,int ) ;
 int FUNC_8 (TYPE_1__*,struct RClass*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void FUNC_9(mrb_state *VAR_11)
{
  struct RClass *VAR_12;

  VAR_12 = FUNC_5(VAR_11, "Rational", FUNC_4(VAR_11, "Numeric"));




  FUNC_2(VAR_12, VAR_1);

  FUNC_8(VAR_11, VAR_12, "new");
  FUNC_6(VAR_11, VAR_12, "_new", VAR_7, FUNC_1(2));
  FUNC_7(VAR_11, VAR_12, "numerator", VAR_6, FUNC_0());
  FUNC_7(VAR_11, VAR_12, "denominator", VAR_4, FUNC_0());

  FUNC_7(VAR_11, VAR_12, "to_f", VAR_8, FUNC_0());

  FUNC_7(VAR_11, VAR_12, "to_i", VAR_9, FUNC_0());
  FUNC_7(VAR_11, VAR_12, "to_r", VAR_10, FUNC_0());
  FUNC_7(VAR_11, VAR_12, "negative?", VAR_5, FUNC_0());
  FUNC_7(VAR_11, VAR_11->fixnum_class, "to_r", VAR_3, FUNC_0());
}
