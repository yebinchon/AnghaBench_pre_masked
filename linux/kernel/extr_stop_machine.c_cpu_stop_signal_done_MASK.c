
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_stop_done {int completion; int nr_todo; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct cpu_stop_done *VAR_0)
{
 if (FUNC_0(&VAR_0->nr_todo))
  FUNC_1(&VAR_0->completion);
}
