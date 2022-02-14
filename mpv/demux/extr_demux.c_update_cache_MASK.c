
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct stream {int dummy; } ;
struct mp_tags {int dummy; } ;
struct demuxer {struct stream* stream; } ;
struct demux_internal {scalar_t__ last_speed_query; scalar_t__ cache_unbuffered_read_bytes; int bytes_per_second; int lock; scalar_t__ next_cache_update; scalar_t__ stream_size; struct demuxer* d_thread; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct demux_internal*,struct mp_tags*,int *,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct stream*,int ,struct mp_tags**) ;
 scalar_t__ FUNC_5 (struct stream*) ;
 int FUNC_6 (struct mp_tags*) ;
 int FUNC_7 (struct demux_internal*) ;

__attribute__((used)) static void FUNC_8(struct demux_internal *VAR_4)
{
    struct demuxer *VAR_5 = VAR_4->d_thread;
    struct stream *VAR_6 = VAR_5->stream;


    struct mp_tags *VAR_7 = ((void*)0);

    int64_t VAR_8 = -1;
    if (VAR_6) {
        VAR_8 = FUNC_5(VAR_6);
        FUNC_4(VAR_6, VAR_3, &VAR_7);
    }

    FUNC_7(VAR_4);

    FUNC_2(&VAR_4->lock);

    VAR_4->stream_size = VAR_8;
    if (VAR_7) {
        FUNC_0(VAR_4, VAR_7, ((void*)0), VAR_1);
        FUNC_6(VAR_7);
    }

    VAR_4->next_cache_update = VAR_0;

    int64_t VAR_9 = FUNC_1();
    int64_t VAR_10 = VAR_9 - VAR_4->last_speed_query;
    if (VAR_10 >= VAR_2) {
        uint64_t VAR_11 = VAR_4->cache_unbuffered_read_bytes;
        VAR_4->cache_unbuffered_read_bytes = 0;
        VAR_4->last_speed_query = VAR_9;
        VAR_4->bytes_per_second = VAR_11 / (VAR_10 / (double)VAR_2);
    }

    if (VAR_4->bytes_per_second)
        VAR_4->next_cache_update = VAR_9 + VAR_2 + 1;

    FUNC_3(&VAR_4->lock);
}
