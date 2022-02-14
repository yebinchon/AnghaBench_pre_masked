
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_4__ {struct RClass* hash_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,struct RClass*,char*,int ,int ) ;

void
FUNC_2(mrb_state *VAR_2)
{
  struct RClass *VAR_3;

  VAR_3 = VAR_2->hash_class;
  FUNC_1(VAR_2, VAR_3, "values_at", VAR_1, FUNC_0());
  FUNC_1(VAR_2, VAR_3, "slice", VAR_0, FUNC_0());
}
