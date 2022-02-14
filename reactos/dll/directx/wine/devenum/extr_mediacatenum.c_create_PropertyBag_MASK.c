
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_8__ {scalar_t__ type; int name; int class; scalar_t__ has_class; int clsid; } ;
struct TYPE_7__ {int ref; scalar_t__ type; TYPE_3__ IPropertyBag_iface; scalar_t__ path; int clsid; } ;
typedef TYPE_1__ RegPropBagImpl ;
typedef TYPE_2__ MediaCatMoniker ;
typedef TYPE_3__ IPropertyBag ;
typedef int HRESULT ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,scalar_t__,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_10 ;

__attribute__((used)) static HRESULT FUNC_6(MediaCatMoniker *VAR_11, IPropertyBag **VAR_12)
{
    RegPropBagImpl * VAR_13 = FUNC_0(sizeof(RegPropBagImpl));
    if (!VAR_13)
        return VAR_4;
    VAR_13->IPropertyBag_iface.lpVtbl = &VAR_5;
    VAR_13->ref = 1;
    VAR_13->type = VAR_11->type;

    if (VAR_13->type == VAR_2)
        VAR_13->clsid = VAR_11->clsid;
    else if (VAR_13->type == VAR_3)
    {
        FUNC_4(VAR_13->path, VAR_8);
        FUNC_3(VAR_13->path, VAR_7);
        if (VAR_11->has_class)
        {
            FUNC_2(&VAR_11->class, VAR_13->path + FUNC_5(VAR_13->path), VAR_0);
            FUNC_3(VAR_13->path, VAR_9);
            FUNC_3(VAR_13->path, VAR_7);
        }
        FUNC_3(VAR_13->path, VAR_11->name);
    }
    else if (VAR_13->type == VAR_1)
    {
        FUNC_4(VAR_13->path, VAR_10);
        if (VAR_11->has_class)
        {
            FUNC_2(&VAR_11->class, VAR_13->path + FUNC_5(VAR_13->path), VAR_0);
            FUNC_3(VAR_13->path, VAR_7);
        }
        FUNC_3(VAR_13->path, VAR_11->name);
    }

    *VAR_12 = &VAR_13->IPropertyBag_iface;
    FUNC_1();
    return VAR_6;
}
