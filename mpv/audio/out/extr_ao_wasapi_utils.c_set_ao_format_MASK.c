
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct ao_convert_fmt {scalar_t__ pad_lsb; scalar_t__ dst_bits; int channels; scalar_t__ src_fmt; } ;
struct wasapi_state {scalar_t__ share_mode; int format; struct ao_convert_fmt convert_format; } ;
struct wasapi_sample_fmt {scalar_t__ mp_format; scalar_t__ used_msb; scalar_t__ bits; } ;
struct mp_chmap {int num; } ;
struct ao {int samplerate; scalar_t__ format; struct mp_chmap channels; struct wasapi_state* priv; } ;
struct TYPE_7__ {int nSamplesPerSec; } ;
typedef TYPE_1__ WAVEFORMATEX ;
typedef scalar_t__ AUDCLNT_SHAREMODE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ao*,char*,int ) ;
 int FUNC_1 (struct ao*,char*,int ,int ,int ,int ,char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct ao_convert_fmt*) ;
 int FUNC_5 (struct mp_chmap*,TYPE_1__*) ;
 struct wasapi_sample_fmt FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct mp_chmap*) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_10(struct ao *VAR_1, WAVEFORMATEX *VAR_2,
                          AUDCLNT_SHAREMODE VAR_3)
{
    struct wasapi_state *VAR_4 = VAR_1->priv;
    struct wasapi_sample_fmt VAR_5 = FUNC_6(VAR_2);
    if (!VAR_5.mp_format) {
        FUNC_0(VAR_1, "Unable to construct sample format from WAVEFORMAT %s\n",
               FUNC_9(VAR_2));
        return 0;
    }



    if (FUNC_2(VAR_5.mp_format)) {
        struct mp_chmap VAR_6;
        if (!FUNC_5(&VAR_6, VAR_2)) {
            FUNC_0(VAR_1, "Unable to construct channel map from WAVEFORMAT %s\n",
                   FUNC_9(VAR_2));
            return 0;
        }

        struct ao_convert_fmt VAR_7 = {
            .src_fmt = VAR_5.mp_format,
            .channels = VAR_6.num,
            .dst_bits = VAR_5.bits,
            .pad_lsb = VAR_5.bits - VAR_5.used_msb,
        };
        if (!FUNC_4(&VAR_7)) {
            FUNC_0(VAR_1, "Unable to convert to %s\n", FUNC_9(VAR_2));
            return 0;
        }

        VAR_4->convert_format = VAR_7;
        VAR_1->samplerate = VAR_2->nSamplesPerSec;
        VAR_1->format = VAR_5.mp_format;
        VAR_1->channels = VAR_6;
    }
    FUNC_8(&VAR_4->format, VAR_2);
    VAR_4->share_mode = VAR_3;

    FUNC_1(VAR_1, "Accepted as %s %s @ %dhz -> %s (%s)\n",
               FUNC_7(&VAR_1->channels),
               FUNC_3(VAR_1->format), VAR_1->samplerate,
               FUNC_9(VAR_2),
               VAR_4->share_mode == VAR_0
               ? "exclusive" : "shared");
    return 1;
}
