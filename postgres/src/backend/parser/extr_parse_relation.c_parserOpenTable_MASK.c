
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int relname; scalar_t__ schemaname; int location; } ;
typedef int * Relation ;
typedef TYPE_1__ RangeVar ;
typedef int ParseState ;
typedef int ParseCallbackState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ,...) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int *,int ) ;
 int * FUNC_8 (TYPE_1__ const*,int,int) ;

Relation
FUNC_9(ParseState *VAR_2, const RangeVar *VAR_3, int VAR_4)
{
 Relation VAR_5;
 ParseCallbackState VAR_6;

 FUNC_7(&VAR_6, VAR_2, VAR_3->location);
 VAR_5 = FUNC_8(VAR_3, VAR_4, 1);
 if (VAR_5 == ((void*)0))
 {
  if (VAR_3->schemaname)
   FUNC_1(VAR_1,
     (FUNC_2(VAR_0),
      FUNC_5("relation \"%s.%s\" does not exist",
       VAR_3->schemaname, VAR_3->relname)));
  else
  {






   if (FUNC_6(VAR_2, VAR_3->relname))
    FUNC_1(VAR_1,
      (FUNC_2(VAR_0),
       FUNC_5("relation \"%s\" does not exist",
        VAR_3->relname),
       FUNC_3("There is a WITH item named \"%s\", but it cannot be referenced from this part of the query.",
           VAR_3->relname),
       FUNC_4("Use WITH RECURSIVE, or re-order the WITH items to remove forward references.")));
   else
    FUNC_1(VAR_1,
      (FUNC_2(VAR_0),
       FUNC_5("relation \"%s\" does not exist",
        VAR_3->relname)));
  }
 }
 FUNC_0(&VAR_6);
 return VAR_5;
}
