
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int expr; } ;
struct TYPE_4__ {scalar_t__ tri; int expr; } ;
struct symbol {TYPE_1__ rev_dep; TYPE_2__ dir_dep; int name; } ;
struct gstr {int dummy; } ;


 int FUNC_0 (int ,struct gstr*) ;
 int FUNC_1 (int ,struct gstr*,scalar_t__,char*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct gstr*) ;
 struct gstr FUNC_4 () ;
 int FUNC_5 (struct gstr*,char*,...) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_6(struct symbol *VAR_3)
{
 struct gstr VAR_4 = FUNC_4();

 FUNC_5(&VAR_4,
     "\nWARNING: unmet direct dependencies detected for %s\n",
     VAR_3->name);
 FUNC_5(&VAR_4,
     "  Depends on [%c]: ",
     VAR_3->dir_dep.tri == VAR_0 ? 'm' : 'n');
 FUNC_0(VAR_3->dir_dep.expr, &VAR_4);
 FUNC_5(&VAR_4, "\n");

 FUNC_1(VAR_3->rev_dep.expr, &VAR_4, VAR_2,
          "  Selected by [y]:\n");
 FUNC_1(VAR_3->rev_dep.expr, &VAR_4, VAR_0,
          "  Selected by [m]:\n");

 FUNC_2(FUNC_3(&VAR_4), VAR_1);
}
