
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int NetworkAddress; TYPE_1__* Router; } ;
struct TYPE_8__ {struct TYPE_8__* Flink; } ;
struct TYPE_7__ {int Address; } ;
typedef TYPE_1__* PNEIGHBOR_CACHE_ENTRY ;
typedef TYPE_2__* PLIST_ENTRY ;
typedef TYPE_3__* PFIB_ENTRY ;


 int FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int ,int ) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*) ;

void FUNC_3() {
    PLIST_ENTRY VAR_4;
    PLIST_ENTRY VAR_5;
    PFIB_ENTRY VAR_6;
    PNEIGHBOR_CACHE_ENTRY VAR_7;

    FUNC_2(VAR_0,("Dumping Routes\n"));

    VAR_4 = VAR_1.Flink;
    while (VAR_4 != &VAR_1) {
        VAR_5 = VAR_4->Flink;
 VAR_6 = FUNC_1(VAR_4, VAR_2, VAR_3);

        VAR_7 = VAR_6->Router;

 FUNC_2(VAR_0,("Examining FIBE %x\n", VAR_6));
 FUNC_2(VAR_0,("... NetworkAddress %s\n", FUNC_0(&VAR_6->NetworkAddress)));
 FUNC_2(VAR_0,("... NCE->Address . %s\n", FUNC_0(&VAR_7->Address)));

 VAR_4 = VAR_5;
    }

    FUNC_2(VAR_0,("Dumping Routes ... Done\n"));
}
