
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d_info_checkpoint {int expansion; int next_sub; int next_comp; int n; } ;
struct d_info {int expansion; int next_sub; int next_comp; int n; } ;



__attribute__((used)) static void
FUNC_0 (struct d_info *VAR_0, struct d_info_checkpoint *VAR_1)
{
  VAR_0->n = VAR_1->n;
  VAR_0->next_comp = VAR_1->next_comp;
  VAR_0->next_sub = VAR_1->next_sub;
  VAR_0->expansion = VAR_1->expansion;
}
