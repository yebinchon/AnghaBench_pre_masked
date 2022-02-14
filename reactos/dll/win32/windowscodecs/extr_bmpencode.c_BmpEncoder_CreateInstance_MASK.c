
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; TYPE_2__ IWICBitmapEncoder_iface; int * frame; int * stream; } ;
typedef int REFIID ;
typedef int HRESULT ;
typedef TYPE_1__ BmpEncoder ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_2__*,int ,void**) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*,int ,void**) ;
 int FUNC_5 (int ) ;

HRESULT FUNC_6(REFIID VAR_2, void** VAR_3)
{
    BmpEncoder *VAR_4;
    HRESULT VAR_5;

    FUNC_4("(%s,%p)\n", FUNC_5(VAR_2), VAR_3);

    *VAR_3 = ((void*)0);

    VAR_4 = FUNC_1(FUNC_0(), 0, sizeof(BmpEncoder));
    if (!VAR_4) return VAR_1;

    VAR_4->IWICBitmapEncoder_iface.lpVtbl = &VAR_0;
    VAR_4->ref = 1;
    VAR_4->stream = ((void*)0);
    VAR_4->frame = ((void*)0);

    VAR_5 = FUNC_2(&VAR_4->IWICBitmapEncoder_iface, VAR_2, VAR_3);
    FUNC_3(&VAR_4->IWICBitmapEncoder_iface);

    return VAR_5;
}
