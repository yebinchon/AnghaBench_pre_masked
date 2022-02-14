
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * dcc; int constraints; } ;
typedef TYPE_1__ DomainConstraintRef ;
typedef int DomainConstraintCache ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(void *VAR_1)
{
 DomainConstraintRef *VAR_2 = (DomainConstraintRef *) VAR_1;
 DomainConstraintCache *VAR_3 = VAR_2->dcc;


 if (VAR_3)
 {
  VAR_2->constraints = VAR_0;
  VAR_2->dcc = ((void*)0);
  FUNC_0(VAR_3);
 }
}
