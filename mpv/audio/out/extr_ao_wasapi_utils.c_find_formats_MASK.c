
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct wasapi_state {scalar_t__ opt_exclusive; } ;
struct wasapi_sample_fmt {int member_1; int member_2; scalar_t__ mp_format; int * member_3; int member_0; } ;
struct mp_chmap {int num; } ;
struct ao {int format; int samplerate; struct mp_chmap channels; struct wasapi_state* priv; } ;
struct TYPE_5__ {int Format; } ;
typedef TYPE_1__ WAVEFORMATEXTENSIBLE ;
typedef int AUDCLNT_SHAREMODE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct ao*,TYPE_1__*) ;
 int FUNC_3 (struct ao*,TYPE_1__*) ;
 int FUNC_4 (struct mp_chmap*,int) ;
 scalar_t__ FUNC_5 (struct mp_chmap*) ;
 int FUNC_6 (struct mp_chmap*) ;
 int FUNC_7 (struct mp_chmap*) ;
 int FUNC_8 (struct ao*,int *,int ) ;
 int FUNC_9 (TYPE_1__*,struct wasapi_sample_fmt*,int ,struct mp_chmap*) ;
 int VAR_4 ;
 int FUNC_10 (int ,struct wasapi_sample_fmt*) ;

__attribute__((used)) static bool FUNC_11(struct ao *VAR_5)
{
    struct wasapi_state *VAR_6 = VAR_5->priv;
    struct mp_chmap VAR_7 = VAR_5->channels;

    if (FUNC_5(&VAR_7))
        FUNC_4(&VAR_7, VAR_7.num);
    FUNC_7(&VAR_7);
    if (!FUNC_6(&VAR_7))
        FUNC_4(&VAR_7, 2);

    struct wasapi_sample_fmt VAR_8[FUNC_0(VAR_4)];
    FUNC_10(VAR_5->format, VAR_8);
    struct wasapi_sample_fmt VAR_9 =
        {VAR_0, 16, 16, &VAR_3};;
    if (VAR_8[0].mp_format)
        VAR_9 = VAR_8[0];

    AUDCLNT_SHAREMODE VAR_10;
    WAVEFORMATEXTENSIBLE VAR_11;
    FUNC_9(&VAR_11, &VAR_9, VAR_5->samplerate, &VAR_7);

    if (VAR_6->opt_exclusive || FUNC_1(VAR_5->format)) {
        VAR_10 = VAR_1;
        if(!FUNC_2(VAR_5, &VAR_11))
            return 0;
    } else {
        VAR_10 = VAR_2;
        if(!FUNC_3(VAR_5, &VAR_11))
            return 0;
    }

    return FUNC_8(VAR_5, &VAR_11.Format, VAR_10);
}
