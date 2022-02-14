
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* TransactionState ;
struct TYPE_3__ {scalar_t__ maxChildXids; scalar_t__ nChildXids; int * childXids; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(void)
{
 TransactionState VAR_1 = VAR_0;






 if (VAR_1->childXids != ((void*)0))
  FUNC_0(VAR_1->childXids);
 VAR_1->childXids = ((void*)0);
 VAR_1->nChildXids = 0;
 VAR_1->maxChildXids = 0;







}
