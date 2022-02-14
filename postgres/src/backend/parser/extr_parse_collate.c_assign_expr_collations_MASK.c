
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int location; int strength; int collation; int * pstate; } ;
typedef TYPE_1__ assign_collations_context ;
typedef int ParseState ;
typedef int Node ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*) ;

void
FUNC_1(ParseState *VAR_2, Node *VAR_3)
{
 assign_collations_context VAR_4;


 VAR_4.pstate = VAR_2;
 VAR_4.collation = VAR_1;
 VAR_4.strength = VAR_0;
 VAR_4.location = -1;


 (void) FUNC_0(VAR_3, &VAR_4);
}
