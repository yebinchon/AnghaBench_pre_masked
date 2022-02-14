
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RObject {int dummy; } ;
struct RClass {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef enum mrb_vtype { ____Placeholder_mrb_vtype } mrb_vtype ;


 int FUNC_0 (struct RClass*) ;
 int VAR_0 ;
 struct RClass* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int,struct RClass*) ;
 int FUNC_4 (struct RObject*) ;

mrb_value
FUNC_5(mrb_state *VAR_1, mrb_value VAR_2)
{
  struct RClass *VAR_3 = FUNC_1(VAR_2);
  enum mrb_vtype VAR_4 = FUNC_0(VAR_3);
  mrb_value VAR_5;


  if (VAR_4 == 0) VAR_4 = VAR_0;
  VAR_5 = FUNC_4((struct RObject*)FUNC_3(VAR_1, VAR_4, VAR_3));
  return FUNC_2(VAR_1, VAR_5);
}
