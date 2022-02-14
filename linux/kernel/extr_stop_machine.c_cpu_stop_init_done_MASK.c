
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_stop_done {int completion; int nr_todo; } ;


 int FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cpu_stop_done*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct cpu_stop_done *VAR_0, unsigned int VAR_1)
{
 FUNC_2(VAR_0, 0, sizeof(*VAR_0));
 FUNC_0(&VAR_0->nr_todo, VAR_1);
 FUNC_1(&VAR_0->completion);
}
