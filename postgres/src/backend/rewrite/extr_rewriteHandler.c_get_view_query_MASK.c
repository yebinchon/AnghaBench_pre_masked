
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* rd_rules; TYPE_1__* rd_rel; } ;
struct TYPE_8__ {scalar_t__ event; int actions; } ;
struct TYPE_7__ {int numLocks; TYPE_3__** rules; } ;
struct TYPE_6__ {scalar_t__ relkind; } ;
typedef TYPE_3__ RewriteRule ;
typedef TYPE_4__* Relation ;
typedef int Query ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

Query *
FUNC_4(Relation VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_3->rd_rel->relkind == VAR_2);

 for (VAR_4 = 0; VAR_4 < VAR_3->rd_rules->numLocks; VAR_4++)
 {
  RewriteRule *VAR_5 = VAR_3->rd_rules->rules[VAR_4];

  if (VAR_5->event == VAR_0)
  {

   if (FUNC_3(VAR_5->actions) != 1)
    FUNC_1(VAR_1, "invalid _RETURN rule action specification");

   return (Query *) FUNC_2(VAR_5->actions);
  }
 }

 FUNC_1(VAR_1, "failed to find _RETURN rule for view");
 return ((void*)0);
}
