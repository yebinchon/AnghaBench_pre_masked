
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct RClass {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int VFNative ;
struct TYPE_4__ {int type; int v; } ;
typedef TYPE_1__ VFArgument ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ,struct RClass*) ;

__attribute__((used)) static VFArgument*
FUNC_2(mrb_state *VAR_1, mrb_value VAR_2, struct RClass *VAR_3,
             VFArgument *VAR_4)
{
  if (FUNC_1(VAR_1, VAR_2, VAR_3)) {
    const VFNative *VAR_5 = (VFNative*)FUNC_0(VAR_2);
    *(VFNative*)VAR_4 = *VAR_5;
  }
  else {
    VAR_4->v = VAR_2;
    VAR_4->type = VAR_0;
  }
  return VAR_4;
}
