
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct priv {int buflen; int paused; } ;
struct mp_chmap_sel {int member_0; } ;
struct TYPE_7__ {scalar_t__ num; } ;
struct ao {scalar_t__ format; int samplerate; int device_buffer; TYPE_2__ channels; int probing; struct priv* priv; } ;
struct TYPE_6__ {scalar_t__ format; int freq; int samples; scalar_t__ channels; struct ao* userdata; int callback; int member_0; } ;
typedef TYPE_1__ SDL_AudioSpec ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct ao*,char*,...) ;
 int FUNC_2 (struct ao*,char*,int,int,int,int) ;
 int FUNC_3 () ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct ao*,struct mp_chmap_sel*,TYPE_2__*) ;
 int FUNC_9 (struct ao*,struct mp_chmap_sel*,TYPE_2__*,scalar_t__) ;
 int VAR_2 ;
 int FUNC_10 (int) ;
 scalar_t__** VAR_3 ;
 int FUNC_11 (struct mp_chmap_sel*) ;
 int FUNC_12 (struct ao*) ;

__attribute__((used)) static int FUNC_13(struct ao *VAR_4)
{
    if (FUNC_6(VAR_1)) {
        FUNC_1(VAR_4, "already initialized\n");
        return -1;
    }

    struct priv *VAR_5 = VAR_4->priv;

    if (FUNC_4(VAR_1)) {
        if (!VAR_4->probing)
            FUNC_1(VAR_4, "SDL_Init failed\n");
        FUNC_12(VAR_4);
        return -1;
    }

    struct mp_chmap_sel VAR_6 = {0};
    FUNC_11(&VAR_6);
    if (!FUNC_8(VAR_4, &VAR_6, &VAR_4->channels)) {
        FUNC_12(VAR_4);
        return -1;
    }

    VAR_4->format = FUNC_7(VAR_4->format);

    SDL_AudioSpec VAR_7 = {0};
    VAR_7.format = VAR_0;
    for (int VAR_8 = 0; VAR_3[VAR_8][0]; VAR_8++) {
        if (VAR_4->format == VAR_3[VAR_8][0]) {
            VAR_7.format = VAR_3[VAR_8][1];
            break;
        }
    }
    VAR_7.freq = VAR_4->samplerate;
    VAR_7.channels = VAR_4->channels.num;
    if (VAR_5->buflen) {
        VAR_7.samples = FUNC_0(32768, FUNC_10(VAR_4->samplerate *
                                                         VAR_5->buflen));
    }
    VAR_7.callback = VAR_2;
    VAR_7.userdata = VAR_4;

    FUNC_2(VAR_4, "requested format: %d Hz, %d channels, %x, "
               "buffer size: %d samples\n",
               (int) VAR_7.freq, (int) VAR_7.channels,
               (int) VAR_7.format, (int) VAR_7.samples);

    SDL_AudioSpec VAR_9 = VAR_7;
    if (FUNC_5(&VAR_7, &VAR_9)) {
        if (!VAR_4->probing)
            FUNC_1(VAR_4, "could not open audio: %s\n", FUNC_3());
        FUNC_12(VAR_4);
        return -1;
    }

    FUNC_2(VAR_4, "obtained format: %d Hz, %d channels, %x, "
               "buffer size: %d samples\n",
               (int) VAR_9.freq, (int) VAR_9.channels,
               (int) VAR_9.format, (int) VAR_9.samples);





    VAR_4->device_buffer = 3 * VAR_9.samples;

    VAR_4->format = 0;
    for (int VAR_10 = 0; VAR_3[VAR_10][0]; VAR_10++) {
        if (VAR_9.format == VAR_3[VAR_10][1]) {
            VAR_4->format = VAR_3[VAR_10][0];
            break;
        }
    }
    if (!VAR_4->format) {
        if (!VAR_4->probing)
            FUNC_1(VAR_4, "could not find matching format\n");
        FUNC_12(VAR_4);
        return -1;
    }

    if (!FUNC_9(VAR_4, &VAR_6, &VAR_4->channels, VAR_9.channels)) {
        FUNC_12(VAR_4);
        return -1;
    }

    VAR_4->samplerate = VAR_9.freq;

    VAR_5->paused = 1;

    return 1;
}
