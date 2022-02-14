
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct track {TYPE_2__* stream; } ;
struct replaygain_data {float track_gain; float track_peak; float album_gain; float album_peak; } ;
struct MPOpts {int rgain_mode; float rgain_fallback; int rgain_clip; scalar_t__ rgain_preamp; } ;
struct MPContext {struct track*** current_track; struct MPOpts* opts; } ;
struct TYPE_4__ {TYPE_1__* codec; } ;
struct TYPE_3__ {struct replaygain_data* replaygain_data; } ;


 float FUNC_0 (float,double) ;
 int FUNC_1 (struct MPContext*,char*,float,...) ;
 size_t VAR_0 ;
 float FUNC_2 (float) ;

__attribute__((used)) static float FUNC_3(struct MPContext *VAR_1)
{
    struct MPOpts *VAR_2 = VAR_1->opts;

    float VAR_3 = 1.0;

    struct replaygain_data *VAR_4 = ((void*)0);
    struct track *VAR_5 = VAR_1->current_track[0][VAR_0];
    if (VAR_5)
        VAR_4 = VAR_5->stream->codec->replaygain_data;
    if (VAR_2->rgain_mode && VAR_4) {
        FUNC_1(VAR_1, "Replaygain: Track=%f/%f Album=%f/%f\n",
                   VAR_4->track_gain, VAR_4->track_peak,
                   VAR_4->album_gain, VAR_4->album_peak);

        float VAR_6, VAR_7;
        if (VAR_2->rgain_mode == 1) {
            VAR_6 = VAR_4->track_gain;
            VAR_7 = VAR_4->track_peak;
        } else {
            VAR_6 = VAR_4->album_gain;
            VAR_7 = VAR_4->album_peak;
        }

        VAR_6 += VAR_2->rgain_preamp;
        VAR_3 = FUNC_2(VAR_6);

        FUNC_1(VAR_1, "Applying replay-gain: %f\n", VAR_3);

        if (!VAR_2->rgain_clip) {
            VAR_3 = FUNC_0(VAR_3, 1.0 / VAR_7);
            FUNC_1(VAR_1, "...with clipping prevention: %f\n", VAR_3);
        }
    } else if (VAR_2->rgain_fallback) {
        VAR_3 = FUNC_2(VAR_2->rgain_fallback);
        FUNC_1(VAR_1, "Applying fallback gain: %f\n", VAR_3);
    }

    return VAR_3;
}
