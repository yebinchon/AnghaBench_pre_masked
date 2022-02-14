
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RString {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 scalar_t__ FUNC_0 (struct RString*) ;
 int FUNC_1 (int) ;
 struct RString* FUNC_2 (int ) ;

__attribute__((used)) static mrb_value
FUNC_3(mrb_state *VAR_0, mrb_value VAR_1)
{
  struct RString *VAR_2 = FUNC_2(VAR_1);

  return FUNC_1(FUNC_0(VAR_2) == 0);
}
