
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sh_stream {TYPE_1__* codec; int ds; } ;
struct replaygain_data {float track_gain; float track_peak; float album_gain; float album_peak; } ;
typedef int demuxer_t ;
struct TYPE_9__ {scalar_t__ type; scalar_t__ data; } ;
struct TYPE_8__ {float track_gain; double track_peak; float album_gain; double album_peak; } ;
struct TYPE_7__ {int nb_side_data; TYPE_4__* side_data; } ;
struct TYPE_6__ {struct replaygain_data* replaygain_data; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVReplayGain ;
typedef TYPE_4__ AVPacketSideData ;


 scalar_t__ VAR_0 ;
 float VAR_1 ;
 int FUNC_0 (int) ;
 struct replaygain_data* FUNC_1 (int *,struct replaygain_data*) ;

__attribute__((used)) static void FUNC_2(demuxer_t *VAR_2, struct sh_stream *VAR_3,
                              AVStream *VAR_4)
{
    for (int VAR_5 = 0; VAR_5 < VAR_4->nb_side_data; VAR_5++) {
        AVReplayGain *VAR_6;
        struct replaygain_data *VAR_7;
        AVPacketSideData *VAR_8 = &VAR_4->side_data[VAR_5];

        if (VAR_8->type != VAR_0)
            continue;

        VAR_6 = (AVReplayGain*)VAR_8->data;
        VAR_7 = FUNC_1(VAR_2, VAR_7);





        if (VAR_6->track_gain != VAR_1 && VAR_6->track_peak != 0.0) {

            VAR_7->track_gain = VAR_6->track_gain / 100000.0f;
            VAR_7->track_peak = VAR_6->track_peak / 100000.0f;

            if (VAR_6->album_gain != VAR_1 &&
                VAR_6->album_peak != 0.0)
            {

                VAR_7->album_gain = VAR_6->album_gain / 100000.0f;
                VAR_7->album_peak = VAR_6->album_peak / 100000.0f;
            } else {

                VAR_7->album_gain = VAR_7->track_gain;
                VAR_7->album_peak = VAR_7->track_peak;
            }
        }



        FUNC_0(!VAR_3->ds);
        VAR_3->codec->replaygain_data = VAR_7;
    }
}
