
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int mrb_value ;
struct TYPE_9__ {TYPE_2__* c; } ;
typedef TYPE_3__ mrb_state ;
typedef int mrb_int ;
struct TYPE_8__ {TYPE_1__* ci; } ;
struct TYPE_7__ {int target_class; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,char*,int const**,int *,int *) ;
 int FUNC_2 (TYPE_3__*,int ,int ,int ,int const*) ;

__attribute__((used)) static mrb_value
FUNC_3(mrb_state *VAR_0, mrb_value VAR_1)
{
  const mrb_value *VAR_2;
  mrb_int VAR_3;
  mrb_value VAR_4;

  FUNC_1(VAR_0, "*&!", &VAR_2, &VAR_3, &VAR_4);

  VAR_0->c->ci->target_class = FUNC_0(VAR_1);
  return FUNC_2(VAR_0, VAR_4, VAR_1, VAR_3, VAR_2);
}
