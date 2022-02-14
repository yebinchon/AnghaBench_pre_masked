
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_7__ {int ref; TYPE_3__ IWICImagingFactory2_iface; TYPE_1__ IWICComponentFactory_iface; } ;
typedef int REFIID ;
typedef TYPE_2__ ImagingFactory ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_3__*,int ,void**) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_4 (char*,int ,void**) ;
 int FUNC_5 (int ) ;

HRESULT FUNC_6(REFIID VAR_3, void** VAR_4)
{
    ImagingFactory *VAR_5;
    HRESULT VAR_6;

    FUNC_4("(%s,%p)\n", FUNC_5(VAR_3), VAR_4);

    *VAR_4 = ((void*)0);

    VAR_5 = FUNC_1(FUNC_0(), 0, sizeof(*VAR_5));
    if (!VAR_5) return VAR_1;

    VAR_5->IWICImagingFactory2_iface.lpVtbl = &VAR_2;
    VAR_5->IWICComponentFactory_iface.lpVtbl = &VAR_0;
    VAR_5->ref = 1;

    VAR_6 = FUNC_2(&VAR_5->IWICImagingFactory2_iface, VAR_3, VAR_4);
    FUNC_3(&VAR_5->IWICImagingFactory2_iface);

    return VAR_6;
}
