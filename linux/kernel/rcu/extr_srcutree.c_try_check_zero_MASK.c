
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srcu_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct srcu_struct*) ;
 scalar_t__ FUNC_1 (struct srcu_struct*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct srcu_struct *VAR_1, int VAR_2, int VAR_3)
{
 for (;;) {
  if (FUNC_1(VAR_1, VAR_2))
   return 1;
  if (--VAR_3 + !FUNC_0(VAR_1) <= 0)
   return 0;
  FUNC_2(VAR_0);
 }
}
