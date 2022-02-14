
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct probe_finder {TYPE_1__* pvar; int cu_die; int addr; TYPE_2__* tvar; } ;
struct TYPE_5__ {char* name; } ;
struct TYPE_4__ {int var; scalar_t__ name; } ;
typedef int Dwarf_Die ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct probe_finder*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (int *,int ,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int ) ;
 char* FUNC_6 (char*,char) ;
 char* FUNC_7 (scalar_t__) ;
 char* FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(Dwarf_Die *VAR_2, struct probe_finder *VAR_3)
{
 Dwarf_Die VAR_4;
 char *VAR_5, *VAR_6;
 int VAR_7 = 0;


 if (!FUNC_3(VAR_3->pvar->var))
  return FUNC_1(VAR_3->tvar, VAR_3->pvar);

 if (VAR_3->pvar->name)
  VAR_3->tvar->name = FUNC_7(VAR_3->pvar->name);
 else {
  VAR_5 = FUNC_8(VAR_3->pvar);
  if (!VAR_5)
   return -VAR_1;
  VAR_6 = FUNC_6(VAR_5, ':');
  if (VAR_6)
   *VAR_6 = '_';
  VAR_3->tvar->name = VAR_5;
 }
 if (VAR_3->tvar->name == ((void*)0))
  return -VAR_1;

 FUNC_4("Searching '%s' variable in context.\n", VAR_3->pvar->var);

 if (!FUNC_2(VAR_2, VAR_3->pvar->var, VAR_3->addr, &VAR_4)) {

  if (!FUNC_2(&VAR_3->cu_die, VAR_3->pvar->var,
      0, &VAR_4)) {
   FUNC_5("Failed to find '%s' in this function.\n",
       VAR_3->pvar->var);
   VAR_7 = -VAR_0;
  }
 }
 if (VAR_7 >= 0)
  VAR_7 = FUNC_0(&VAR_4, VAR_3);

 return VAR_7;
}
