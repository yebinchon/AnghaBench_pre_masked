
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 char* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_3(mrb_state *VAR_0, mrb_value VAR_1, mrb_value VAR_2, mrb_int VAR_3, unsigned int VAR_4)
{
  VAR_2 = FUNC_2(VAR_0, VAR_2, VAR_3 + 1);
  FUNC_0(VAR_2)[VAR_3] = (char)FUNC_1(VAR_1);
  return 1;
}
