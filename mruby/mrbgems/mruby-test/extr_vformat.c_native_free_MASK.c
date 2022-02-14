
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mrb_state ;
struct TYPE_3__ {scalar_t__ type; struct TYPE_3__* s; } ;
typedef TYPE_1__ VFNative ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(mrb_state *VAR_1, void *VAR_2)
{
  VFNative *VAR_3 = (VFNative*)VAR_2;
  if (VAR_3->type == VAR_0) FUNC_0(VAR_1, VAR_3->s);
  FUNC_0(VAR_1, VAR_3);
}
