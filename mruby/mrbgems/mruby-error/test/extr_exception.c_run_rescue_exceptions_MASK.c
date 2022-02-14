
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RClass {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 struct RClass* VAR_0 ;
 int FUNC_0 (int *,char*,int *,int *) ;
 int FUNC_1 (int *,int ,int ,int ,int ,int,struct RClass**) ;
 int VAR_1 ;

__attribute__((used)) static mrb_value
FUNC_2(mrb_state *VAR_2, mrb_value VAR_3)
{
  mrb_value VAR_4, VAR_5;
  struct RClass *VAR_6[1];
  FUNC_0(VAR_2, "oo", &VAR_4, &VAR_5);
  VAR_6[0] = VAR_0;
  return FUNC_1(VAR_2, VAR_1, VAR_4, VAR_1, VAR_5, 1, VAR_6);
}
