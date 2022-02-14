
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; TYPE_2__ IWICMetadataQueryReader_iface; int * root; int * block; } ;
typedef TYPE_1__ QueryReader ;
typedef TYPE_2__ IWICMetadataQueryReader ;
typedef int IWICMetadataBlockReader ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int * FUNC_3 (int const*) ;
 int VAR_3 ;

HRESULT FUNC_4(IWICMetadataBlockReader *VAR_4, const WCHAR *VAR_5, IWICMetadataQueryReader **VAR_6)
{
    QueryReader *VAR_7;

    VAR_7 = FUNC_1(FUNC_0(), VAR_1, sizeof(*VAR_7));
    if (!VAR_7)
        return VAR_0;

    VAR_7->IWICMetadataQueryReader_iface.lpVtbl = &VAR_3;
    VAR_7->ref = 1;

    FUNC_2(VAR_4);
    VAR_7->block = VAR_4;

    VAR_7->root = VAR_5 ? FUNC_3(VAR_5) : ((void*)0);

    *VAR_6 = &VAR_7->IWICMetadataQueryReader_iface;

    return VAR_2;
}
