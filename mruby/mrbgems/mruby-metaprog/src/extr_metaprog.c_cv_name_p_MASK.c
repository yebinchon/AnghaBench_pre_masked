
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_state ;
typedef int mrb_int ;
typedef int mrb_bool ;


 int FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const*,int) ;

__attribute__((used)) static mrb_bool
FUNC_2(mrb_state *VAR_0, const char *VAR_1, mrb_int VAR_2)
{
  return VAR_2 > 2 && VAR_1[0] == '@' && VAR_1[1] == '@' &&
         !FUNC_0(VAR_1[2]) && FUNC_1(VAR_1+2, VAR_2-2);
}
