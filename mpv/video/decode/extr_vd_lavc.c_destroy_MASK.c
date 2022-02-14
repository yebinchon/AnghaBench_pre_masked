
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dr_lock; } ;
typedef TYPE_1__ vd_ffmpeg_ctx ;
struct mp_filter {TYPE_1__* priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mp_filter*) ;

__attribute__((used)) static void FUNC_2(struct mp_filter *VAR_0)
{
    vd_ffmpeg_ctx *VAR_1 = VAR_0->priv;

    FUNC_1(VAR_0);

    FUNC_0(&VAR_1->dr_lock);
}
