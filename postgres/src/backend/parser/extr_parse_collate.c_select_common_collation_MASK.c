
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ strength; int location; int collation; int location2; int * pstate; int collation2; } ;
typedef TYPE_1__ assign_collations_context ;
typedef int ParseState ;
typedef int Oid ;
typedef int Node ;
typedef int List ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;

Oid
FUNC_7(ParseState *VAR_5, List *VAR_6, bool VAR_7)
{
 assign_collations_context VAR_8;


 VAR_8.pstate = VAR_5;
 VAR_8.collation = VAR_4;
 VAR_8.strength = VAR_1;
 VAR_8.location = -1;


 (void) FUNC_0((Node *) VAR_6, &VAR_8);


 if (VAR_8.strength == VAR_0)
 {
  if (VAR_7)
   return VAR_4;
  FUNC_1(VAR_3,
    (FUNC_2(VAR_2),
     FUNC_4("collation mismatch between implicit collations \"%s\" and \"%s\"",
      FUNC_5(VAR_8.collation),
      FUNC_5(VAR_8.collation2)),
     FUNC_3("You can choose the collation by applying the COLLATE clause to one or both expressions."),
     FUNC_6(VAR_8.pstate, VAR_8.location2)));
 }






 return VAR_8.collation;
}
