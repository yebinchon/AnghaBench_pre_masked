
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int refCount; TYPE_2__ ITfRange_iface; void* anchorEnd; void* anchorStart; void* lockType; int * pITextStoreACP; int * pITfContext; } ;
typedef TYPE_1__ Range ;
typedef TYPE_2__ ITfRange ;
typedef int ITfContext ;
typedef int ITextStoreACP ;
typedef int HRESULT ;
typedef void* DWORD ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,...) ;

HRESULT FUNC_3(ITfContext *VAR_4, ITextStoreACP *VAR_5, DWORD VAR_6, DWORD VAR_7, DWORD VAR_8, ITfRange **VAR_9)
{
    Range *VAR_10;

    VAR_10 = FUNC_1(FUNC_0(),VAR_1,sizeof(Range));
    if (VAR_10 == ((void*)0))
        return VAR_0;

    FUNC_2("(%p) %p %p\n",VAR_10, VAR_4, VAR_5);

    VAR_10->ITfRange_iface.lpVtbl = &VAR_2;
    VAR_10->refCount = 1;
    VAR_10->pITfContext = VAR_4;
    VAR_10->pITextStoreACP = VAR_5;
    VAR_10->lockType = VAR_6;
    VAR_10->anchorStart = VAR_7;
    VAR_10->anchorEnd = VAR_8;

    *VAR_9 = &VAR_10->ITfRange_iface;
    FUNC_2("returning %p\n", *VAR_9);

    return VAR_3;
}
