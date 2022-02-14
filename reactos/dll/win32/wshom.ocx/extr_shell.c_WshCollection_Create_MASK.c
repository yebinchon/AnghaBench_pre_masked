
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; TYPE_2__ IWshCollection_iface; int classinfo; } ;
typedef TYPE_1__ WshCollection ;
typedef TYPE_2__ IWshCollection ;
typedef int IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int *) ;

__attribute__((used)) static HRESULT FUNC_2(IWshCollection **VAR_4)
{
    WshCollection *VAR_5;

    VAR_5 = FUNC_0(sizeof(*VAR_5));
    if (!VAR_5) return VAR_0;

    VAR_5->IWshCollection_iface.lpVtbl = &VAR_3;
    VAR_5->ref = 1;

    FUNC_1(&VAR_1, (IUnknown *)&VAR_5->IWshCollection_iface, &VAR_5->classinfo);
    *VAR_4 = &VAR_5->IWshCollection_iface;

    return VAR_2;
}
