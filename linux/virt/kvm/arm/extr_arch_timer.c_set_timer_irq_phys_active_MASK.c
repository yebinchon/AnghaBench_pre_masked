
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arch_timer_context {int host_timer_irq; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct arch_timer_context *VAR_1, bool VAR_2)
{
 int VAR_3;
 VAR_3 = FUNC_1(VAR_1->host_timer_irq, VAR_0, VAR_2);
 FUNC_0(VAR_3);
}
