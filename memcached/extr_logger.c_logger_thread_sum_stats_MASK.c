
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct logger_stats {scalar_t__ watcher_sent; scalar_t__ watcher_skipped; scalar_t__ worker_written; scalar_t__ worker_dropped; } ;
struct TYPE_2__ {int log_watcher_sent; int log_watcher_skipped; int log_worker_written; int log_worker_dropped; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_2(struct logger_stats *VAR_1) {
    FUNC_0();
    VAR_0.log_worker_dropped += VAR_1->worker_dropped;
    VAR_0.log_worker_written += VAR_1->worker_written;
    VAR_0.log_watcher_skipped += VAR_1->watcher_skipped;
    VAR_0.log_watcher_sent += VAR_1->watcher_sent;
    FUNC_1();
}
