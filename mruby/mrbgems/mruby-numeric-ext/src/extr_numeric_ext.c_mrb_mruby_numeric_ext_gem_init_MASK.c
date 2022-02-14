
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_7__ {int float_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (TYPE_1__*,int ,char*,int ) ;
 int FUNC_2 (TYPE_1__*,struct RClass*,char*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct RClass* FUNC_5 (TYPE_1__*,char*) ;

void
FUNC_6(mrb_state* VAR_13)
{
  struct RClass *VAR_14 = FUNC_5(VAR_13, "Integral");

  FUNC_2(VAR_13, VAR_14, "allbits?", VAR_10, FUNC_0(1));
  FUNC_2(VAR_13, VAR_14, "anybits?", VAR_11, FUNC_0(1));
  FUNC_2(VAR_13, VAR_14, "nobits?", VAR_12, FUNC_0(1));


  FUNC_1(VAR_13, VAR_13->float_class, "RADIX", FUNC_3(VAR_9));
  FUNC_1(VAR_13, VAR_13->float_class, "MANT_DIG", FUNC_3(VAR_2));
  FUNC_1(VAR_13, VAR_13->float_class, "EPSILON", FUNC_4(VAR_13, VAR_1));
  FUNC_1(VAR_13, VAR_13->float_class, "DIG", FUNC_3(VAR_0));
  FUNC_1(VAR_13, VAR_13->float_class, "MIN_EXP", FUNC_3(VAR_8));
  FUNC_1(VAR_13, VAR_13->float_class, "MIN", FUNC_4(VAR_13, VAR_6));
  FUNC_1(VAR_13, VAR_13->float_class, "MIN_10_EXP", FUNC_3(VAR_7));
  FUNC_1(VAR_13, VAR_13->float_class, "MAX_EXP", FUNC_3(VAR_5));
  FUNC_1(VAR_13, VAR_13->float_class, "MAX", FUNC_4(VAR_13, VAR_3));
  FUNC_1(VAR_13, VAR_13->float_class, "MAX_10_EXP", FUNC_3(VAR_4));

}
