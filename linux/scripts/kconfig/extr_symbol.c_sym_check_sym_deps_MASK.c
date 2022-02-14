
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int expr; } ;
struct TYPE_6__ {int expr; } ;
struct TYPE_5__ {int expr; } ;
struct symbol {struct property* prop; TYPE_3__ implied; TYPE_2__ rev_dep; TYPE_1__ dir_dep; } ;
struct TYPE_8__ {int expr; } ;
struct property {scalar_t__ type; int expr; TYPE_4__ visible; struct property* next; } ;
struct dep_stack {int * expr; struct property* prop; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct dep_stack*,struct symbol*) ;
 int FUNC_1 () ;
 struct symbol* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct symbol*) ;

__attribute__((used)) static struct symbol *FUNC_4(struct symbol *VAR_4)
{
 struct symbol *VAR_5;
 struct property *VAR_6;
 struct dep_stack VAR_7;

 FUNC_0(&VAR_7, VAR_4);

 VAR_7.expr = &VAR_4->dir_dep.expr;
 VAR_5 = FUNC_2(VAR_4->dir_dep.expr);
 if (VAR_5)
  goto out;

 VAR_7.expr = &VAR_4->rev_dep.expr;
 VAR_5 = FUNC_2(VAR_4->rev_dep.expr);
 if (VAR_5)
  goto out;

 VAR_7.expr = &VAR_4->implied.expr;
 VAR_5 = FUNC_2(VAR_4->implied.expr);
 if (VAR_5)
  goto out;

 VAR_7.expr = ((void*)0);

 for (VAR_6 = VAR_4->prop; VAR_6; VAR_6 = VAR_6->next) {
  if (VAR_6->type == VAR_0 || VAR_6->type == VAR_3 ||
      VAR_6->type == VAR_2)
   continue;
  VAR_7.prop = VAR_6;
  VAR_5 = FUNC_2(VAR_6->visible.expr);
  if (VAR_5)
   break;
  if (VAR_6->type != VAR_1 || FUNC_3(VAR_4))
   continue;
  VAR_7.expr = &VAR_6->expr;
  VAR_5 = FUNC_2(VAR_6->expr);
  if (VAR_5)
   break;
  VAR_7.expr = ((void*)0);
 }

out:
 FUNC_1();

 return VAR_5;
}
