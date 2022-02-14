
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_5__ {int * allProcs; } ;
struct TYPE_4__ {size_t pgprocno; } ;
typedef int PGPROC ;
typedef TYPE_1__* GlobalTransaction ;


 TYPE_3__* VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int) ;

PGPROC *
FUNC_1(TransactionId VAR_1, bool VAR_2)
{
 GlobalTransaction VAR_3 = FUNC_0(VAR_1, VAR_2);

 return &VAR_0->allProcs[VAR_3->pgprocno];
}
