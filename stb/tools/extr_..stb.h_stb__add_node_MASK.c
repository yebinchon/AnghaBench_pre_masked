
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ out; scalar_t__ goal; scalar_t__ eps; scalar_t__ active; } ;
typedef TYPE_1__ stb_nfa_node ;
struct TYPE_6__ {int nodes; } ;
typedef TYPE_2__ stb_matcher ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__) ;

__attribute__((used)) static int FUNC_2(stb_matcher *VAR_0)
{
   stb_nfa_node VAR_1;
   VAR_1.active = 0;
   VAR_1.eps = 0;
   VAR_1.goal = 0;
   VAR_1.out = 0;
   FUNC_1(VAR_0->nodes, VAR_1);
   return FUNC_0(VAR_0->nodes)-1;
}
