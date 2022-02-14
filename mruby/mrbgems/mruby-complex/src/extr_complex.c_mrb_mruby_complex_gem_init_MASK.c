
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct mrb_complex {int dummy; } ;
struct RClass {int dummy; } ;
struct TYPE_8__ {struct RClass* kernel_module; } ;
typedef TYPE_1__ mrb_state ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct RClass*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 struct RClass* FUNC_6 (TYPE_1__*,char*,int ) ;
 int FUNC_7 (TYPE_1__*,struct RClass*,char*,int ,int) ;
 int FUNC_8 (TYPE_1__*,struct RClass*,char*,int ,int) ;
 int FUNC_9 (TYPE_1__*,struct RClass*,char*) ;

void FUNC_10(mrb_state *VAR_10)
{
  struct RClass *VAR_11;




  VAR_11 = FUNC_6(VAR_10, "Complex", FUNC_5(VAR_10, "Numeric"));



  FUNC_3(VAR_11, VAR_1);

  FUNC_9(VAR_10, VAR_11, "new");
  FUNC_7(VAR_10, VAR_11, "rectangular", VAR_6, FUNC_2(1)|FUNC_1(1));
  FUNC_7(VAR_10, VAR_11, "rect", VAR_6, FUNC_2(1)|FUNC_1(1));
  FUNC_8(VAR_10, VAR_10->kernel_module, "Complex", VAR_6, FUNC_2(1)|FUNC_1(1));
  FUNC_8(VAR_10, VAR_11, "real", VAR_5, FUNC_0());
  FUNC_8(VAR_10, VAR_11, "imaginary", VAR_4, FUNC_0());
  FUNC_8(VAR_10, VAR_11, "to_f", VAR_8, FUNC_0());
  FUNC_8(VAR_10, VAR_11, "to_i", VAR_9, FUNC_0());
  FUNC_8(VAR_10, VAR_11, "to_c", VAR_7, FUNC_0());
  FUNC_8(VAR_10, VAR_11, "__div__", VAR_3, FUNC_2(1));
}
