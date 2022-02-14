
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ fps; } ;
struct priv {scalar_t__ codec_pts; scalar_t__ num_codec_pts_problems; scalar_t__ codec_dts; scalar_t__ num_codec_dts_problems; int has_broken_packet_pts; TYPE_3__ public; TYPE_2__* decoder; TYPE_1__* codec; } ;
struct mp_image {scalar_t__ pts; scalar_t__ dts; } ;
struct TYPE_5__ {int f; int (* control ) (int ,int ,int*) ;} ;
struct TYPE_4__ {scalar_t__ avi_dts; } ;


 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static void FUNC_2(struct priv *VAR_2, struct mp_image *VAR_3)
{


    if (VAR_3->pts != VAR_0) {
        if (VAR_3->pts < VAR_2->codec_pts)
            VAR_2->num_codec_pts_problems++;
        VAR_2->codec_pts = VAR_3->pts;
    }

    if (VAR_3->dts != VAR_0) {
        if (VAR_3->dts <= VAR_2->codec_dts)
            VAR_2->num_codec_dts_problems++;
        VAR_2->codec_dts = VAR_3->dts;
    }

    if (VAR_2->has_broken_packet_pts < 0)
        VAR_2->has_broken_packet_pts++;
    if (VAR_2->num_codec_pts_problems)
        VAR_2->has_broken_packet_pts = 1;


    if ((VAR_2->num_codec_pts_problems > VAR_2->num_codec_dts_problems ||
        VAR_3->pts == VAR_0) && VAR_3->dts != VAR_0)
        VAR_3->pts = VAR_3->dts;


    if (VAR_2->decoder && VAR_2->decoder->control && VAR_2->codec->avi_dts &&
        VAR_3->pts != VAR_0 && VAR_2->public.fps > 0)
    {
        int VAR_4 = -1;
        VAR_2->decoder->control(VAR_2->decoder->f, VAR_1, &VAR_4);
        VAR_3->pts -= FUNC_0(VAR_4, 0) / VAR_2->public.fps;
    }
}
