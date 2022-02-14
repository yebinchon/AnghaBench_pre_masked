
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VARIANT ;
typedef scalar_t__ UINT ;
struct TYPE_8__ {scalar_t__ dwHint; } ;
struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; TYPE_2__ IPropertyBag2_iface; TYPE_3__* properties; int * values; scalar_t__ prop_count; } ;
typedef TYPE_1__ PropertyBag ;
typedef int PROPBAG2 ;
typedef TYPE_2__ IPropertyBag2 ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 void* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_3__*,int const*) ;

HRESULT FUNC_5(const PROPBAG2 *VAR_4, UINT VAR_5,
                           IPropertyBag2 **VAR_6)
{
    UINT VAR_7;
    HRESULT VAR_8 = VAR_3;
    PropertyBag *VAR_9;

    VAR_9 = FUNC_2(FUNC_1(), 0, sizeof(PropertyBag));
    if (!VAR_9) return VAR_0;

    VAR_9->IPropertyBag2_iface.lpVtbl = &VAR_2;
    VAR_9->ref = 1;
    VAR_9->prop_count = VAR_5;

    if (VAR_5 == 0)
    {
        VAR_9->properties = ((void*)0);
        VAR_9->values = ((void*)0);
    }
    else
    {
        VAR_9->properties = FUNC_2(FUNC_1(), VAR_1, sizeof(PROPBAG2)*VAR_5);
        VAR_9->values = FUNC_2(FUNC_1(), VAR_1, sizeof(VARIANT)*VAR_5);

        if (!VAR_9->properties || !VAR_9->values)
            VAR_8 = VAR_0;
        else
            for (VAR_7=0; VAR_7 < VAR_5; VAR_7++)
            {
                VAR_8 = FUNC_4(VAR_9->properties+VAR_7, VAR_4+VAR_7);
                if (FUNC_0(VAR_8))
                    break;
                VAR_9->properties[VAR_7].dwHint = VAR_7+1;
            }
    }

    if (FUNC_0(VAR_8))
    {
        FUNC_3(&VAR_9->IPropertyBag2_iface);
        *VAR_6 = ((void*)0);
    }
    else
        *VAR_6 = &VAR_9->IPropertyBag2_iface;

    return VAR_8;
}
