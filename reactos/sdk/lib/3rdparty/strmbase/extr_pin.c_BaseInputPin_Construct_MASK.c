
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int IPin_iface; } ;
struct TYPE_17__ {TYPE_1__ pin; } ;
struct TYPE_14__ {int pfnCheckMediaType; } ;
struct TYPE_16__ {TYPE_2__ base; } ;
struct TYPE_15__ {scalar_t__ dir; } ;
typedef TYPE_3__ PIN_INFO ;
typedef int LPCRITICAL_SECTION ;
typedef int LONG ;
typedef int IPinVtbl ;
typedef int IPin ;
typedef int IMemAllocator ;
typedef int HRESULT ;
typedef TYPE_4__ BaseInputPinFuncTable ;
typedef TYPE_5__ BaseInputPin ;


 TYPE_5__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int const*,TYPE_3__ const*,TYPE_4__ const*,int ,int *,TYPE_5__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int) ;

HRESULT FUNC_6(const IPinVtbl *VAR_5, LONG VAR_6, const PIN_INFO * VAR_7,
                               const BaseInputPinFuncTable* VAR_8,
                               LPCRITICAL_SECTION VAR_9, IMemAllocator *VAR_10, IPin ** VAR_11)
{
    BaseInputPin * VAR_12;

    *VAR_11 = ((void*)0);

    FUNC_5(VAR_6 >= sizeof(BaseInputPin));
    FUNC_5(VAR_8->base.pfnCheckMediaType);

    if (VAR_7->dir != VAR_3)
    {
        FUNC_2("Pin direction(%x) != PINDIR_INPUT\n", VAR_7->dir);
        return VAR_1;
    }

    VAR_12 = FUNC_0(VAR_6);

    if (!VAR_12)
        return VAR_2;

    if (FUNC_4(FUNC_3(VAR_5, VAR_7, VAR_8, VAR_9, VAR_10, VAR_12)))
    {
        *VAR_11 = &VAR_12->pin.IPin_iface;
        return VAR_4;
    }

    FUNC_1(VAR_12);
    return VAR_0;
}
