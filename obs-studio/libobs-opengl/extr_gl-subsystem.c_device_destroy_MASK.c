
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int plat; int proj_stack; int empty_vao; scalar_t__ first_program; } ;
typedef TYPE_1__ gs_device_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5(gs_device_t *VAR_0)
{
 if (VAR_0) {
  while (VAR_0->first_program)
   FUNC_4(VAR_0->first_program);

  FUNC_2(1, &VAR_0->empty_vao);

  FUNC_1(VAR_0->proj_stack);
  FUNC_3(VAR_0->plat);
  FUNC_0(VAR_0);
 }
}
