
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; int * protocol; int * cache_file; int hres; int file; TYPE_1__ IUnknown_iface; } ;
typedef TYPE_2__ stgmed_buf_t ;
typedef int IInternetProtocolEx ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 TYPE_2__* FUNC_2 (int) ;

__attribute__((used)) static stgmed_buf_t *FUNC_3(IInternetProtocolEx *VAR_3)
{
    stgmed_buf_t *VAR_4 = FUNC_2(sizeof(*VAR_4));

    VAR_4->IUnknown_iface.lpVtbl = &VAR_2;
    VAR_4->ref = 1;
    VAR_4->file = VAR_0;
    VAR_4->hres = VAR_1;
    VAR_4->cache_file = ((void*)0);

    FUNC_0(VAR_3);
    VAR_4->protocol = VAR_3;

    FUNC_1();

    return VAR_4;
}
