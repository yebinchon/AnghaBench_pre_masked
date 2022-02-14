
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
struct netdata_static_thread {int enabled; } ;
struct TYPE_2__ {scalar_t__ running; int thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static void FUNC_5(void *VAR_6) {
    struct netdata_static_thread *VAR_7 = (struct netdata_static_thread *)VAR_6;
    VAR_7->enabled = VAR_1;

    int VAR_8, VAR_9 = 0;
    usec_t VAR_10 = 2 * VAR_2, VAR_11 = 50000;


    for(VAR_8 = 1; VAR_8 < VAR_4; VAR_8++) {
        if(VAR_5[VAR_8].running) {
            VAR_9++;
            FUNC_1("stopping worker %d", VAR_8 + 1);
            FUNC_3(VAR_5[VAR_8].thread);
        }
        else
            FUNC_1("found stopped worker %d", VAR_8 + 1);
    }

    while(VAR_9 && VAR_10 > 0) {
        VAR_10 -= VAR_11;
        FUNC_1("Waiting %d static web threads to finish...", VAR_9);
        FUNC_4(VAR_11);
        VAR_9 = 0;


        for(VAR_8 = 1; VAR_8 < VAR_4; VAR_8++) {
            if (VAR_5[VAR_8].running)
                VAR_9++;
        }
    }

    if(VAR_9)
        FUNC_0("%d static web threads are taking too long to finish. Giving up.", VAR_9);

    FUNC_1("closing all web server sockets...");
    FUNC_2(&VAR_3);

    FUNC_1("all static web threads stopped.");
    VAR_7->enabled = VAR_0;
}
