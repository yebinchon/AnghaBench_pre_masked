
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct probe_finder {int addr; int cu_die; int lno; int fname; TYPE_2__* pev; } ;
struct find_scope_param {int found; int * die_mem; int diff; int line; int file; int function; } ;
struct TYPE_3__ {int function; } ;
struct TYPE_4__ {TYPE_1__ point; } ;
typedef int Dwarf_Die ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,struct find_scope_param*) ;
 int VAR_1 ;

__attribute__((used)) static Dwarf_Die *FUNC_1(struct probe_finder *VAR_2, Dwarf_Die *VAR_3)
{
 struct find_scope_param VAR_4 = {
  .function = VAR_2->pev->point.function,
  .file = VAR_2->fname,
  .line = VAR_2->lno,
  .diff = VAR_0,
  .die_mem = VAR_3,
  .found = 0,
 };

 FUNC_0(&VAR_2->cu_die, VAR_2->addr, VAR_1, &VAR_4);

 return VAR_4.found ? VAR_3 : ((void*)0);
}
