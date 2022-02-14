
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_5__ {struct RClass* symbol_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,struct RClass*,char*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,struct RClass*,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_3(mrb_state* VAR_2)
{
  struct RClass *VAR_3 = VAR_2->symbol_class;



  FUNC_2(VAR_2, VAR_3, "length", VAR_1, FUNC_0());
  FUNC_2(VAR_2, VAR_3, "size", VAR_1, FUNC_0());
}
