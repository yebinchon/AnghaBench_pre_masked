
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_8__ {int ref; int allocated; TYPE_3__ IMXAttributes_iface; int dispex; scalar_t__ length; void* attr; int class_version; TYPE_2__ IVBSAXAttributes_iface; TYPE_1__ ISAXAttributes_iface; } ;
typedef TYPE_4__ mxattributes ;
typedef int mxattribute ;
typedef int MSXML_VERSION ;
typedef int IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,void*) ;
 int VAR_4 ;
 void* FUNC_1 (int const) ;
 int FUNC_2 (int *,int *,int *) ;
 int VAR_5 ;

HRESULT FUNC_3(MSXML_VERSION VAR_6, void **VAR_7)
{
    static const int VAR_8 = 10;
    mxattributes *VAR_9;

    FUNC_0("(%p)\n", VAR_7);

    VAR_9 = FUNC_1( sizeof (*VAR_9) );
    if( !VAR_9 )
        return VAR_0;

    VAR_9->IMXAttributes_iface.lpVtbl = &VAR_1;
    VAR_9->ISAXAttributes_iface.lpVtbl = &VAR_2;
    VAR_9->IVBSAXAttributes_iface.lpVtbl = &VAR_4;
    VAR_9->ref = 1;

    VAR_9->class_version = VAR_6;

    VAR_9->attr = FUNC_1(VAR_8*sizeof(mxattribute));
    VAR_9->length = 0;
    VAR_9->allocated = VAR_8;

    *VAR_7 = &VAR_9->IMXAttributes_iface;

    FUNC_2(&VAR_9->dispex, (IUnknown*)&VAR_9->IMXAttributes_iface, &VAR_5);

    FUNC_0("returning iface %p\n", *VAR_7);

    return VAR_3;
}
