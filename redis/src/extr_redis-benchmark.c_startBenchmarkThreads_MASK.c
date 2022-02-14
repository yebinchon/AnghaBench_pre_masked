
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int thread; } ;
typedef TYPE_1__ benchmarkThread ;
struct TYPE_5__ {int num_threads; TYPE_1__** threads; } ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (int *,int *,int ,TYPE_1__*) ;
 int FUNC_3 (int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4() {
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_0.num_threads; VAR_3++) {
        benchmarkThread *VAR_4 = VAR_0.threads[VAR_3];
        if (FUNC_2(&(VAR_4->thread), ((void*)0), VAR_1, VAR_4)){
            FUNC_1(VAR_2, "FATAL: Failed to start thread %d.\n", VAR_3);
            FUNC_0(1);
        }
    }
    for (VAR_3 = 0; VAR_3 < VAR_0.num_threads; VAR_3++)
        FUNC_3(VAR_0.threads[VAR_3]->thread, ((void*)0));
}
