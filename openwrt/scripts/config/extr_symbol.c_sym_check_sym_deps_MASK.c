
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * expr; } ;
struct symbol {struct property* prop; TYPE_1__ rev_dep; } ;
struct TYPE_4__ {int * expr; } ;
struct property {scalar_t__ type; int * expr; TYPE_2__ visible; struct property* next; } ;
struct dep_stack {int * expr; struct property* prop; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct dep_stack*,struct symbol*) ;
 int FUNC_1 () ;
 struct symbol* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct symbol*) ;

__attribute__((used)) static struct symbol *FUNC_4(struct symbol *VAR_3)
{
 struct symbol *VAR_4;
 struct property *VAR_5;
 struct dep_stack VAR_6;

 FUNC_0(&VAR_6, VAR_3);

 VAR_4 = FUNC_2(VAR_3->rev_dep.expr);
 if (VAR_4)
  goto out;

 for (VAR_5 = VAR_3->prop; VAR_5; VAR_5 = VAR_5->next) {
  if (VAR_5->type == VAR_0 || VAR_5->type == VAR_2)
   continue;
  VAR_6.prop = VAR_5;
  VAR_4 = FUNC_2(VAR_5->visible.expr);
  if (VAR_4)
   break;
  if (VAR_5->type != VAR_1 || FUNC_3(VAR_3))
   continue;
  VAR_6.expr = VAR_5->expr;
  VAR_4 = FUNC_2(VAR_5->expr);
  if (VAR_4)
   break;
  VAR_6.expr = ((void*)0);
 }

out:
 FUNC_1();

 return VAR_4;
}
