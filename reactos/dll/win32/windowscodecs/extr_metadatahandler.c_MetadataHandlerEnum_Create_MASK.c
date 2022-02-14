
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_8__ {int IWICMetadataWriter_iface; } ;
struct TYPE_7__ {int ref; TYPE_3__ IWICEnumMetadataItem_iface; int index; TYPE_2__* parent; } ;
typedef TYPE_1__ MetadataHandlerEnum ;
typedef TYPE_2__ MetadataHandler ;
typedef TYPE_3__ IWICEnumMetadataItem ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static HRESULT FUNC_3(MetadataHandler *VAR_4, DWORD VAR_5,
    IWICEnumMetadataItem **VAR_6)
{
    MetadataHandlerEnum *VAR_7;

    if (!VAR_6) return VAR_0;

    *VAR_6 = ((void*)0);

    VAR_7 = FUNC_1(FUNC_0(), 0, sizeof(MetadataHandlerEnum));
    if (!VAR_7) return VAR_1;

    FUNC_2(&VAR_4->IWICMetadataWriter_iface);

    VAR_7->IWICEnumMetadataItem_iface.lpVtbl = &VAR_2;
    VAR_7->ref = 1;
    VAR_7->parent = VAR_4;
    VAR_7->index = VAR_5;

    *VAR_6 = &VAR_7->IWICEnumMetadataItem_iface;

    return VAR_3;
}
