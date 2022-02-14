
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
 scalar_t__ FUNC_2 (int *,int,struct RClass*) ;
 int FUNC_3 (struct RObject*) ;

__attribute__((used)) static mrb_value
FUNC_4(mrb_state *VAR_1, mrb_value VAR_2)
{
  struct RClass *VAR_3 = FUNC_1(VAR_2);
  enum mrb_vtype VAR_4 = FUNC_0(VAR_3);


  if (VAR_4 == 0) VAR_4 = VAR_0;
  return FUNC_3((struct RObject*)FUNC_2(VAR_1, VAR_4, VAR_3));
}
