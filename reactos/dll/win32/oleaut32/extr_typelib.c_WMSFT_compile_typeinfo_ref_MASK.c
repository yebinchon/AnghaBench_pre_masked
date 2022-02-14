
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int len; scalar_t__ data; } ;
struct TYPE_12__ {TYPE_1__ ref_seg; } ;
typedef TYPE_4__ WMSFT_TLBFile ;
struct TYPE_13__ {int res08; int next; int res04; int href; } ;
typedef TYPE_5__ WMSFT_RefChunk ;
struct TYPE_11__ {int cImplTypes; } ;
struct TYPE_14__ {TYPE_3__ typeattr; TYPE_2__* impltypes; } ;
struct TYPE_10__ {int implflags; int hRef; } ;
typedef TYPE_6__ ITypeInfoImpl ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static DWORD FUNC_2(ITypeInfoImpl *VAR_0, WMSFT_TLBFile *VAR_1)
{
    DWORD VAR_2 = VAR_1->ref_seg.len, VAR_3;
    WMSFT_RefChunk *VAR_4;

    VAR_1->ref_seg.len += VAR_0->typeattr.cImplTypes * sizeof(WMSFT_RefChunk);
    if(!VAR_1->ref_seg.data)
        VAR_1->ref_seg.data = FUNC_0(VAR_1->ref_seg.len);
    else
        VAR_1->ref_seg.data = FUNC_1(VAR_1->ref_seg.data, VAR_1->ref_seg.len);

    VAR_4 = (WMSFT_RefChunk*)((char*)VAR_1->ref_seg.data + VAR_2);

    for(VAR_3 = 0; VAR_3 < VAR_0->typeattr.cImplTypes; ++VAR_3){
        VAR_4->href = VAR_0->impltypes[VAR_3].hRef;
        VAR_4->res04 = VAR_0->impltypes[VAR_3].implflags;
        VAR_4->res08 = -1;
        if(VAR_3 < VAR_0->typeattr.cImplTypes - 1)
            VAR_4->next = VAR_2 + sizeof(WMSFT_RefChunk) * (VAR_3 + 1);
        else
            VAR_4->next = -1;
        ++VAR_4;
    }

    return VAR_2;
}
