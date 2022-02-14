
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {scalar_t__ next_pts; int codec_timebase; int * avctx; } ;
struct mp_filter {struct priv* priv; } ;
struct demux_packet {scalar_t__ pts; } ;
typedef int AVPacket ;
typedef int AVCodecContext ;


 int FUNC_0 (struct mp_filter*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,struct demux_packet*,int *) ;

__attribute__((used)) static int FUNC_3(struct mp_filter *VAR_1, struct demux_packet *VAR_2)
{
    struct priv *VAR_3 = VAR_1->priv;
    AVCodecContext *VAR_4 = VAR_3->avctx;




    if (VAR_2 && VAR_3->next_pts == VAR_0)
        VAR_3->next_pts = VAR_2->pts;

    AVPacket VAR_5;
    FUNC_2(&VAR_5, VAR_2, &VAR_3->codec_timebase);

    int VAR_6 = FUNC_1(VAR_4, VAR_2 ? &VAR_5 : ((void*)0));
    if (VAR_6 < 0)
        FUNC_0(VAR_1, "Error decoding audio.\n");
    return VAR_6;
}
