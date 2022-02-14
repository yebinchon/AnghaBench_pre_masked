
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ dir; } ;
struct TYPE_9__ {int IPin_iface; } ;
struct TYPE_10__ {TYPE_1__ pin; } ;
typedef int STOPPROCESSPROC ;
typedef int SAMPLEPROC_PULL ;
typedef int REQUESTPROC ;
typedef int QUERYACCEPTPROC ;
typedef TYPE_2__ PullPin ;
typedef TYPE_3__ PIN_INFO ;
typedef int LPVOID ;
typedef int LPCRITICAL_SECTION ;
typedef int IPinVtbl ;
typedef int IPin ;
typedef int HRESULT ;
typedef int CLEANUPPROC ;


 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int const*,TYPE_3__ const*,int ,int ,int ,int ,int ,int ,int ,TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_4 ;

HRESULT FUNC_5(const IPinVtbl *VAR_5, const PIN_INFO * VAR_6,
                          SAMPLEPROC_PULL VAR_7, LPVOID VAR_8, QUERYACCEPTPROC VAR_9,
                          CLEANUPPROC VAR_10, REQUESTPROC VAR_11, STOPPROCESSPROC VAR_12,
                          LPCRITICAL_SECTION VAR_13, IPin ** VAR_14)
{
    PullPin * VAR_15;

    *VAR_14 = ((void*)0);

    if (VAR_6->dir != VAR_3)
    {
        FUNC_2("Pin direction(%x) != PINDIR_INPUT\n", VAR_6->dir);
        return VAR_1;
    }

    VAR_15 = FUNC_0(sizeof(*VAR_15));

    if (!VAR_15)
        return VAR_2;

    if (FUNC_4(FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_15)))
    {
        *VAR_14 = &VAR_15->pin.IPin_iface;
        return VAR_4;
    }

    FUNC_1(VAR_15);
    return VAR_0;
}
