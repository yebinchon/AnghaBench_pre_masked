
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int mrb_state ;
struct TYPE_4__ {int const* iseq; } ;
typedef TYPE_1__ mrb_irep ;
typedef int mrb_code ;
typedef int mrb_bool ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*,int) ;

__attribute__((used)) static mrb_bool
FUNC_1(mrb_state *VAR_2, mrb_irep *VAR_3, const mrb_code *VAR_4, uint16_t VAR_5)
{
  if (VAR_4 > VAR_3->iseq) {
    if (VAR_5 == FUNC_0(VAR_2, VAR_3, VAR_4 - VAR_3->iseq - 1)) {
      return VAR_0;
    }
  }
  return VAR_1;
}
