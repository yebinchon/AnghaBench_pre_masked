
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct rrdengine_worker_config {int loop; struct rrdengine_instance* ctx; } ;
struct TYPE_5__ {unsigned int io_read_bytes; unsigned int io_read_extent_bytes; unsigned int pg_cache_backfills; int io_read_extents; int io_read_requests; } ;
struct rrdengine_instance {TYPE_2__ stats; } ;
struct rrdengine_datafile {int file; } ;
struct rrdeng_page_descr {struct page_cache_descr* pg_cache_descr; TYPE_1__* extent; } ;
struct page_cache_descr {int flags; } ;
struct TYPE_6__ {struct extent_io_descriptor* data; } ;
struct extent_io_descriptor {unsigned int descr_count; unsigned int bytes; unsigned int pos; int iov; TYPE_3__ req; scalar_t__ buf; int release_descr; int * completion; struct rrdeng_page_descr** descr_array; } ;
struct TYPE_4__ {unsigned int offset; unsigned int size; struct rrdengine_datafile* datafile; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 struct extent_io_descriptor* FUNC_3 (int) ;
 int FUNC_4 (void*,int ,unsigned int) ;
 int VAR_2 ;
 int FUNC_5 (struct rrdengine_instance*,struct rrdeng_page_descr*) ;
 int FUNC_6 (struct rrdengine_instance*,struct rrdeng_page_descr*) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (void*,unsigned int) ;
 int FUNC_10 (int ,TYPE_3__*,int ,int *,int,unsigned int,int ) ;

__attribute__((used)) static void FUNC_11(struct rrdengine_worker_config* VAR_3,
                           struct rrdeng_page_descr **VAR_4,
                           unsigned VAR_5,
                           uint8_t VAR_6)
{
    struct rrdengine_instance *VAR_7 = VAR_3->ctx;
    struct page_cache_descr *VAR_8;
    int VAR_9;
    unsigned VAR_10, VAR_11, VAR_12, VAR_13;

    struct extent_io_descriptor *VAR_14;
    struct rrdengine_datafile *VAR_15;

    VAR_15 = VAR_4[0]->extent->datafile;
    VAR_12 = VAR_4[0]->extent->offset;
    VAR_11 = VAR_4[0]->extent->size;

    VAR_14 = FUNC_3(sizeof(*VAR_14));
    VAR_9 = FUNC_4((void *)&VAR_14->buf, VAR_0, FUNC_0(VAR_11));
    if (FUNC_8(VAR_9)) {
        FUNC_2("posix_memalign:%s", FUNC_7(VAR_9));


    }
    for (VAR_10 = 0 ; VAR_10 < VAR_5; ++VAR_10) {
        FUNC_5(VAR_7, VAR_4[VAR_10]);
        VAR_8 = VAR_4[VAR_10]->pg_cache_descr;
        VAR_8->flags |= VAR_1;

        FUNC_6(VAR_7, VAR_4[VAR_10]);

        VAR_14->descr_array[VAR_10] = VAR_4[VAR_10];
    }
    VAR_14->descr_count = VAR_5;
    VAR_14->bytes = VAR_11;
    VAR_14->pos = VAR_12;
    VAR_14->req.data = VAR_14;
    VAR_14->completion = ((void*)0);

    VAR_14->release_descr = VAR_6;

    VAR_13 = FUNC_0(VAR_11);
    VAR_14->iov = FUNC_9((void *)VAR_14->buf, VAR_13);
    VAR_9 = FUNC_10(VAR_3->loop, &VAR_14->req, VAR_15->file, &VAR_14->iov, 1, VAR_12, VAR_2);
    FUNC_1 (-1 != VAR_9);
    VAR_7->stats.io_read_bytes += VAR_13;
    ++VAR_7->stats.io_read_requests;
    VAR_7->stats.io_read_extent_bytes += VAR_13;
    ++VAR_7->stats.io_read_extents;
    VAR_7->stats.pg_cache_backfills += VAR_5;
}
