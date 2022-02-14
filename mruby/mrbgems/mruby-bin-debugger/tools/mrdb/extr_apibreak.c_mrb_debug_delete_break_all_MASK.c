
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int mrb_state ;
struct TYPE_3__ {size_t bpnum; int * bp; } ;
typedef TYPE_1__ mrb_debug_context ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;

int32_t
FUNC_1(mrb_state *VAR_2, mrb_debug_context *VAR_3)
{
  uint32_t VAR_4;

  if ((VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0))) {
    return VAR_0;
  }

  for(VAR_4 = 0 ; VAR_4 < VAR_3->bpnum ; VAR_4++) {
    FUNC_0(VAR_2, &VAR_3->bp[VAR_4]);
  }

  VAR_3->bpnum = 0;

  return VAR_1;
}
