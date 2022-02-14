
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ time_t ;
typedef scalar_t__ off_t ;
typedef scalar_t__ ngx_uint_t ;
typedef int ngx_msec_t ;
typedef int ngx_msec_int_t ;
typedef int ngx_int_t ;
struct TYPE_9__ {scalar_t__ files; int manager_sleep; scalar_t__ max_size; scalar_t__ manager_files; int manager_threshold; scalar_t__ last; TYPE_2__* shpool; TYPE_1__* sh; } ;
typedef TYPE_3__ ngx_http_file_cache_t ;
struct TYPE_10__ {int log; } ;
struct TYPE_8__ {int mutex; } ;
struct TYPE_7__ {scalar_t__ size; scalar_t__ count; scalar_t__ watermark; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 TYPE_6__* VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int ,int ,char*,scalar_t__,int,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 () ;

__attribute__((used)) static ngx_msec_t
FUNC_7(void *VAR_5)
{
    ngx_http_file_cache_t *VAR_6 = VAR_5;

    off_t VAR_7;
    time_t VAR_8;
    ngx_msec_t VAR_9, VAR_10;
    ngx_uint_t VAR_11, VAR_12;

    VAR_6->last = VAR_1;
    VAR_6->files = 0;

    VAR_10 = (ngx_msec_t) FUNC_1(VAR_6) * 1000;

    if (VAR_10 == 0) {
        VAR_10 = VAR_6->manager_sleep;
        goto done;
    }

    for ( ;; ) {
        FUNC_4(&VAR_6->shpool->mutex);

        VAR_7 = VAR_6->sh->size;
        VAR_11 = VAR_6->sh->count;
        VAR_12 = VAR_6->sh->watermark;

        FUNC_5(&VAR_6->shpool->mutex);

        FUNC_3(VAR_0, VAR_2->log, 0,
                       "http file cache size: %O c:%ui w:%i",
                       VAR_7, VAR_11, (ngx_int_t) VAR_12);

        if (VAR_7 < VAR_6->max_size && VAR_11 < VAR_12) {
            break;
        }

        VAR_8 = FUNC_2(VAR_6);

        if (VAR_8 > 0) {
            VAR_10 = (ngx_msec_t) VAR_8 * 1000;
            break;
        }

        if (VAR_3 || VAR_4) {
            break;
        }

        if (++VAR_6->files >= VAR_6->manager_files) {
            VAR_10 = VAR_6->manager_sleep;
            break;
        }

        FUNC_6();

        VAR_9 = FUNC_0((ngx_msec_int_t) (VAR_1 - VAR_6->last));

        if (VAR_9 >= VAR_6->manager_threshold) {
            VAR_10 = VAR_6->manager_sleep;
            break;
        }
    }

done:

    VAR_9 = FUNC_0((ngx_msec_int_t) (VAR_1 - VAR_6->last));

    FUNC_3(VAR_0, VAR_2->log, 0,
                   "http file cache manager: %ui e:%M n:%M",
                   VAR_6->files, VAR_9, VAR_10);

    return VAR_10;
}
