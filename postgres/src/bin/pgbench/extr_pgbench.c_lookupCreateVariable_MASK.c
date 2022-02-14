
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * svalue; int name; } ;
typedef TYPE_1__ Variable ;
struct TYPE_9__ {int nvariables; int vars_sorted; TYPE_1__* variables; } ;
typedef TYPE_2__ CState ;


 int FUNC_0 (int ,char*,char const*,char*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static Variable *
FUNC_6(CState *VAR_1, const char *VAR_2, char *VAR_3)
{
 Variable *VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_3);
 if (VAR_4 == ((void*)0))
 {
  Variable *VAR_5;





  if (!FUNC_5(VAR_3))
  {
   FUNC_0(VAR_0, "%s: invalid variable name: \"%s\"\n",
     VAR_2, VAR_3);
   return ((void*)0);
  }


  if (VAR_1->variables)
   VAR_5 = (Variable *) FUNC_3(VAR_1->variables,
             (VAR_1->nvariables + 1) * sizeof(Variable));
  else
   VAR_5 = (Variable *) FUNC_2(sizeof(Variable));

  VAR_1->variables = VAR_5;

  VAR_4 = &VAR_5[VAR_1->nvariables];

  VAR_4->name = FUNC_4(VAR_3);
  VAR_4->svalue = ((void*)0);


  VAR_1->nvariables++;

  VAR_1->vars_sorted = 0;
 }

 return VAR_4;
}
