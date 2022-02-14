
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct netdata_static_thread {int enabled; } ;
struct TYPE_4__ {int threads; int sockets; TYPE_1__* collection_threads_status; } ;
struct TYPE_3__ {int thread; scalar_t__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void FUNC_3(void *VAR_3) {
    struct netdata_static_thread *VAR_4 = (struct netdata_static_thread *)VAR_3;
    VAR_4->enabled = VAR_1;
    FUNC_0("cleaning up...");

    if (VAR_2.collection_threads_status) {
        int VAR_5;
        for (VAR_5 = 0; VAR_5 < VAR_2.threads; VAR_5++) {
            if(VAR_2.collection_threads_status[VAR_5].status) {
                FUNC_0("STATSD: stopping data collection thread %d...", VAR_5 + 1);
                FUNC_2(VAR_2.collection_threads_status[VAR_5].thread);
            }
            else {
                FUNC_0("STATSD: data collection thread %d found stopped.", VAR_5 + 1);
            }
        }
    }

    FUNC_0("STATSD: closing sockets...");
    FUNC_1(&VAR_2.sockets);

    FUNC_0("STATSD: cleanup completed.");
    VAR_4->enabled = VAR_0;
}
