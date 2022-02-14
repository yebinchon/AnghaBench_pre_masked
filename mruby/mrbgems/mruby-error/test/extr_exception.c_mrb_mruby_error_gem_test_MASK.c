
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_5__ {int object_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 struct RClass* FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (TYPE_1__*,struct RClass*,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_5(mrb_state *VAR_4)
{
  struct RClass *VAR_5;

  VAR_5 = FUNC_3(VAR_4, "ExceptionTest", VAR_4->object_class);
  FUNC_4(VAR_4, VAR_5, "mrb_protect", VAR_1, FUNC_1() | FUNC_0());
  FUNC_4(VAR_4, VAR_5, "mrb_ensure", VAR_0, FUNC_2(2));
  FUNC_4(VAR_4, VAR_5, "mrb_rescue", VAR_2, FUNC_2(2));
  FUNC_4(VAR_4, VAR_5, "mrb_rescue_exceptions", VAR_3, FUNC_2(2));
}
