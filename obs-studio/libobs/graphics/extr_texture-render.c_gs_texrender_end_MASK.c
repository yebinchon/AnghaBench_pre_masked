
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rendered; int prev_zs; int prev_target; } ;
typedef TYPE_1__ gs_texrender_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;

void FUNC_4(gs_texrender_t *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_2(VAR_0->prev_target, VAR_0->prev_zs);

 FUNC_0();
 FUNC_1();
 FUNC_3();

 VAR_0->rendered = 1;
}
