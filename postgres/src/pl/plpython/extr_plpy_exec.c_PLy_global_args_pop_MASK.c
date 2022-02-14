
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int calldepth; TYPE_1__* argstack; } ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_1__ PLySavedArgs ;
typedef TYPE_2__ PLyProcedure ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(PLyProcedure *VAR_0)
{
 FUNC_0(VAR_0->calldepth > 0);

 if (VAR_0->calldepth > 1)
 {
  PLySavedArgs *VAR_1 = VAR_0->argstack;


  FUNC_0(VAR_1 != ((void*)0));
  VAR_0->argstack = VAR_1->next;
  VAR_0->calldepth--;


  FUNC_1(VAR_0, VAR_1);
 }
 else
 {

  FUNC_0(VAR_0->argstack == ((void*)0));
  VAR_0->calldepth--;
 }
}
