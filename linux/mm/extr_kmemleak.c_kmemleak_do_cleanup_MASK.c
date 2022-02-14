
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct work_struct *VAR_3)
{
 FUNC_4();

 FUNC_1(&VAR_2);






 VAR_1 = 0;
 FUNC_2(&VAR_2);

 if (!VAR_0)
  FUNC_0();
 else
  FUNC_3("Kmemleak disabled without freeing internal data. Reclaim the memory with \"echo clear > /sys/kernel/debug/kmemleak\".\n");
}
