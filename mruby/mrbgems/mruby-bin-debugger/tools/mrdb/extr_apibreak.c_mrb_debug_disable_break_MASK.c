
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int mrb_state ;
struct TYPE_6__ {TYPE_1__* bp; } ;
typedef TYPE_2__ mrb_debug_context ;
typedef size_t int32_t ;
struct TYPE_5__ {int enable; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t FUNC_0 (TYPE_2__*,int ) ;

int32_t
FUNC_1(mrb_state *VAR_4, mrb_debug_context *VAR_5, uint32_t VAR_6)
{
  int32_t VAR_7 = 0;

  if ((VAR_4 == ((void*)0)) || (VAR_5 == ((void*)0))) {
    return VAR_2;
  }

  VAR_7 = FUNC_0(VAR_5, VAR_6);
  if (VAR_7 == VAR_1) {
    return VAR_1;
  }

  VAR_5->bp[VAR_7].enable = VAR_0;

  return VAR_3;
}
