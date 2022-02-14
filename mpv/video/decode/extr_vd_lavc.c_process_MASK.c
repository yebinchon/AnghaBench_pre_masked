
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
typedef TYPE_1__ vd_ffmpeg_ctx ;
struct mp_filter {TYPE_1__* priv; } ;


 int FUNC_0 (struct mp_filter*,int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct mp_filter *VAR_2)
{
    vd_ffmpeg_ctx *VAR_3 = VAR_2->priv;

    FUNC_0(VAR_2, &VAR_3->state, VAR_1, VAR_0);
}
