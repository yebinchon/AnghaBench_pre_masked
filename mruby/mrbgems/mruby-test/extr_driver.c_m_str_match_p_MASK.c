
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,char const**,int *,char const**,int *) ;
 int FUNC_2 (int *,char const*,int ,char const*,int ) ;

__attribute__((used)) static mrb_value
FUNC_3(mrb_state *VAR_0, mrb_value VAR_1)
{
  const char *VAR_2, *VAR_3;
  mrb_int VAR_4, VAR_5;

  FUNC_1(VAR_0, "ss", &VAR_2, &VAR_4, &VAR_3, &VAR_5);
  return FUNC_0(FUNC_2(VAR_0, VAR_2, VAR_4, VAR_3, VAR_5));
}
