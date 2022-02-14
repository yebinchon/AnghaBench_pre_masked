
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int * lpVtbl; } ;
struct TYPE_11__ {int * lpVtbl; } ;
struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_13__ {int refCount; int property_set_storage; TYPE_4__ IPropertySetStorage_iface; TYPE_3__ IPersistFile_iface; TYPE_2__ IUniformResourceLocatorW_iface; TYPE_1__ IUniformResourceLocatorA_iface; } ;
typedef TYPE_5__ InternetShortcut ;
typedef int IPropertyStorage ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 TYPE_5__* FUNC_2 (int ,int ,int) ;
 int VAR_2 ;
 int FUNC_3 (int ,int *,int *,int ,int,int **) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int *,int,int ,int ,int *,int *,int *,void**) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_5__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static InternetShortcut *FUNC_9(void)
{
    InternetShortcut *VAR_13;

    VAR_13 = FUNC_2(FUNC_1(), VAR_1, sizeof(InternetShortcut));
    if (VAR_13)
    {
        HRESULT VAR_14;
        IPropertyStorage *VAR_15;

        VAR_13->IUniformResourceLocatorA_iface.lpVtbl = &VAR_11;
        VAR_13->IUniformResourceLocatorW_iface.lpVtbl = &VAR_12;
        VAR_13->IPersistFile_iface.lpVtbl = &VAR_9;
        VAR_13->IPropertySetStorage_iface.lpVtbl = &VAR_10;
        VAR_13->refCount = 1;
        VAR_14 = FUNC_6(((void*)0), VAR_5 | VAR_7 | VAR_8 | VAR_6,
                                VAR_4, 0, ((void*)0), ((void*)0), &VAR_2, (void **) &VAR_13->property_set_storage);
        if (FUNC_0(VAR_14))
        {
            FUNC_7("Failed to create the storage object needed for the shortcut.\n");
            FUNC_8(VAR_13);
            return ((void*)0);
        }

        VAR_14 = FUNC_3(VAR_13->property_set_storage, &VAR_0, ((void*)0), VAR_3, VAR_5 | VAR_7 | VAR_8, &VAR_15);
        if (FUNC_0(VAR_14))
        {
            FUNC_7("Failed to create the property object needed for the shortcut.\n");
            FUNC_4(VAR_13->property_set_storage);
            FUNC_8(VAR_13);
            return ((void*)0);
        }
        FUNC_5(VAR_15);
    }

    return VAR_13;
}
