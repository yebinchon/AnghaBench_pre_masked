
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_7__ {int ref; TYPE_1__ IEnumMoniker_iface; int dmo_enum; int * cm_key; int * sw_key; int class; scalar_t__ cm_index; scalar_t__ sw_index; } ;
typedef int * REFCLSID ;
typedef TYPE_1__ IEnumMoniker ;
typedef int HRESULT ;
typedef TYPE_2__ EnumMonikerImpl ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,int ,int *,int ,int *,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int ,int *,int ,int ,int **) ;
 int VAR_6 ;
 int FUNC_6 (int *,int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int VAR_10 ;

HRESULT FUNC_10(REFCLSID VAR_11, IEnumMoniker **VAR_12)
{
    EnumMonikerImpl * VAR_13 = FUNC_0(sizeof(EnumMonikerImpl));
    WCHAR VAR_14[78];
    HRESULT VAR_15;

    if (!VAR_13)
        return VAR_1;

    VAR_13->IEnumMoniker_iface.lpVtbl = &VAR_4;
    VAR_13->ref = 1;
    VAR_13->sw_index = 0;
    VAR_13->cm_index = 0;
    VAR_13->class = *VAR_11;

    FUNC_8(VAR_14, VAR_8);
    FUNC_7(VAR_14, VAR_7);
    FUNC_6(VAR_11, VAR_14 + FUNC_9(VAR_14), VAR_0);
    FUNC_7(VAR_14, VAR_9);
    if (FUNC_5(VAR_2, VAR_14, 0, VAR_5, &VAR_13->sw_key))
        VAR_13->sw_key = ((void*)0);

    FUNC_8(VAR_14, VAR_10);
    FUNC_6(VAR_11, VAR_14 + FUNC_9(VAR_14), VAR_0);
    if (FUNC_5(VAR_3, VAR_14, 0, VAR_5, &VAR_13->cm_key))
        VAR_13->cm_key = ((void*)0);

    VAR_15 = FUNC_2(VAR_11, 0, 0, ((void*)0), 0, ((void*)0), &VAR_13->dmo_enum);
    if (FUNC_3(VAR_15))
    {
        FUNC_4(&VAR_13->IEnumMoniker_iface);
        return VAR_15;
    }

    *VAR_12 = &VAR_13->IEnumMoniker_iface;

    FUNC_1();

    return VAR_6;
}
