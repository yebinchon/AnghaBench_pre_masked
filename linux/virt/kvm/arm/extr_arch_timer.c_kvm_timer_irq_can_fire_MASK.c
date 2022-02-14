
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arch_timer_context {int cnt_ctl; scalar_t__ loaded; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(struct arch_timer_context *VAR_2)
{
 FUNC_0(VAR_2 && VAR_2->loaded);
 return VAR_2 &&
        !(VAR_2->cnt_ctl & VAR_1) &&
  (VAR_2->cnt_ctl & VAR_0);
}
