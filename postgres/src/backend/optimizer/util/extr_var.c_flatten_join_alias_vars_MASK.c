
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int inserted_sublink; int possible_sublink; scalar_t__ sublevels_up; TYPE_2__* query; } ;
typedef TYPE_1__ flatten_join_alias_vars_context ;
struct TYPE_6__ {int hasSubLinks; } ;
typedef TYPE_2__ Query ;
typedef int Node ;


 int * FUNC_0 (int *,TYPE_1__*) ;

Node *
FUNC_1(Query *VAR_0, Node *VAR_1)
{
 flatten_join_alias_vars_context VAR_2;

 VAR_2.query = VAR_0;
 VAR_2.sublevels_up = 0;

 VAR_2.possible_sublink = VAR_0->hasSubLinks;

 VAR_2.inserted_sublink = VAR_0->hasSubLinks;

 return FUNC_0(VAR_1, &VAR_2);
}
