
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int * lpVtbl; } ;
struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_11__ {int ref; TYPE_5__ ITransactionDispenser_iface; TYPE_3__ ITransactionImport_iface; TYPE_2__ ITransactionImportWhereabouts_iface; TYPE_1__ IResourceManagerFactory2_iface; } ;
typedef TYPE_4__ TransactionManager ;
typedef int REFIID ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_4__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_5__*,int ,void**) ;
 int FUNC_3 (TYPE_5__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static HRESULT FUNC_4(REFIID VAR_5, void **VAR_6)
{
    TransactionManager *VAR_7;
    HRESULT VAR_8;

    VAR_7 = FUNC_1(FUNC_0(), 0, sizeof(TransactionManager));
    if (!VAR_7) return VAR_0;

    VAR_7->ITransactionDispenser_iface.lpVtbl = &VAR_2;
    VAR_7->IResourceManagerFactory2_iface.lpVtbl = &VAR_1;
    VAR_7->ITransactionImportWhereabouts_iface.lpVtbl = &VAR_3;
    VAR_7->ITransactionImport_iface.lpVtbl = &VAR_4;
    VAR_7->ref = 1;

    VAR_8 = FUNC_2(&VAR_7->ITransactionDispenser_iface, VAR_5, VAR_6);
    FUNC_3(&VAR_7->ITransactionDispenser_iface);

    return VAR_8;
}
