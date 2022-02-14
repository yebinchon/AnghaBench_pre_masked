
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct probe_finder {TYPE_1__* pvar; TYPE_2__* tvar; int machine; int sp_die; int fb_ops; int addr; } ;
struct TYPE_5__ {int ref; } ;
struct TYPE_4__ {int user_access; int type; scalar_t__ field; int var; } ;
typedef int Dwarf_Die ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,scalar_t__,int *,int *,int ) ;
 int FUNC_1 (int *,int ,int ,int *,int ,TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int FUNC_6(Dwarf_Die *VAR_3, struct probe_finder *VAR_4)
{
 Dwarf_Die VAR_5;
 int VAR_6;

 FUNC_4("Converting variable %s into trace event.\n",
   FUNC_3(VAR_3));

 VAR_6 = FUNC_1(VAR_3, VAR_4->addr, VAR_4->fb_ops,
     &VAR_4->sp_die, VAR_4->machine, VAR_4->tvar);
 if (VAR_6 == -VAR_1 || VAR_6 == -VAR_0) {
  FUNC_5("Failed to find the location of the '%s' variable at this address.\n"
         " Perhaps it has been optimized out.\n"
         " Use -V with the --range option to show '%s' location range.\n",
         VAR_4->pvar->var, VAR_4->pvar->var);
 } else if (VAR_6 == -VAR_2)
  FUNC_5("Sorry, we don't support this variable location yet.\n");
 else if (VAR_6 == 0 && VAR_4->pvar->field) {
  VAR_6 = FUNC_0(VAR_3, VAR_4->pvar->var,
           VAR_4->pvar->field, &VAR_4->tvar->ref,
           &VAR_5, VAR_4->pvar->user_access);
  VAR_3 = &VAR_5;
 }
 if (VAR_6 == 0)
  VAR_6 = FUNC_2(VAR_3, VAR_4->tvar, VAR_4->pvar->type,
         VAR_4->pvar->user_access);

 return VAR_6;
}
