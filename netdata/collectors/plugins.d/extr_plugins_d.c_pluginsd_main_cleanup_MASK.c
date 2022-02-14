
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plugind {int thread; int id; int obsolete; scalar_t__ enabled; struct plugind* next; } ;
struct netdata_static_thread {int enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 struct plugind* VAR_2 ;

__attribute__((used)) static void FUNC_2(void *VAR_3) {
    struct netdata_static_thread *VAR_4 = (struct netdata_static_thread *)VAR_3;
    VAR_4->enabled = VAR_1;
    FUNC_0("cleaning up...");

    struct plugind *VAR_5;
    for (VAR_5 = VAR_2; VAR_5; VAR_5 = VAR_5->next) {
        if (VAR_5->enabled && !VAR_5->obsolete) {
            FUNC_0("stopping plugin thread: %s", VAR_5->id);
            FUNC_1(VAR_5->thread);
        }
    }

    FUNC_0("cleanup completed.");
    VAR_4->enabled = VAR_0;
}
