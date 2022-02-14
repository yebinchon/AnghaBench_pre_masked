
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int mrb_state ;
struct TYPE_4__ {int bpnum; int * bp; } ;
typedef TYPE_1__ mrb_debug_context ;
typedef int mrb_debug_breakpoint ;
typedef size_t int32_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *,int *) ;
 size_t FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int ,int) ;

int32_t
FUNC_4(mrb_state *VAR_3, mrb_debug_context *VAR_4, uint32_t VAR_5)
{
  uint32_t VAR_6;
  int32_t VAR_7;

  if ((VAR_3 == ((void*)0)) ||(VAR_4 == ((void*)0))) {
    return VAR_1;
  }

  VAR_7 = FUNC_1(VAR_4, VAR_5);
  if (VAR_7 == VAR_0) {
    return VAR_0;
  }

  FUNC_0(VAR_3, &VAR_4->bp[VAR_7]);

  for(VAR_6 = VAR_7 ; VAR_6 < VAR_4->bpnum; VAR_6++) {
    if ((VAR_6 + 1) == VAR_4->bpnum) {
      FUNC_3(&VAR_4->bp[VAR_6], 0, sizeof(mrb_debug_breakpoint));
    }
    else {
      FUNC_2(&VAR_4->bp[VAR_6], &VAR_4->bp[VAR_6 + 1], sizeof(mrb_debug_breakpoint));
    }
  }

  VAR_4->bpnum--;

  return VAR_2;
}
