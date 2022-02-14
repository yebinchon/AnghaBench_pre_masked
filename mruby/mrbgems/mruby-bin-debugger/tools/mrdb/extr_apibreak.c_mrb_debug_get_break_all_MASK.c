
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int mrb_state ;
struct TYPE_3__ {scalar_t__ bpnum; int bp; } ;
typedef TYPE_1__ mrb_debug_context ;
typedef int mrb_debug_breakpoint ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,int) ;

int32_t
FUNC_1(mrb_state *VAR_1, mrb_debug_context *VAR_2, uint32_t VAR_3, mrb_debug_breakpoint *VAR_4)
{
  uint32_t VAR_5 = 0;

  if ((VAR_1 == ((void*)0)) || (VAR_2 == ((void*)0)) || (VAR_4 == ((void*)0))) {
    return VAR_0;
  }

  if (VAR_2->bpnum >= VAR_3) {
    VAR_5 = VAR_3;
  }
  else {
    VAR_5 = VAR_2->bpnum;
  }

  FUNC_0(VAR_4, VAR_2->bp, sizeof(mrb_debug_breakpoint) * VAR_5);

  return VAR_5;
}
