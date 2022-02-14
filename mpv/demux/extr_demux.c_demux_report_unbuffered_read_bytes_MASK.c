
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demuxer {struct demux_internal* in; } ;
struct demux_internal {int slave_unbuffered_read_bytes; struct demuxer* d_thread; } ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (int) ;

void FUNC_1(struct demuxer *VAR_0, int64_t VAR_1)
{
    struct demux_internal *VAR_2 = VAR_0->in;
    FUNC_0(VAR_0 == VAR_2->d_thread);

    VAR_2->slave_unbuffered_read_bytes += VAR_1;
}
