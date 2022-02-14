
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int TransformFilterFuncTable ;
struct TYPE_7__ {int IBaseFilter_iface; } ;
struct TYPE_8__ {TYPE_1__ filter; } ;
typedef TYPE_2__ TransformFilter ;
typedef int LONG ;
typedef int IBaseFilterVtbl ;
typedef int IBaseFilter ;
typedef int HRESULT ;
typedef int CLSID ;


 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int const*,int const*,int const*,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (int) ;

HRESULT FUNC_6(const IBaseFilterVtbl *VAR_3, LONG VAR_4, const CLSID* VAR_5, const TransformFilterFuncTable* VAR_6, IBaseFilter ** VAR_7)
{
    TransformFilter* VAR_8;

    *VAR_7 = ((void*)0);

    FUNC_5(VAR_4 >= sizeof(TransformFilter));

    VAR_8 = FUNC_0(VAR_4);

    if (!VAR_8)
        return VAR_1;

    FUNC_4(VAR_8, VAR_4);

    if (FUNC_2(FUNC_3(VAR_3, VAR_5, VAR_6, VAR_8)))
    {
        *VAR_7 = &VAR_8->filter.IBaseFilter_iface;
        return VAR_2;
    }

    FUNC_1(VAR_8);
    return VAR_0;
}
