
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srcu_struct {scalar_t__ srcu_idx; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct srcu_struct *VAR_0)
{
 FUNC_1();

 FUNC_0(VAR_0->srcu_idx, VAR_0->srcu_idx + 1);
 FUNC_1();
}
