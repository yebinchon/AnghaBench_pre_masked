
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RProc {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_sym ;
typedef int mrb_state ;
typedef int mrb_method_t ;
typedef int mrb_int ;


 int FUNC_0 (int ,struct RProc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *,char*,int *,int **,int *) ;
 struct RProc* FUNC_4 (int *,int ,int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static mrb_value
FUNC_5(mrb_state *VAR_1, mrb_value VAR_2)
{
  mrb_sym VAR_3;
  mrb_value *VAR_4; mrb_int VAR_5;
  mrb_method_t VAR_6;
  struct RProc *VAR_7;
  FUNC_3(VAR_1, "na", &VAR_3, &VAR_4, &VAR_5);
  VAR_7 = FUNC_4(VAR_1, VAR_0, VAR_5, VAR_4);
  FUNC_0(VAR_6, VAR_7);
  FUNC_2(VAR_1, FUNC_1(VAR_2), VAR_3, VAR_6);
  return VAR_2;
}
