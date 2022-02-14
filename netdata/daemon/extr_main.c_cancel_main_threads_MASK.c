
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
struct TYPE_2__ {scalar_t__ enabled; int * name; int * thread; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 TYPE_1__* VAR_4 ;

void FUNC_5() {
    FUNC_1();

    int VAR_5, VAR_6 = 0;
    usec_t VAR_7 = 5 * VAR_2, VAR_8 = 100000;
    for (VAR_5 = 0; VAR_4[VAR_5].name != ((void*)0) ; VAR_5++) {
        if(VAR_4[VAR_5].enabled == VAR_1) {
            FUNC_2("EXIT: Stopping master thread: %s", VAR_4[VAR_5].name);
            FUNC_3(*VAR_4[VAR_5].thread);
            VAR_6++;
        }
    }

    VAR_3 = 1;

    while(VAR_6 && VAR_7 > 0) {
        VAR_7 -= VAR_8;
        FUNC_2("Waiting %d threads to finish...", VAR_6);
        FUNC_4(VAR_8);
        VAR_6 = 0;
        for (VAR_5 = 0; VAR_4[VAR_5].name != ((void*)0) ; VAR_5++) {
            if (VAR_4[VAR_5].enabled != VAR_0)
                VAR_6++;
        }
    }

    if(VAR_6) {
        for (VAR_5 = 0; VAR_4[VAR_5].name != ((void*)0) ; VAR_5++) {
            if (VAR_4[VAR_5].enabled != VAR_0)
                FUNC_0("Master thread %s takes too long to exit. Giving up...", VAR_4[VAR_5].name);
        }
    }
    else
        FUNC_2("All threads finished.");
}
