
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_context {int dummy; } ;
struct RFiber {scalar_t__ tt; struct mrb_context* cxt; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct RFiber* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,char*) ;

__attribute__((used)) static struct mrb_context*
FUNC_3(mrb_state *VAR_2, mrb_value VAR_3)
{
  struct RFiber *VAR_4 = FUNC_0(VAR_3);

  FUNC_1(VAR_4->tt == VAR_1);
  if (!VAR_4->cxt) {
    FUNC_2(VAR_2, VAR_0, "uninitialized Fiber");
  }
  return VAR_4->cxt;
}
