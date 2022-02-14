
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* p_rte; int p_lateral_ok; scalar_t__ p_lateral_only; } ;
struct TYPE_10__ {TYPE_2__* p_target_rangetblentry; } ;
struct TYPE_9__ {TYPE_1__* eref; } ;
struct TYPE_8__ {char* aliasname; } ;
typedef TYPE_2__ RangeTblEntry ;
typedef TYPE_3__ ParseState ;
typedef TYPE_4__ ParseNamespaceItem ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_6(ParseState *VAR_2, ParseNamespaceItem *VAR_3,
      int VAR_4)
{
 if (VAR_3->p_lateral_only && !VAR_3->p_lateral_ok)
 {

  RangeTblEntry *VAR_5 = VAR_3->p_rte;
  char *VAR_6 = VAR_5->eref->aliasname;

  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_4("invalid reference to FROM-clause entry for table \"%s\"",
      VAR_6),
     (VAR_5 == VAR_2->p_target_rangetblentry) ?
     FUNC_3("There is an entry for table \"%s\", but it cannot be referenced from this part of the query.",
       VAR_6) :
     FUNC_2("The combining JOIN type must be INNER or LEFT for a LATERAL reference."),
     FUNC_5(VAR_2, VAR_4)));
 }
}
