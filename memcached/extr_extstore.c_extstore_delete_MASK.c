
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_8__ {scalar_t__ version; unsigned int bytes_used; unsigned int obj_count; int mutex; int closed; } ;
typedef TYPE_2__ store_page ;
struct TYPE_7__ {unsigned int bytes_used; unsigned int objects_used; } ;
struct TYPE_9__ {TYPE_1__ stats; TYPE_2__* pages; } ;
typedef TYPE_3__ store_engine ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(void *VAR_0, unsigned int VAR_1, uint64_t VAR_2,
        unsigned int VAR_3, unsigned int VAR_4) {
    store_engine *VAR_5 = (store_engine *)VAR_0;

    store_page *VAR_6 = &VAR_5->pages[VAR_1];
    int VAR_7 = 0;

    FUNC_3(&VAR_6->mutex);
    if (!VAR_6->closed && VAR_6->version == VAR_2) {
        if (VAR_6->bytes_used >= VAR_4) {
            VAR_6->bytes_used -= VAR_4;
        } else {
            VAR_6->bytes_used = 0;
        }

        if (VAR_6->obj_count >= VAR_3) {
            VAR_6->obj_count -= VAR_3;
        } else {
            VAR_6->obj_count = 0;
        }
        FUNC_0(VAR_5);
        VAR_5->stats.bytes_used -= VAR_4;
        VAR_5->stats.objects_used -= VAR_3;
        FUNC_1(VAR_5);

        if (VAR_6->obj_count == 0) {
            FUNC_2(VAR_5);
        }
    } else {
        VAR_7 = -1;
    }
    FUNC_4(&VAR_6->mutex);
    return VAR_7;
}
