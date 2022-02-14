
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct RClass {int dummy; } ;
typedef int mrb_sym ;
typedef int mrb_state ;
struct TYPE_5__ {scalar_t__ bpnum; TYPE_2__* bp; } ;
typedef TYPE_1__ mrb_debug_context ;
struct TYPE_6__ {scalar_t__ type; scalar_t__ enable; } ;
typedef TYPE_2__ mrb_debug_breakpoint ;
typedef int mrb_bool ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,TYPE_2__*,struct RClass*,int ,int *) ;

int32_t
FUNC_1(mrb_state *VAR_4, mrb_debug_context *VAR_5, struct RClass *VAR_6, mrb_sym VAR_7, mrb_bool* VAR_8)
{
  mrb_debug_breakpoint *VAR_9;
  int32_t VAR_10;
  uint32_t VAR_11;

  if ((VAR_4 == ((void*)0)) || (VAR_5 == ((void*)0)) || (VAR_6 == ((void*)0))) {
    return VAR_2;
  }

  VAR_9 = VAR_5->bp;
  for(VAR_11=0; VAR_11<VAR_5->bpnum; VAR_11++) {
    if (VAR_9->type == VAR_0) {
      if (VAR_9->enable == VAR_3) {
        VAR_10 = FUNC_0(VAR_4, VAR_9, VAR_6, VAR_7, VAR_8);
        if (VAR_10 > 0) {
          return VAR_10;
        }
      }
    }
    else if (VAR_9->type == VAR_1) {
      break;
    }
    VAR_9++;
  }

  return 0;
}
