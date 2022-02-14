
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct priv {int packet_fed; int preroll_discard; TYPE_1__* decoder; void* end; void* start; int * new_segment; int packet; scalar_t__ packets_without_output; scalar_t__ has_broken_decoded_pts; scalar_t__ num_codec_dts_problems; scalar_t__ num_codec_pts_problems; void* codec_dts; void* codec_pts; void* start_pts; void* first_packet_pdts; } ;
struct TYPE_2__ {int f; } ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct priv *VAR_1)
{
    VAR_1->first_packet_pdts = VAR_0;
    VAR_1->start_pts = VAR_0;
    VAR_1->codec_pts = VAR_0;
    VAR_1->codec_dts = VAR_0;
    VAR_1->num_codec_pts_problems = 0;
    VAR_1->num_codec_dts_problems = 0;
    VAR_1->has_broken_decoded_pts = 0;
    VAR_1->packets_without_output = 0;
    FUNC_1(&VAR_1->packet);
    VAR_1->packet_fed = 0;
    VAR_1->preroll_discard = 0;
    FUNC_2(VAR_1->new_segment);
    VAR_1->new_segment = ((void*)0);
    VAR_1->start = VAR_1->end = VAR_0;

    if (VAR_1->decoder)
        FUNC_0(VAR_1->decoder->f);
}
