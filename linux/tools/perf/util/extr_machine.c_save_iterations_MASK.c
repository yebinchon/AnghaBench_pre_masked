
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iterations {scalar_t__ cycles; int nr_loop_iter; } ;
struct TYPE_2__ {scalar_t__ cycles; } ;
struct branch_entry {TYPE_1__ flags; } ;



__attribute__((used)) static void FUNC_0(struct iterations *VAR_0,
       struct branch_entry *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_0->nr_loop_iter++;
 VAR_0->cycles = 0;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  VAR_0->cycles += VAR_1[VAR_3].flags.cycles;
}
