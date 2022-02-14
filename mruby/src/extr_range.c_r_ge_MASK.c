
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;
typedef int mrb_bool ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static mrb_bool
FUNC_1(mrb_state *VAR_2, mrb_value VAR_3, mrb_value VAR_4)
{
  mrb_int VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);

  if (VAR_5 == 0 || VAR_5 == 1) return VAR_1;
  return VAR_0;
}
