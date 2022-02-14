
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_8__ {int isoFlags; int isoLevel; } ;
struct TYPE_6__ {int ref; TYPE_2__ ITransaction_iface; TYPE_3__ info; } ;
typedef TYPE_1__ Transaction ;
typedef int ITransactionOptions ;
typedef TYPE_2__ ITransaction ;
typedef int ISOLEVEL ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*,int) ;

__attribute__((used)) static HRESULT FUNC_3(ISOLEVEL VAR_4, ULONG VAR_5,
        ITransactionOptions *VAR_6, ITransaction **VAR_7)
{
    Transaction *VAR_8;

    if (!VAR_7) return VAR_0;

    VAR_8 = FUNC_1(FUNC_0(), 0, sizeof(Transaction));
    if (!VAR_8) return VAR_1;
    FUNC_2(&VAR_8->info, sizeof(VAR_8->info));

    VAR_8->ITransaction_iface.lpVtbl = &VAR_3;
    VAR_8->ref = 1;
    VAR_8->info.isoLevel = VAR_4;
    VAR_8->info.isoFlags = VAR_5;

    *VAR_7 = &VAR_8->ITransaction_iface;

    return VAR_2;
}
