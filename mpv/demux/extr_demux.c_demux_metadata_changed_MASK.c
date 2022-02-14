
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct demux_internal {int lock; TYPE_1__* d_thread; } ;
struct TYPE_3__ {int metadata; struct demux_internal* in; } ;
typedef TYPE_1__ demuxer_t ;


 int VAR_0 ;
 int FUNC_0 (struct demux_internal*,int ,int *,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(demuxer_t *VAR_1)
{
    FUNC_1(VAR_1 == VAR_1->in->d_thread);
    struct demux_internal *VAR_2 = VAR_1->in;

    FUNC_2(&VAR_2->lock);
    FUNC_0(VAR_2, VAR_1->metadata, ((void*)0), VAR_0);
    FUNC_3(&VAR_2->lock);
}
