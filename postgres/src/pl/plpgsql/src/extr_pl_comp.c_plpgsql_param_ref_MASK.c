
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int pname ;
struct TYPE_12__ {int ns; } ;
struct TYPE_11__ {int itemno; } ;
struct TYPE_10__ {int number; int location; } ;
struct TYPE_9__ {scalar_t__ p_ref_hook_state; } ;
typedef TYPE_1__ ParseState ;
typedef TYPE_2__ ParamRef ;
typedef TYPE_3__ PLpgSQL_nsitem ;
typedef TYPE_4__ PLpgSQL_expr ;
typedef int Node ;


 int * FUNC_0 (TYPE_4__*,int ,int ) ;
 TYPE_3__* FUNC_1 (int ,int,char*,int *,int *,int *) ;
 int FUNC_2 (char*,int,char*,int) ;

__attribute__((used)) static Node *
FUNC_3(ParseState *VAR_0, ParamRef *VAR_1)
{
 PLpgSQL_expr *VAR_2 = (PLpgSQL_expr *) VAR_0->p_ref_hook_state;
 char VAR_3[32];
 PLpgSQL_nsitem *VAR_4;

 FUNC_2(VAR_3, sizeof(VAR_3), "$%d", VAR_1->number);

 VAR_4 = FUNC_1(VAR_2->ns, 0,
       VAR_3, ((void*)0), ((void*)0),
       ((void*)0));

 if (VAR_4 == ((void*)0))
  return ((void*)0);

 return FUNC_0(VAR_2, VAR_4->itemno, VAR_1->location);
}
