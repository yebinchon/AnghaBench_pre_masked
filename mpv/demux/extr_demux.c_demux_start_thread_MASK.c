
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demuxer {struct demux_internal* in; } ;
struct demux_internal {int threading; int thread; struct demuxer* d_user; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *,int ,struct demux_internal*) ;

void FUNC_2(struct demuxer *VAR_1)
{
    struct demux_internal *VAR_2 = VAR_1->in;
    FUNC_0(VAR_1 == VAR_2->d_user);

    if (!VAR_2->threading) {
        VAR_2->threading = 1;
        if (FUNC_1(&VAR_2->thread, ((void*)0), VAR_0, VAR_2))
            VAR_2->threading = 0;
    }
}
