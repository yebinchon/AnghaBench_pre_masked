
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct demux_internal {int lock; int wakeup; int ts_offset; TYPE_1__* d_user; } ;
struct TYPE_3__ {struct demux_internal* in; } ;
typedef TYPE_1__ demuxer_t ;


 double FUNC_0 (double,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct demux_internal*,double,int,int) ;

int FUNC_6(demuxer_t *VAR_1, double VAR_2, int VAR_3)
{
    struct demux_internal *VAR_4 = VAR_1->in;
    FUNC_1(VAR_1 == VAR_4->d_user);

    FUNC_3(&VAR_4->lock);

    if (!(VAR_3 & VAR_0))
        VAR_2 = FUNC_0(VAR_2, -VAR_4->ts_offset);

    int VAR_5 = FUNC_5(VAR_4, VAR_2, VAR_3, 1);

    FUNC_2(&VAR_4->wakeup);
    FUNC_4(&VAR_4->lock);

    return VAR_5;
}
