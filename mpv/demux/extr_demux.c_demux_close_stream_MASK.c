
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct demuxer {TYPE_2__* stream; int cancel; int global; struct demux_internal* in; } ;
struct demux_internal {TYPE_1__* d_user; int owns_stream; struct demuxer* d_thread; int threading; } ;
struct TYPE_5__ {int cancel; } ;
struct TYPE_4__ {TYPE_2__* stream; } ;


 int FUNC_0 (struct demuxer*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int ,int *,int ) ;

void FUNC_4(struct demuxer *VAR_0)
{
    struct demux_internal *VAR_1 = VAR_0->in;
    FUNC_1(!VAR_1->threading && VAR_0 == VAR_1->d_thread);

    if (!VAR_0->stream || !VAR_1->owns_stream)
        return;

    FUNC_0(VAR_0, "demuxer read all data; closing stream\n");
    FUNC_2(VAR_0->stream);
    VAR_0->stream = FUNC_3(VAR_0->global, ((void*)0), 0);
    VAR_0->stream->cancel = VAR_0->cancel;
    VAR_1->d_user->stream = VAR_0->stream;
}
