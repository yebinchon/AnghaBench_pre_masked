
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; int fmtetc_cnt; TYPE_1__ IDataObject_iface; int * fmtetc; int * hmfp; int * stg; int * stm; int text; } ;
typedef TYPE_1__* LPDATAOBJECT ;
typedef int HRESULT ;
typedef int HGLOBAL ;
typedef int FORMATETC ;
typedef TYPE_2__ DataObjectImpl ;


 int VAR_0 ;
 int FUNC_0 () ;
 void* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static HRESULT FUNC_3(HGLOBAL VAR_4, LPDATAOBJECT *VAR_5)
{
    DataObjectImpl *VAR_6;

    VAR_6 = FUNC_1(FUNC_0(), 0, sizeof(DataObjectImpl));
    VAR_6->IDataObject_iface.lpVtbl = &VAR_3;
    VAR_6->ref = 1;
    VAR_6->text = VAR_4;
    VAR_6->stm = ((void*)0);
    VAR_6->stg = ((void*)0);
    VAR_6->hmfp = ((void*)0);

    VAR_6->fmtetc_cnt = 1;
    VAR_6->fmtetc = FUNC_1(FUNC_0(), 0, VAR_6->fmtetc_cnt*sizeof(FORMATETC));
    FUNC_2(VAR_6->fmtetc[0], VAR_0, VAR_2);

    *VAR_5 = &VAR_6->IDataObject_iface;
    return VAR_1;
}
