
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mrb_context {TYPE_1__* ci; } ;
struct REnv {int dummy; } ;
struct TYPE_6__ {struct mrb_context* c; } ;
typedef TYPE_2__ mrb_state ;
struct TYPE_5__ {struct REnv* env; } ;


 int FUNC_0 (TYPE_2__*,struct REnv*) ;

__attribute__((used)) static inline void
FUNC_1(mrb_state *VAR_0)
{
  struct mrb_context *VAR_1 = VAR_0->c;
  struct REnv *VAR_2 = VAR_1->ci->env;

  VAR_1->ci--;
  if (VAR_2) FUNC_0(VAR_0, VAR_2);
}
