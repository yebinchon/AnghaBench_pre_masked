
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skl_module_pin {scalar_t__ pin_state; } ;
struct skl_module_cfg {int m_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(struct skl_module_pin *VAR_2, int VAR_3,
      struct skl_module_cfg *VAR_4)
{
 int VAR_5;
 bool VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if (VAR_2[VAR_5].pin_state == VAR_1)
   continue;
  VAR_6 = 1;
  break;
 }

 if (!VAR_6)
  VAR_4->m_state = VAR_0;
 return;
}
