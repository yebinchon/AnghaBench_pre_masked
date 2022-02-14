
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct demux_internal {int num_ranges; int lock; int * ranges; TYPE_1__* d_user; } ;
struct TYPE_3__ {struct demux_internal* in; } ;
typedef TYPE_1__ demuxer_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct demux_internal*,int ) ;
 int FUNC_2 (struct demux_internal*,int) ;
 int FUNC_3 (struct demux_internal*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(demuxer_t *VAR_0)
{
    struct demux_internal *VAR_1 = VAR_0->in;
    FUNC_0(VAR_0 == VAR_1->d_user);

    FUNC_4(&VAR_0->in->lock);
    FUNC_2(VAR_1, 1);
    for (int VAR_2 = 0; VAR_2 < VAR_1->num_ranges; VAR_2++)
        FUNC_1(VAR_1, VAR_1->ranges[VAR_2]);
    FUNC_3(VAR_1);
    FUNC_5(&VAR_0->in->lock);
}
