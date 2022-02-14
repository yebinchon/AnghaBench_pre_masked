
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nargs; int args; int * namedargs; } ;
typedef TYPE_1__ PLySavedArgs ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(PLySavedArgs *VAR_0)
{
 int VAR_1;


 for (VAR_1 = 0; VAR_1 < VAR_0->nargs; VAR_1++)
 {
  FUNC_0(VAR_0->namedargs[VAR_1]);
 }


 FUNC_0(VAR_0->args);


 FUNC_1(VAR_0);
}
