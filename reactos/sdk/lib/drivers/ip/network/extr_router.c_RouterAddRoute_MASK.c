
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_7__ {int ListEntry; int Metric; TYPE_1__* Router; int Netmask; int NetworkAddress; } ;
struct TYPE_6__ {int Address; } ;
typedef TYPE_1__* PNEIGHBOR_CACHE_ENTRY ;
typedef int * PIP_ADDRESS ;
typedef TYPE_2__* PFIB_ENTRY ;
typedef int FIB_ENTRY ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int ,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,int *,int *) ;

PFIB_ENTRY FUNC_5(
    PIP_ADDRESS VAR_6,
    PIP_ADDRESS VAR_7,
    PNEIGHBOR_CACHE_ENTRY VAR_8,
    UINT VAR_9)
{
    PFIB_ENTRY VAR_10;

    FUNC_3(VAR_0, ("Called. NetworkAddress (0x%X)  Netmask (0x%X) "
        "Router (0x%X)  Metric (%d).\n", VAR_6, VAR_7, VAR_8, VAR_9));

    FUNC_3(VAR_0, ("NetworkAddress (%s)  Netmask (%s)  Router (%s).\n",
          FUNC_0(VAR_6),
          FUNC_0(VAR_7),
          FUNC_0(&VAR_8->Address)));

    VAR_10 = FUNC_1(VAR_5, sizeof(FIB_ENTRY), VAR_3);
    if (!VAR_10) {
        FUNC_3(VAR_4, ("Insufficient resources.\n"));
        return ((void*)0);
    }

    FUNC_2( &VAR_10->NetworkAddress, VAR_6,
     sizeof(VAR_10->NetworkAddress) );
    FUNC_2( &VAR_10->Netmask, VAR_7,
     sizeof(VAR_10->Netmask) );
    VAR_10->Router = VAR_8;
    VAR_10->Metric = VAR_9;


    FUNC_4(&VAR_1, &VAR_10->ListEntry, &VAR_2);

    return VAR_10;
}
