
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int location; } ;
struct TYPE_8__ {int location; int fields; } ;
struct TYPE_7__ {int p_ref_hook_state; } ;
typedef TYPE_1__ ParseState ;
typedef int Node ;
typedef TYPE_2__ ColumnRef ;
typedef TYPE_3__ CoerceToDomainValue ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 TYPE_3__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static Node *
FUNC_7(ParseState *VAR_1, ColumnRef *VAR_2)
{






 if (FUNC_4(VAR_2->fields) == 1)
 {
  Node *VAR_3 = (Node *) FUNC_3(VAR_2->fields);
  char *VAR_4;

  FUNC_0(FUNC_1(VAR_3, VAR_0));
  VAR_4 = FUNC_5(VAR_3);
  if (FUNC_6(VAR_4, "value") == 0)
  {
   CoerceToDomainValue *VAR_5 = FUNC_2(VAR_1->p_ref_hook_state);


   VAR_5->location = VAR_2->location;
   return (Node *) VAR_5;
  }
 }
 return ((void*)0);
}
