
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char** argnames; int globals; } ;
struct TYPE_6__ {int nargs; scalar_t__ args; scalar_t__* namedargs; } ;
typedef TYPE_1__ PLySavedArgs ;
typedef TYPE_2__ PLyProcedure ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(PLyProcedure *VAR_0, PLySavedArgs *VAR_1)
{

 if (VAR_0->argnames)
 {
  int VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_1->nargs; VAR_2++)
  {
   if (VAR_0->argnames[VAR_2] && VAR_1->namedargs[VAR_2])
   {
    FUNC_0(VAR_0->globals, VAR_0->argnames[VAR_2],
          VAR_1->namedargs[VAR_2]);
    FUNC_1(VAR_1->namedargs[VAR_2]);
   }
  }
 }


 if (VAR_1->args)
 {
  FUNC_0(VAR_0->globals, "args", VAR_1->args);
  FUNC_1(VAR_1->args);
 }


 FUNC_2(VAR_1);
}
