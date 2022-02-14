
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct probe_finder {int addr; int machine; int sp_die; int fb_ops; } ;
struct local_vars_finder {size_t nargs; struct probe_finder* pf; TYPE_1__* args; int ret; scalar_t__ vars; } ;
struct TYPE_2__ {char* var; } ;
typedef int Dwarf_Die ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *,int ,int ,int *,int ,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static int FUNC_5(Dwarf_Die *VAR_6, void *VAR_7)
{
 struct local_vars_finder *VAR_8 = VAR_7;
 struct probe_finder *VAR_9 = VAR_8->pf;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_6);
 if (VAR_10 == VAR_3 ||
     (VAR_10 == VAR_4 && VAR_8->vars)) {
  if (FUNC_0(VAR_6, VAR_8->pf->addr,
           VAR_8->pf->fb_ops, &VAR_9->sp_die,
           VAR_9->machine, ((void*)0)) == 0) {
   VAR_8->args[VAR_8->nargs].var = (char *)FUNC_1(VAR_6);
   if (VAR_8->args[VAR_8->nargs].var == ((void*)0)) {
    VAR_8->ret = -VAR_5;
    return VAR_1;
   }
   FUNC_4(" %s", VAR_8->args[VAR_8->nargs].var);
   VAR_8->nargs++;
  }
 }

 if (FUNC_2(VAR_6, VAR_8->pf->addr))
  return VAR_0;
 else
  return VAR_2;
}
