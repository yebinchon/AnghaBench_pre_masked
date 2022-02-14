
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RProc {int dummy; } ;
struct RClass {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_sym ;
typedef int mrb_state ;
typedef int mrb_method_t ;
typedef size_t mrb_int ;


 int FUNC_0 (int ,struct RProc*) ;
 size_t FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,struct RClass*,int ,int ) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 struct RProc* FUNC_8 (int *,int ,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_9 (int const) ;

__attribute__((used)) static void
FUNC_10(mrb_state *VAR_2, mrb_value VAR_3, struct RClass *VAR_4)
{
  const mrb_value *VAR_5 = FUNC_2(VAR_3);
  mrb_int VAR_6;
  mrb_int VAR_7 = FUNC_1(VAR_3);
  int VAR_8 = FUNC_6(VAR_2);

  for (VAR_6=0; VAR_6<VAR_7; VAR_6++) {
    mrb_sym VAR_9 = FUNC_9(VAR_5[VAR_6]);
    mrb_method_t VAR_10;
    mrb_value VAR_11 = FUNC_4(VAR_6);
    struct RProc *VAR_12 = FUNC_8(VAR_2, VAR_0, 1, &VAR_11);
    struct RProc *VAR_13 = FUNC_8(VAR_2, VAR_1, 1, &VAR_11);
    FUNC_0(VAR_10, VAR_12);
    FUNC_3(VAR_2, VAR_4, VAR_9, VAR_10);
    FUNC_0(VAR_10, VAR_13);
    FUNC_3(VAR_2, VAR_4, FUNC_7(VAR_2, VAR_9), VAR_10);
    FUNC_5(VAR_2, VAR_8);
  }
}
