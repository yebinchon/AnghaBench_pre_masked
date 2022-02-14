
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct replaygain_data {int track_peak; int album_peak; int track_gain; int album_gain; int member_0; } ;
struct mp_tags {int dummy; } ;
struct mp_log {int dummy; } ;


 scalar_t__ FUNC_0 (struct mp_log*,struct mp_tags*,char*,int *) ;
 scalar_t__ FUNC_1 (struct mp_log*,struct mp_tags*,char*,int *) ;
 struct replaygain_data* FUNC_2 (int *,struct replaygain_data*) ;

__attribute__((used)) static struct replaygain_data *FUNC_3(struct mp_log *VAR_0,
                                            struct mp_tags *VAR_1)
{
    struct replaygain_data VAR_2 = {0};





    if (FUNC_0(VAR_0, VAR_1, "REPLAYGAIN_TRACK_GAIN", &VAR_2.track_gain) >= 0 &&
        FUNC_1(VAR_0, VAR_1, "REPLAYGAIN_TRACK_PEAK", &VAR_2.track_peak) >= 0)
    {
        if (FUNC_0(VAR_0, VAR_1, "REPLAYGAIN_ALBUM_GAIN", &VAR_2.album_gain) < 0 ||
            FUNC_1(VAR_0, VAR_1, "REPLAYGAIN_ALBUM_PEAK", &VAR_2.album_peak) < 0)
        {

            VAR_2.album_gain = VAR_2.track_gain;
            VAR_2.album_peak = VAR_2.track_peak;
        }
        return FUNC_2(((void*)0), &VAR_2);
    }

    if (FUNC_0(VAR_0, VAR_1, "REPLAYGAIN_GAIN", &VAR_2.track_gain) >= 0 &&
        FUNC_1(VAR_0, VAR_1, "REPLAYGAIN_PEAK", &VAR_2.track_peak) >= 0)
    {
        VAR_2.album_gain = VAR_2.track_gain;
        VAR_2.album_peak = VAR_2.track_peak;
        return FUNC_2(((void*)0), &VAR_2);
    }

    return ((void*)0);
}
