
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int const* lpVtbl; } ;
struct TYPE_8__ {int ref; int clsid; TYPE_1__ IWICComponentInfo_iface; } ;
struct TYPE_9__ {TYPE_2__ base; int classkey; } ;
typedef int * REFCLSID ;
typedef int IWICComponentInfoVtbl ;
typedef int HRESULT ;
typedef int HKEY ;
typedef TYPE_2__ ComponentInfo ;
typedef TYPE_3__ BitmapDecoderInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 TYPE_3__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static HRESULT FUNC_3(HKEY VAR_3, REFCLSID VAR_4, ComponentInfo **VAR_5)
{
    BitmapDecoderInfo *VAR_6;

    VAR_6 = FUNC_1(sizeof(BitmapDecoderInfo));
    if (!VAR_6)
    {
        FUNC_0(VAR_3);
        return VAR_1;
    }

    VAR_6->base.IWICComponentInfo_iface.lpVtbl = (const IWICComponentInfoVtbl*)&VAR_0;
    VAR_6->base.ref = 1;
    VAR_6->classkey = VAR_3;
    VAR_6->base.clsid = *VAR_4;

    FUNC_2(VAR_6);

    *VAR_5 = &VAR_6->base;
    return VAR_2;
}
