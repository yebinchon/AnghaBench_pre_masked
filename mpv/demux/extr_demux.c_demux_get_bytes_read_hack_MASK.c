
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demuxer {struct demux_internal* in; } ;
struct demux_internal {scalar_t__ hack_unbuffered_read_bytes; int threading; } ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct demux_internal*) ;

int64_t FUNC_2(struct demuxer *VAR_0)
{
    struct demux_internal *VAR_1 = VAR_0->in;



    FUNC_0(!VAR_1->threading);

    FUNC_1(VAR_1);

    int64_t VAR_2 = VAR_1->hack_unbuffered_read_bytes;
    VAR_1->hack_unbuffered_read_bytes = 0;
    return VAR_2;
}
