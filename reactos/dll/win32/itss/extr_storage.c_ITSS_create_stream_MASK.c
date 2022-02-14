
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct chmUnitInfo {int dummy; } ;
struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_10__ {int ref; TYPE_2__* stg; struct chmUnitInfo ui; scalar_t__ addr; TYPE_1__ IStream_iface; } ;
struct TYPE_9__ {int IStorage_iface; } ;
typedef TYPE_2__ ITSS_IStorageImpl ;
typedef TYPE_3__ IStream_Impl ;


 int FUNC_0 () ;
 TYPE_3__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 (char*,TYPE_3__*) ;

__attribute__((used)) static IStream_Impl *FUNC_5(
           ITSS_IStorageImpl *VAR_1, struct chmUnitInfo *VAR_2 )
{
    IStream_Impl *VAR_3;

    VAR_3 = FUNC_1( FUNC_0(), 0, sizeof (IStream_Impl) );
    VAR_3->IStream_iface.lpVtbl = &VAR_0;
    VAR_3->ref = 1;
    VAR_3->addr = 0;
    VAR_3->ui = *VAR_2;
    VAR_3->stg = VAR_1;
    FUNC_2( &VAR_1->IStorage_iface );

    FUNC_3();

    FUNC_4(" -> %p\n", VAR_3 );

    return VAR_3;
}
