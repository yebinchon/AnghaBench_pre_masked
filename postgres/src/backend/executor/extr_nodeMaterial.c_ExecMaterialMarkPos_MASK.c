
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int eflags; int tuplestorestate; } ;
typedef TYPE_1__ MaterialState ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;

void
FUNC_3(MaterialState *VAR_1)
{
 FUNC_0(VAR_1->eflags & VAR_0);




 if (!VAR_1->tuplestorestate)
  return;




 FUNC_1(VAR_1->tuplestorestate, 0, 1);




 FUNC_2(VAR_1->tuplestorestate);
}
