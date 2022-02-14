
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int es_range_table_size; int * es_rowmarks; int * es_relations; int * es_range_table; } ;
typedef int Relation ;
typedef int List ;
typedef TYPE_1__ EState ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;

void
FUNC_2(EState *VAR_0, List *VAR_1)
{

 VAR_0->es_range_table = VAR_1;


 VAR_0->es_range_table_size = FUNC_0(VAR_1);






 VAR_0->es_relations = (Relation *)
  FUNC_1(VAR_0->es_range_table_size * sizeof(Relation));





 VAR_0->es_rowmarks = ((void*)0);
}
