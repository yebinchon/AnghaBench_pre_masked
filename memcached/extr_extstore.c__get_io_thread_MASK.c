
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {long long depth; } ;
typedef TYPE_1__ store_io_thread ;
struct TYPE_6__ {int io_threadcount; TYPE_1__* io_threads; int mutex; } ;
typedef TYPE_2__ store_engine ;


 long long VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static store_io_thread *FUNC_2(store_engine *VAR_1) {
    int VAR_2 = -1;
    long long int VAR_3 = VAR_0;
    FUNC_0(&VAR_1->mutex);



    for (int VAR_4 = 0; VAR_4 < VAR_1->io_threadcount; VAR_4++) {
        if (VAR_1->io_threads[VAR_4].depth == 0) {
            VAR_2 = VAR_4;
            break;
        } else if (VAR_1->io_threads[VAR_4].depth < VAR_3) {
                VAR_2 = VAR_4;
            VAR_3 = VAR_1->io_threads[VAR_4].depth;
        }
    }
    FUNC_1(&VAR_1->mutex);

    return &VAR_1->io_threads[VAR_2];
}
