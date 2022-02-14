
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hwdec_notified; } ;
typedef TYPE_1__ vd_ffmpeg_ctx ;
struct mp_filter {int log; TYPE_1__* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mp_filter*) ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (struct mp_filter*) ;

__attribute__((used)) static void FUNC_3(struct mp_filter *VAR_2)
{
    vd_ffmpeg_ctx *VAR_3 = VAR_2->priv;

    FUNC_2(VAR_2);
    int VAR_4 = VAR_3->hwdec_notified ? VAR_1 : VAR_0;
    FUNC_1(VAR_2->log, VAR_4, "Falling back to software decoding.\n");
    FUNC_0(VAR_2);
}
