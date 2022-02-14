
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream {scalar_t__ total_stream_seeks; scalar_t__ total_unbuffered_read_bytes; } ;
struct demuxer {struct stream* stream; } ;
struct demux_internal {int byte_level_seeks; int hack_unbuffered_read_bytes; int cache_unbuffered_read_bytes; scalar_t__ slave_unbuffered_read_bytes; struct demuxer* d_thread; } ;
typedef scalar_t__ int64_t ;



__attribute__((used)) static void FUNC_0(struct demux_internal *VAR_0)
{
    struct demuxer *VAR_1 = VAR_0->d_thread;

    int64_t VAR_2 = VAR_0->slave_unbuffered_read_bytes;
    VAR_0->slave_unbuffered_read_bytes = 0;

    int64_t VAR_3 = 0;

    struct stream *VAR_4 = VAR_1->stream;
    if (VAR_4) {
        VAR_2 += VAR_4->total_unbuffered_read_bytes;
        VAR_4->total_unbuffered_read_bytes = 0;
        VAR_3 += VAR_4->total_stream_seeks;
        VAR_4->total_stream_seeks = 0;
    }

    VAR_0->cache_unbuffered_read_bytes += VAR_2;
    VAR_0->hack_unbuffered_read_bytes += VAR_2;
    VAR_0->byte_level_seeks += VAR_3;
}
