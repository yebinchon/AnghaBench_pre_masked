
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* Flink; } ;
struct TYPE_7__ {int DeviceName; } ;
typedef int PNDIS_STRING ;
typedef TYPE_1__* PNDISUIO_ADAPTER_CONTEXT ;
typedef TYPE_2__* PLIST_ENTRY ;
typedef int KIRQL ;


 TYPE_1__* FUNC_0 (TYPE_2__*,int ,int ) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 int VAR_4 ;

PNDISUIO_ADAPTER_CONTEXT
FUNC_4(PNDIS_STRING VAR_5)
{
    KIRQL VAR_6;
    PLIST_ENTRY VAR_7;
    PNDISUIO_ADAPTER_CONTEXT VAR_8;

    FUNC_1(&VAR_1, &VAR_6);
    VAR_7 = VAR_0.Flink;
    while (VAR_7 != &VAR_0)
    {
        VAR_8 = FUNC_0(VAR_7, VAR_3, VAR_2);


        if (FUNC_3(&VAR_8->DeviceName, VAR_5, VAR_4))
        {
            FUNC_2(&VAR_1, VAR_6);
            return VAR_8;
        }

        VAR_7 = VAR_7->Flink;
    }
    FUNC_2(&VAR_1, VAR_6);

    return ((void*)0);
}
