
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int benchmarkThread ;
struct TYPE_2__ {int num_threads; int ** threads; } ;


 TYPE_1__ VAR_0 ;
 int * FUNC_0 (int) ;
 int FUNC_1 () ;
 int ** FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3() {
    int VAR_1;
    if (VAR_0.threads) FUNC_1();
    VAR_0.threads = FUNC_2(VAR_0.num_threads * sizeof(benchmarkThread*));
    for (VAR_1 = 0; VAR_1 < VAR_0.num_threads; VAR_1++) {
        benchmarkThread *VAR_2 = FUNC_0(VAR_1);
        VAR_0.threads[VAR_1] = VAR_2;
    }
}
