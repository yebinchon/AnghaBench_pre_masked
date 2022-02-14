
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srcu_struct {int dummy; } ;


 int FUNC_0 () ;
 unsigned long FUNC_1 (struct srcu_struct*,int) ;
 unsigned long FUNC_2 (struct srcu_struct*,int) ;

__attribute__((used)) static bool FUNC_3(struct srcu_struct *VAR_0, int VAR_1)
{
 unsigned long VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 FUNC_0();
 return FUNC_1(VAR_0, VAR_1) == VAR_2;
}
