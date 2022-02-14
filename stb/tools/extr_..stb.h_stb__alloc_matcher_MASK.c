
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dfa_result; int dfa_mapping; int dfa; int dfa_start; scalar_t__ does_lex; scalar_t__ match_start; scalar_t__ num_charset; int nodes; scalar_t__ start_node; } ;
typedef TYPE_1__ stb_matcher ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (void**,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int) ;

__attribute__((used)) static stb_matcher *FUNC_3(void)
{
   stb_matcher *VAR_1 = (stb_matcher *) FUNC_2(0,sizeof(*VAR_1));

   VAR_1->start_node = 0;
   FUNC_1((void **) &VAR_1->nodes, VAR_1);
   VAR_1->num_charset = 0;
   VAR_1->match_start = 0;
   VAR_1->does_lex = 0;

   VAR_1->dfa_start = VAR_0;
   FUNC_1((void **) &VAR_1->dfa, VAR_1);
   FUNC_1((void **) &VAR_1->dfa_mapping, VAR_1);
   FUNC_1((void **) &VAR_1->dfa_result, VAR_1);

   FUNC_0(VAR_1);

   return VAR_1;
}
