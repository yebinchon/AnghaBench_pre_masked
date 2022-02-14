
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int mrb_state ;
struct TYPE_5__ {size_t bpnum; TYPE_1__* bp; } ;
typedef TYPE_2__ mrb_debug_context ;
typedef int int32_t ;
struct TYPE_4__ {int enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int32_t
FUNC_0(mrb_state *VAR_3, mrb_debug_context *VAR_4)
{
  uint32_t VAR_5;

  if ((VAR_3 == ((void*)0)) || (VAR_4 == ((void*)0))) {
    return VAR_0;
  }

  for(VAR_5 = 0 ; VAR_5 < VAR_4->bpnum; VAR_5++) {
    VAR_4->bp[VAR_5].enable = VAR_2;
  }

  return VAR_1;
}
