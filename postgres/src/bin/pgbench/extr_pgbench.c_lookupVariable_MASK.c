
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* name; } ;
typedef TYPE_1__ Variable ;
struct TYPE_6__ {int vars_sorted; int nvariables; scalar_t__ variables; } ;
typedef TYPE_2__ CState ;


 scalar_t__ FUNC_0 (void*,void*,int ,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (void*,int ,int,int ) ;

__attribute__((used)) static Variable *
FUNC_2(CState *VAR_1, char *VAR_2)
{
 Variable VAR_3;


 if (VAR_1->nvariables <= 0)
  return ((void*)0);


 if (!VAR_1->vars_sorted)
 {
  FUNC_1((void *) VAR_1->variables, VAR_1->nvariables, sizeof(Variable),
     VAR_0);
  VAR_1->vars_sorted = 1;
 }


 VAR_3.name = VAR_2;
 return (Variable *) FUNC_0((void *) &VAR_3,
        (void *) VAR_1->variables,
        VAR_1->nvariables,
        sizeof(Variable),
        VAR_0);
}
