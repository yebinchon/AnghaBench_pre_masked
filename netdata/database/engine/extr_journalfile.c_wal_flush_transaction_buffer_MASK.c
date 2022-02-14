
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct rrdengine_worker_config {int loop; struct rrdengine_instance* ctx; } ;
struct rrdengine_journalfile {int pos; int file; } ;
struct TYPE_9__ {int io_write_requests; int io_write_bytes; } ;
struct TYPE_8__ {unsigned int buf_pos; unsigned int buf_size; int * buf; } ;
struct TYPE_7__ {TYPE_1__* last; } ;
struct rrdengine_instance {TYPE_4__ stats; TYPE_3__ commit_log; int disk_space; TYPE_2__ datafiles; } ;
struct TYPE_10__ {struct generic_io_descriptor* data; } ;
struct generic_io_descriptor {unsigned int bytes; int iov; TYPE_5__ req; int * buf; int * completion; int pos; } ;
struct TYPE_6__ {struct rrdengine_journalfile* journalfile; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 struct generic_io_descriptor* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (void*,unsigned int) ;
 int FUNC_4 (int ,TYPE_5__*,int ,int *,int,int ,int ) ;

void FUNC_5(struct rrdengine_worker_config* VAR_3)
{
    struct rrdengine_instance *VAR_4 = VAR_3->ctx;
    int VAR_5;
    struct generic_io_descriptor *VAR_6;
    unsigned VAR_7, VAR_8;
    struct rrdengine_journalfile *VAR_9;

    if (FUNC_2(((void*)0) == VAR_4->commit_log.buf || 0 == VAR_4->commit_log.buf_pos)) {
        return;
    }

    VAR_9 = VAR_4->datafiles.last->journalfile;

    VAR_6 = FUNC_1(sizeof(*VAR_6));
    VAR_7 = VAR_4->commit_log.buf_pos;
    VAR_8 = VAR_4->commit_log.buf_size;
    if (VAR_7 < VAR_8) {

        *(uint8_t *) (VAR_4->commit_log.buf + VAR_7) = VAR_1;
    }
    VAR_6->buf = VAR_4->commit_log.buf;
    VAR_6->bytes = VAR_8;
    VAR_6->pos = VAR_9->pos;
    VAR_6->req.data = VAR_6;
    VAR_6->completion = ((void*)0);

    VAR_6->iov = FUNC_3((void *)VAR_6->buf, VAR_8);
    VAR_5 = FUNC_4(VAR_3->loop, &VAR_6->req, VAR_9->file, &VAR_6->iov, 1,
                      VAR_9->pos, VAR_2);
    FUNC_0 (-1 != VAR_5);
    VAR_9->pos += VAR_0;
    VAR_4->disk_space += VAR_0;
    VAR_4->commit_log.buf = ((void*)0);
    VAR_4->stats.io_write_bytes += VAR_0;
    ++VAR_4->stats.io_write_requests;
}
