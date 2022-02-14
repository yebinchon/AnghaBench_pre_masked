
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mrb_value ;
typedef int mrb_state ;
struct TYPE_4__ {scalar_t__ size; } ;
typedef TYPE_1__ htable ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_1__*,int ,int *) ;

void
FUNC_2(mrb_state *VAR_1, mrb_value VAR_2)
{
  htable *VAR_3;

  VAR_3 = FUNC_0(VAR_2);
  if (!VAR_3 || VAR_3->size == 0) return;
  FUNC_1(VAR_1, VAR_3, VAR_0, ((void*)0));
}
