
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stmts; int * cplan; } ;
typedef TYPE_1__* Portal ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static void
FUNC_1(Portal VAR_1)
{
 if (VAR_1->cplan)
 {
  FUNC_0(VAR_1->cplan, 0);
  VAR_1->cplan = ((void*)0);






  VAR_1->stmts = VAR_0;
 }
}
