
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int const* lpVtbl; } ;
struct TYPE_8__ {int ref; TYPE_6__ IWICComponentInfo_iface; int clsid; } ;
struct TYPE_7__ {TYPE_2__ base; int classkey; } ;
typedef int * REFCLSID ;
typedef TYPE_1__ MetadataReaderInfo ;
typedef int IWICComponentInfoVtbl ;
typedef int HRESULT ;
typedef int HKEY ;
typedef TYPE_2__ ComponentInfo ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_4(HKEY VAR_4, REFCLSID VAR_5, ComponentInfo **VAR_6)
{
    MetadataReaderInfo *VAR_7;

    VAR_7 = FUNC_2(sizeof(*VAR_7));
    if (!VAR_7)
    {
        FUNC_1(VAR_4);
        return VAR_0;
    }

    VAR_7->base.IWICComponentInfo_iface.lpVtbl = (const IWICComponentInfoVtbl*)&VAR_1;
    VAR_7->base.ref = 1;
    VAR_7->classkey = VAR_4;
    VAR_7->base.clsid = *VAR_5;

    if (!FUNC_3(VAR_7))
    {
        FUNC_0(&VAR_7->base.IWICComponentInfo_iface);
        return VAR_3;
    }

    *VAR_6 = &VAR_7->base;
    return VAR_2;
}
