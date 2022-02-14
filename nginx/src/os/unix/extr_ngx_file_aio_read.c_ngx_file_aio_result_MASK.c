
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_7__ {int fd; int log; int name; } ;
typedef TYPE_1__ ngx_file_t ;
struct TYPE_8__ {int ready; scalar_t__ active; } ;
typedef TYPE_2__ ngx_event_t ;
struct TYPE_9__ {int err; int nbytes; int aiocb; } ;
typedef TYPE_3__ ngx_event_aio_t ;
typedef int ngx_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int ,char*,int ,int) ;
 int FUNC_3 (int ,int ,int,char*,int *) ;

__attribute__((used)) static ssize_t
FUNC_4(ngx_file_t *VAR_7, ngx_event_aio_t *VAR_8, ngx_event_t *VAR_9)
{
    int VAR_10;
    ngx_err_t VAR_11;

    VAR_10 = FUNC_0(&VAR_8->aiocb);

    FUNC_2(VAR_5, VAR_7->log, 0,
                   "aio_error: fd:%d %d", VAR_7->fd, VAR_10);

    if (VAR_10 == -1) {
        VAR_11 = VAR_6;
        VAR_8->err = VAR_11;

        FUNC_3(VAR_3, VAR_7->log, VAR_11,
                      "aio_error(\"%V\") failed", &VAR_7->name);
        return VAR_2;
    }

    if (VAR_10 == VAR_1) {
        if (VAR_9->ready) {
            VAR_9->ready = 0;
            FUNC_3(VAR_3, VAR_7->log, VAR_10,
                          "aio_read(\"%V\") still in progress",
                          &VAR_7->name);
        }

        return VAR_0;
    }

    VAR_10 = FUNC_1(&VAR_8->aiocb);

    if (VAR_10 == -1) {
        VAR_11 = VAR_6;
        VAR_8->err = VAR_11;
        VAR_9->ready = 1;

        FUNC_3(VAR_4, VAR_7->log, VAR_11,
                      "aio_return(\"%V\") failed", &VAR_7->name);
        return VAR_2;
    }

    VAR_8->err = 0;
    VAR_8->nbytes = VAR_10;
    VAR_9->ready = 1;
    VAR_9->active = 0;

    FUNC_2(VAR_5, VAR_7->log, 0,
                   "aio_return: fd:%d %d", VAR_7->fd, VAR_10);

    return VAR_10;
}
