
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * lpVtbl; } ;
struct TYPE_5__ {int refCount; TYPE_1__ ITfCategoryMgr_iface; } ;
typedef int IUnknown ;
typedef int HRESULT ;
typedef TYPE_2__ CategoryMgr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int VAR_4 ;
 int FUNC_2 (char*,int *) ;

HRESULT FUNC_3(IUnknown *VAR_5, IUnknown **VAR_6)
{
    CategoryMgr *VAR_7;
    if (VAR_5)
        return VAR_0;

    VAR_7 = FUNC_1(FUNC_0(),VAR_3,sizeof(CategoryMgr));
    if (VAR_7 == ((void*)0))
        return VAR_2;

    VAR_7->ITfCategoryMgr_iface.lpVtbl = &VAR_1;
    VAR_7->refCount = 1;

    *VAR_6 = (IUnknown *)&VAR_7->ITfCategoryMgr_iface;
    FUNC_2("returning %p\n", *VAR_6);
    return VAR_4;
}
