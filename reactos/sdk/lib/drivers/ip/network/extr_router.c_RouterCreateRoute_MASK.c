
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_13__ {int Netmask; int NetworkAddress; TYPE_1__* Router; } ;
struct TYPE_12__ {struct TYPE_12__* Flink; } ;
struct TYPE_11__ {scalar_t__ Interface; } ;
typedef TYPE_1__* PNEIGHBOR_CACHE_ENTRY ;
typedef TYPE_2__* PLIST_ENTRY ;
typedef scalar_t__ PIP_INTERFACE ;
typedef int PIP_ADDRESS ;
typedef TYPE_3__* PFIB_ENTRY ;
typedef int KIRQL ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int ,int ) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_3 (scalar_t__,int ,int ) ;
 TYPE_3__* FUNC_4 (int ,int ,TYPE_1__*,int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_5 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int ) ;

PFIB_ENTRY FUNC_8(
    PIP_ADDRESS VAR_6,
    PIP_ADDRESS VAR_7,
    PIP_ADDRESS VAR_8,
    PIP_INTERFACE VAR_9,
    UINT VAR_10)
{
    KIRQL VAR_11;
    PLIST_ENTRY VAR_12;
    PLIST_ENTRY VAR_13;
    PFIB_ENTRY VAR_14;
    PNEIGHBOR_CACHE_ENTRY VAR_15;

    FUNC_6(&VAR_2, &VAR_11);

    VAR_12 = VAR_1.Flink;
    while (VAR_12 != &VAR_1) {
        VAR_13 = VAR_12->Flink;
        VAR_14 = FUNC_2(VAR_12, VAR_3, VAR_4);

        VAR_15 = VAR_14->Router;

        if(FUNC_1(VAR_6, &VAR_14->NetworkAddress) &&
           FUNC_1(VAR_7, &VAR_14->Netmask) &&
           VAR_15->Interface == VAR_9)
        {
            FUNC_5(VAR_0,("Attempting to add duplicate route to %s\n", FUNC_0(VAR_6)));
            FUNC_7(&VAR_2, VAR_11);
            return ((void*)0);
        }

        VAR_12 = VAR_13;
    }

    FUNC_7(&VAR_2, VAR_11);


    VAR_15 = FUNC_3(VAR_9, VAR_8, VAR_5);

    if (!VAR_15) {

        return ((void*)0);
    }

    return FUNC_4(VAR_6, VAR_7, VAR_15, VAR_10);
}
