
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_10__ {int Netmask; int NetworkAddress; TYPE_1__* Router; } ;
struct TYPE_9__ {struct TYPE_9__* Flink; } ;
struct TYPE_8__ {int State; int Address; } ;
typedef TYPE_1__* PNEIGHBOR_CACHE_ENTRY ;
typedef TYPE_2__* PLIST_ENTRY ;
typedef int * PIP_ADDRESS ;
typedef TYPE_3__* PFIB_ENTRY ;
typedef int KIRQL ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ) ;

PNEIGHBOR_CACHE_ENTRY FUNC_7(PIP_ADDRESS VAR_7)
{
    KIRQL VAR_8;
    PLIST_ENTRY VAR_9;
    PLIST_ENTRY VAR_10;
    PFIB_ENTRY VAR_11;
    UCHAR VAR_12;
    UINT VAR_13, VAR_14 = 0, VAR_15;
    PNEIGHBOR_CACHE_ENTRY VAR_16, VAR_17 = ((void*)0);

    FUNC_4(VAR_0, ("Called. Destination (0x%X)\n", VAR_7));

    FUNC_4(VAR_0, ("Destination (%s)\n", FUNC_0(VAR_7)));

    FUNC_5(&VAR_2, &VAR_8);

    VAR_9 = VAR_1.Flink;
    while (VAR_9 != &VAR_1) {
        VAR_10 = VAR_9->Flink;
     VAR_11 = FUNC_2(VAR_9, VAR_3, VAR_4);

        VAR_16 = VAR_11->Router;
        VAR_12 = VAR_16->State;

 VAR_13 = FUNC_3(VAR_7, &VAR_11->NetworkAddress);
 VAR_15 = FUNC_1(&VAR_11->Netmask);

 FUNC_4(VAR_0,("This-Route: %s (Sharing %d bits)\n",
      FUNC_0(&VAR_16->Address), VAR_13));

 if(VAR_13 >= VAR_15 && (VAR_13 > VAR_14 || !VAR_17) &&
           ((!(VAR_12 & VAR_6) && !(VAR_12 & VAR_5)) || !VAR_17)) {

     VAR_17 = VAR_16;
     VAR_14 = VAR_13;
     FUNC_4(VAR_0,("Route selected\n"));
 }

        VAR_9 = VAR_10;
    }

    FUNC_6(&VAR_2, VAR_8);

    if( VAR_17 ) {
 FUNC_4(VAR_0,("Routing to %s\n", FUNC_0(&VAR_17->Address)));
    } else {
 FUNC_4(VAR_0,("Packet won't be routed\n"));
    }

    return VAR_17;
}
