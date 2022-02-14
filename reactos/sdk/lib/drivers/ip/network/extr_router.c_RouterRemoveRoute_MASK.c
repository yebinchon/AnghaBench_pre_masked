
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int NetworkAddress; TYPE_1__* Router; } ;
struct TYPE_9__ {struct TYPE_9__* Flink; } ;
struct TYPE_8__ {int Address; } ;
typedef TYPE_1__* PNEIGHBOR_CACHE_ENTRY ;
typedef TYPE_2__* PLIST_ENTRY ;
typedef int PIP_ADDRESS ;
typedef TYPE_3__* PFIB_ENTRY ;
typedef int NTSTATUS ;
typedef int KIRQL ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int ) ;

NTSTATUS FUNC_8(PIP_ADDRESS VAR_9, PIP_ADDRESS VAR_10)
{
    KIRQL VAR_11;
    PLIST_ENTRY VAR_12;
    PLIST_ENTRY VAR_13;
    PFIB_ENTRY VAR_14;
    BOOLEAN VAR_15 = VAR_1;
    PNEIGHBOR_CACHE_ENTRY VAR_16;

    FUNC_5(VAR_0, ("Called\n"));
    FUNC_5(VAR_0, ("Deleting Route From: %s\n", FUNC_0(VAR_10)));
    FUNC_5(VAR_0, ("                 To: %s\n", FUNC_0(VAR_9)));

    FUNC_6(&VAR_3, &VAR_11);

    FUNC_4();

    VAR_12 = VAR_2.Flink;
    while (VAR_12 != &VAR_2) {
        VAR_13 = VAR_12->Flink;
 VAR_14 = FUNC_2(VAR_12, VAR_4, VAR_5);

        VAR_16 = VAR_14->Router;

 if( FUNC_1( &VAR_14->NetworkAddress, VAR_9 ) &&
     FUNC_1( &VAR_16->Address, VAR_10 ) ) {
     VAR_15 = VAR_8;
     break;
 }

 VAR_14 = ((void*)0);
        VAR_12 = VAR_13;
    }

    if( VAR_15 ) {
        FUNC_5(VAR_0, ("Deleting route\n"));
        FUNC_3( VAR_14 );
    }

    FUNC_4();

    FUNC_7(&VAR_3, VAR_11);

    FUNC_5(VAR_0, ("Leaving\n"));

    return VAR_15 ? VAR_6 : VAR_7;
}
