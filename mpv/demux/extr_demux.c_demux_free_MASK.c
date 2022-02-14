
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demuxer {struct demux_internal* in; } ;
struct demux_internal {struct demuxer* d_user; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct demux_internal*) ;
 int FUNC_2 (struct demux_internal*) ;
 int FUNC_3 (struct demuxer*) ;

void FUNC_4(struct demuxer *VAR_0)
{
    if (!VAR_0)
        return;
    struct demux_internal *VAR_1 = VAR_0->in;
    FUNC_0(VAR_0 == VAR_1->d_user);

    FUNC_3(VAR_0);
    FUNC_2(VAR_1);
    FUNC_1(VAR_1);
}
