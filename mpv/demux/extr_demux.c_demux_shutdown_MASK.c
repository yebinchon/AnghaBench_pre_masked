
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct demuxer {int * stream; int * priv; TYPE_1__* desc; } ;
struct demux_internal {scalar_t__ total_bytes; scalar_t__ owns_stream; int * cache; int * current_range; TYPE_2__* d_thread; int * recorder; struct demuxer* d_user; } ;
struct TYPE_4__ {int * priv; } ;
struct TYPE_3__ {int (* close ) (TYPE_2__*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct demuxer*) ;
 int FUNC_2 (struct demux_internal*) ;
 int FUNC_3 (struct demux_internal*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct demux_internal *VAR_0)
{
    struct demuxer *VAR_1 = VAR_0->d_user;

    if (VAR_0->recorder) {
        FUNC_5(VAR_0->recorder);
        VAR_0->recorder = ((void*)0);
    }

    FUNC_2(VAR_0);

    if (VAR_1->desc->close)
        VAR_1->desc->close(VAR_0->d_thread);
    VAR_1->priv = ((void*)0);
    VAR_0->d_thread->priv = ((void*)0);

    FUNC_1(VAR_1);
    FUNC_0(VAR_0->total_bytes == 0);

    VAR_0->current_range = ((void*)0);
    FUNC_3(VAR_0);

    FUNC_7(VAR_0->cache);
    VAR_0->cache = ((void*)0);

    if (VAR_0->owns_stream)
        FUNC_4(VAR_1->stream);
    VAR_1->stream = ((void*)0);
}
