
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* uint64_t ;
typedef int u_char ;
struct iocb {size_t aio_nbytes; int aio_resfd; int aio_flags; int aio_offset; void* aio_buf; int aio_fildes; int aio_lio_opcode; void* aio_data; } ;
typedef int ssize_t ;
typedef int off_t ;
typedef int ngx_pool_t ;
struct TYPE_12__ {struct TYPE_12__* data; } ;
struct TYPE_9__ {TYPE_5__ name; int log; int fd; TYPE_3__* aio; } ;
typedef TYPE_1__ ngx_file_t ;
struct TYPE_10__ {int active; scalar_t__ complete; scalar_t__ ready; int handler; } ;
typedef TYPE_2__ ngx_event_t ;
struct TYPE_11__ {struct iocb aiocb; int res; TYPE_2__ event; } ;
typedef TYPE_3__ ngx_event_aio_t ;
typedef scalar_t__ ngx_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ,int,struct iocb**) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int ,int ,int ,char*,scalar_t__,int ,size_t,TYPE_5__*) ;
 int FUNC_3 (int ,int ,scalar_t__,char*,TYPE_5__*) ;
 int FUNC_4 (struct iocb*,int) ;
 int FUNC_5 (TYPE_1__*,int *,size_t,int ) ;
 int FUNC_6 (int ) ;

ssize_t
FUNC_7(ngx_file_t *VAR_15, u_char *VAR_16, size_t VAR_17, off_t VAR_18,
    ngx_pool_t *VAR_19)
{
    ngx_err_t VAR_20;
    struct iocb *VAR_21[1];
    ngx_event_t *VAR_22;
    ngx_event_aio_t *VAR_23;

    if (!VAR_13) {
        return FUNC_5(VAR_15, VAR_16, VAR_17, VAR_18);
    }

    if (VAR_15->aio == ((void*)0) && FUNC_1(VAR_15, VAR_19) != VAR_9) {
        return VAR_5;
    }

    VAR_23 = VAR_15->aio;
    VAR_22 = &VAR_23->event;

    if (!VAR_22->ready) {
        FUNC_3(VAR_6, VAR_15->log, 0,
                      "second aio post for \"%V\"", &VAR_15->name);
        return VAR_2;
    }

    FUNC_2(VAR_8, VAR_15->log, 0,
                   "aio complete:%d @%O:%uz %V",
                   VAR_22->complete, VAR_18, VAR_17, &VAR_15->name);

    if (VAR_22->complete) {
        VAR_22->active = 0;
        VAR_22->complete = 0;

        if (VAR_23->res >= 0) {
            FUNC_6(0);
            return VAR_23->res;
        }

        FUNC_6(-VAR_23->res);

        FUNC_3(VAR_7, VAR_15->log, VAR_11,
                      "aio read \"%s\" failed", VAR_15->name.data);

        return VAR_5;
    }

    FUNC_4(&VAR_23->aiocb, sizeof(struct iocb));

    VAR_23->aiocb.aio_data = (uint64_t) (uintptr_t) VAR_22;
    VAR_23->aiocb.aio_lio_opcode = VAR_0;
    VAR_23->aiocb.aio_fildes = VAR_15->fd;
    VAR_23->aiocb.aio_buf = (uint64_t) (uintptr_t) VAR_16;
    VAR_23->aiocb.aio_nbytes = VAR_17;
    VAR_23->aiocb.aio_offset = VAR_18;
    VAR_23->aiocb.aio_flags = VAR_1;
    VAR_23->aiocb.aio_resfd = VAR_12;

    VAR_22->handler = VAR_14;

    VAR_21[0] = &VAR_23->aiocb;

    if (FUNC_0(VAR_10, 1, VAR_21) == 1) {
        VAR_22->active = 1;
        VAR_22->ready = 0;
        VAR_22->complete = 0;

        return VAR_2;
    }

    VAR_20 = VAR_11;

    if (VAR_20 == VAR_3) {
        return FUNC_5(VAR_15, VAR_16, VAR_17, VAR_18);
    }

    FUNC_3(VAR_7, VAR_15->log, VAR_20,
                  "io_submit(\"%V\") failed", &VAR_15->name);

    if (VAR_20 == VAR_4) {
        VAR_13 = 0;
        return FUNC_5(VAR_15, VAR_16, VAR_17, VAR_18);
    }

    return VAR_5;
}
