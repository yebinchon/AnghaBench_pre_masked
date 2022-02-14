
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int constisnull; int constvalue; } ;
struct TYPE_7__ {size_t next_elem; size_t num_elems; int opexpr; int * elem_nulls; TYPE_1__ constexpr; int * elem_values; } ;
struct TYPE_6__ {scalar_t__ state; } ;
typedef TYPE_2__* PredIterInfo ;
typedef int Node ;
typedef TYPE_3__ ArrayConstIterState ;



__attribute__((used)) static Node *
FUNC_0(PredIterInfo VAR_0)
{
 ArrayConstIterState *VAR_1 = (ArrayConstIterState *) VAR_0->state;

 if (VAR_1->next_elem >= VAR_1->num_elems)
  return ((void*)0);
 VAR_1->constexpr.constvalue = VAR_1->elem_values[VAR_1->next_elem];
 VAR_1->constexpr.constisnull = VAR_1->elem_nulls[VAR_1->next_elem];
 VAR_1->next_elem++;
 return (Node *) &(VAR_1->opexpr);
}
