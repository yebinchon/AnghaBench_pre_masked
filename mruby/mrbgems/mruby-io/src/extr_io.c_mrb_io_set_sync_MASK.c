
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_io {int sync; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_bool ;


 struct mrb_io* FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int *) ;

mrb_value
FUNC_3(mrb_state *VAR_0, mrb_value VAR_1)
{
  struct mrb_io *VAR_2;
  mrb_bool VAR_3;

  VAR_2 = FUNC_0(VAR_0, VAR_1);
  FUNC_2(VAR_0, "b", &VAR_3);
  VAR_2->sync = VAR_3;
  return FUNC_1(VAR_3);
}
