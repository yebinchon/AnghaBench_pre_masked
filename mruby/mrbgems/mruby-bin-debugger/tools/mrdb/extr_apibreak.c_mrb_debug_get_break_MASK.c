
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int mrb_state ;
struct TYPE_8__ {TYPE_1__* bp; } ;
typedef TYPE_2__ mrb_debug_context ;
struct TYPE_9__ {int type; int point; int enable; int bpno; } ;
typedef TYPE_3__ mrb_debug_breakpoint ;
typedef size_t int32_t ;
struct TYPE_7__ {int type; int point; int enable; int bpno; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (TYPE_2__*,int ) ;

int32_t
FUNC_1(mrb_state *VAR_2, mrb_debug_context *VAR_3, uint32_t VAR_4, mrb_debug_breakpoint *VAR_5)
{
  int32_t VAR_6;

  if ((VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)) || (VAR_5 == ((void*)0))) {
    return VAR_1;
  }

  VAR_6 = FUNC_0(VAR_3, VAR_4);
  if (VAR_6 == VAR_0) {
    return VAR_0;
  }

  VAR_5->bpno = VAR_3->bp[VAR_6].bpno;
  VAR_5->enable = VAR_3->bp[VAR_6].enable;
  VAR_5->point = VAR_3->bp[VAR_6].point;
  VAR_5->type = VAR_3->bp[VAR_6].type;

  return 0;
}
