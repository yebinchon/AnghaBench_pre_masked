
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RObject {int dummy; } ;
struct RClass {int dummy; } ;
typedef int mrb_sym ;
typedef int mrb_state ;


 int FUNC_0 (int *,struct RClass*,struct RClass*,int ) ;
 int FUNC_1 (int *,struct RObject*,int ,int ) ;
 int FUNC_2 (struct RClass*) ;

__attribute__((used)) static void
FUNC_3(mrb_state *VAR_0, struct RClass *VAR_1, struct RClass *VAR_2, mrb_sym VAR_3)
{
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
  FUNC_1(VAR_0, (struct RObject*)VAR_1, VAR_3, FUNC_2(VAR_2));
}
