
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* out; int* eps; scalar_t__ goal; } ;
typedef TYPE_1__ stb_nfa_node ;
struct TYPE_5__ {TYPE_1__* nodes; } ;
typedef TYPE_2__ stb_matcher ;


 int FUNC_0 (int*) ;

__attribute__((used)) static int FUNC_1(stb_matcher *VAR_0, int VAR_1)
{
   for(;;) {
      stb_nfa_node *VAR_2 = &VAR_0->nodes[VAR_1];
      if (VAR_2->goal) return VAR_1;
      if (FUNC_0(VAR_2->out)) return VAR_1;
      if (FUNC_0(VAR_2->eps) != 1) return VAR_1;
      VAR_1 = VAR_2->eps[0];
   }
}
