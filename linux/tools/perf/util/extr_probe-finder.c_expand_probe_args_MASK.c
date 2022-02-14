
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct probe_finder {TYPE_1__* pev; } ;
struct perf_probe_arg {int var; } ;
struct local_vars_finder {int vars; scalar_t__ ret; int nargs; int max_args; struct perf_probe_arg* args; struct probe_finder* pf; } ;
struct TYPE_2__ {int nargs; struct perf_probe_arg* args; } ;
typedef int Dwarf_Die ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,void*,int *) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(Dwarf_Die *VAR_4, struct probe_finder *VAR_5,
        struct perf_probe_arg *VAR_6)
{
 Dwarf_Die VAR_7;
 int VAR_8;
 int VAR_9 = 0;
 struct local_vars_finder VAR_10 = {.pf = VAR_5, .args = VAR_6, .vars = 0,
    .max_args = VAR_0, .ret = 0};

 for (VAR_8 = 0; VAR_8 < VAR_5->pev->nargs; VAR_8++) {

  if (FUNC_2(VAR_5->pev->args[VAR_8].var, VAR_2) == 0)
   VAR_10.vars = 1;
  else if (FUNC_2(VAR_5->pev->args[VAR_8].var, VAR_1) != 0) {

   VAR_6[VAR_9] = VAR_5->pev->args[VAR_8];
   VAR_9++;
   continue;
  }
  FUNC_1("Expanding %s into:", VAR_5->pev->args[VAR_8].var);
  VAR_10.nargs = VAR_9;

  FUNC_0(VAR_4, VAR_3, (void *)&VAR_10,
          &VAR_7);
  FUNC_1(" (%d)\n", VAR_10.nargs - VAR_9);
  if (VAR_10.ret < 0)
   return VAR_10.ret;
  VAR_9 = VAR_10.nargs;
 }
 return VAR_9;
}
