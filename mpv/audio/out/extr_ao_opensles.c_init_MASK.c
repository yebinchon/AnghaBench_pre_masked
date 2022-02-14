
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_8__ ;
typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_25__ ;
typedef struct TYPE_30__ TYPE_22__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_18__ ;
typedef struct TYPE_27__ TYPE_15__ ;
typedef struct TYPE_26__ TYPE_11__ ;


struct priv {int buffer_size_in_ms; int frames_per_enqueue; int bytes_per_enqueue; double audio_latency; TYPE_8__** player; TYPE_22__** play; TYPE_7__** buffer_queue; TYPE_11__** engine; TYPE_15__** output_mix; int buffer_lock; int buf; TYPE_18__** sl; } ;
struct TYPE_31__ {int num; } ;
struct ao {int samplerate; int device_buffer; int def_buffer; int format; TYPE_25__ channels; struct priv* priv; } ;
struct TYPE_38__ {scalar_t__ (* Realize ) (TYPE_8__**,int ) ;scalar_t__ (* GetInterface ) (TYPE_8__**,int ,void*) ;} ;
struct TYPE_37__ {scalar_t__ (* RegisterCallback ) (TYPE_7__**,int ,struct ao*) ;} ;
struct TYPE_36__ {scalar_t__ (* GetConfiguration ) (TYPE_6__**,int const*,int*,int*) ;} ;
struct TYPE_35__ {int numChannels; int containerSize; int bitsPerSample; int channelMask; int sampleRate; int endianness; int representation; int formatType; } ;
struct TYPE_34__ {int numBuffers; int locatorType; } ;
struct TYPE_33__ {TYPE_15__** outputMix; int locatorType; } ;
struct TYPE_32__ {int * pFormat; void* pLocator; } ;
struct TYPE_30__ {scalar_t__ (* SetPlayState ) (TYPE_22__**,int ) ;} ;
struct TYPE_29__ {void* pLocator; void* pFormat; } ;
struct TYPE_28__ {scalar_t__ (* Realize ) (TYPE_18__**,int ) ;scalar_t__ (* GetInterface ) (TYPE_18__**,int ,void*) ;} ;
struct TYPE_27__ {scalar_t__ (* Realize ) (TYPE_15__**,int ) ;} ;
struct TYPE_26__ {scalar_t__ (* CreateOutputMix ) (TYPE_11__**,TYPE_15__***,int ,int *,int *) ;scalar_t__ (* CreateAudioPlayer ) (TYPE_11__**,TYPE_8__***,TYPE_1__*,TYPE_2__*,int,int *,int *) ;} ;
typedef int SLuint32 ;
typedef scalar_t__ SLint32 ;
typedef int SLchar ;
typedef int SLboolean ;
typedef int SLInterfaceID ;
typedef TYPE_1__ SLDataSource ;
typedef TYPE_2__ SLDataSink ;
typedef TYPE_3__ SLDataLocator_OutputMix ;
typedef TYPE_4__ SLDataLocator_BufferQueue ;
typedef TYPE_5__ SLAndroidDataFormat_PCM_EX ;
typedef TYPE_6__** SLAndroidConfigurationItf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct ao*,char*,...) ;
 int FUNC_3 (struct ao*,char*,double) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_18 ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (TYPE_25__*,int) ;
 int FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (TYPE_18__***,int ,int *,int ,int *,int *) ;
 scalar_t__ FUNC_11 (TYPE_18__**,int ) ;
 scalar_t__ FUNC_12 (TYPE_22__**,int ) ;
 scalar_t__ FUNC_13 (TYPE_8__**,int ,TYPE_6__***) ;
 scalar_t__ FUNC_14 (TYPE_6__**,int const*,int*,int*) ;
 scalar_t__ FUNC_15 (TYPE_18__**,int ,void*) ;
 scalar_t__ FUNC_16 (TYPE_11__**,TYPE_15__***,int ,int *,int *) ;
 scalar_t__ FUNC_17 (TYPE_15__**,int ) ;
 scalar_t__ FUNC_18 (TYPE_11__**,TYPE_8__***,TYPE_1__*,TYPE_2__*,int,int *,int *) ;
 scalar_t__ FUNC_19 (TYPE_8__**,int ) ;
 scalar_t__ FUNC_20 (TYPE_8__**,int ,void*) ;
 scalar_t__ FUNC_21 (TYPE_8__**,int ,void*) ;
 scalar_t__ FUNC_22 (TYPE_7__**,int ,struct ao*) ;
 int FUNC_23 (struct ao*) ;

__attribute__((used)) static int FUNC_24(struct ao *VAR_19)
{
    struct priv *VAR_20 = VAR_19->priv;
    SLDataLocator_BufferQueue VAR_21;
    SLDataLocator_OutputMix VAR_22;
    SLAndroidDataFormat_PCM_EX VAR_23;
    SLDataSource VAR_24;
    SLDataSink VAR_25;


    FUNC_8(&VAR_19->channels, 2);

    FUNC_0(FUNC_10(&VAR_20->sl, 0, ((void*)0), 0, ((void*)0), ((void*)0)));
    FUNC_0((*VAR_20->sl)->Realize(VAR_20->sl, VAR_4));
    FUNC_0((*VAR_20->sl)->GetInterface(VAR_20->sl, VAR_12, (void*)&VAR_20->engine));
    FUNC_0((*VAR_20->engine)->CreateOutputMix(VAR_20->engine, &VAR_20->output_mix, 0, ((void*)0), ((void*)0)));
    FUNC_0((*VAR_20->output_mix)->Realize(VAR_20->output_mix, VAR_4));

    VAR_21.locatorType = VAR_8;
    VAR_21.numBuffers = 8;

    if (FUNC_5(VAR_19->format)) {

        if (FUNC_6(VAR_19->format) > 2)
            VAR_19->format = VAR_1;
        else
            VAR_19->format = FUNC_4(VAR_19->format);
        VAR_23.formatType = VAR_7;
    } else {
        VAR_19->format = VAR_0;
        VAR_23.formatType = VAR_2;
        VAR_23.representation = VAR_3;
    }
    VAR_23.numChannels = VAR_19->channels.num;
    VAR_23.containerSize = VAR_23.bitsPerSample = 8 * FUNC_6(VAR_19->format);
    VAR_23.channelMask = VAR_16 | VAR_17;
    VAR_23.endianness = VAR_6;
    VAR_23.sampleRate = VAR_19->samplerate * 1000;

    if (VAR_20->buffer_size_in_ms) {
        VAR_19->device_buffer = VAR_19->samplerate * VAR_20->buffer_size_in_ms / 1000;


        VAR_19->def_buffer = 0;
    }


    if (VAR_20->frames_per_enqueue) {
        VAR_19->device_buffer = FUNC_1(VAR_19->device_buffer, VAR_20->frames_per_enqueue);
    } else {
        if (VAR_19->device_buffer) {
            VAR_20->frames_per_enqueue = VAR_19->device_buffer;
        } else if (VAR_19->def_buffer) {
            VAR_20->frames_per_enqueue = VAR_19->def_buffer * VAR_19->samplerate;
        } else {
            FUNC_2(VAR_19, "Enqueue size is not set and can neither be derived\n");
            goto error;
        }
    }

    VAR_20->bytes_per_enqueue = VAR_20->frames_per_enqueue * VAR_19->channels.num *
        FUNC_6(VAR_19->format);
    VAR_20->buf = FUNC_7(1, VAR_20->bytes_per_enqueue);
    if (!VAR_20->buf) {
        FUNC_2(VAR_19, "Failed to allocate device buffer\n");
        goto error;
    }

    int VAR_26 = FUNC_9(&VAR_20->buffer_lock, ((void*)0));
    if (VAR_26) {
        FUNC_2(VAR_19, "Failed to initialize the mutex: %d\n", VAR_26);
        goto error;
    }

    VAR_24.pFormat = (void*)&VAR_23;
    VAR_24.pLocator = (void*)&VAR_21;

    VAR_22.locatorType = VAR_9;
    VAR_22.outputMix = VAR_20->output_mix;

    VAR_25.pLocator = (void*)&VAR_22;
    VAR_25.pFormat = ((void*)0);

    SLInterfaceID VAR_27[] = { VAR_11, VAR_10 };
    SLboolean VAR_28[] = { VAR_5, VAR_4 };
    FUNC_0((*VAR_20->engine)->CreateAudioPlayer(VAR_20->engine, &VAR_20->player, &VAR_24,
        &VAR_25, 2, VAR_27, VAR_28));

    FUNC_0((*VAR_20->player)->Realize(VAR_20->player, VAR_4));
    FUNC_0((*VAR_20->player)->GetInterface(VAR_20->player, VAR_13, (void*)&VAR_20->play));
    FUNC_0((*VAR_20->player)->GetInterface(VAR_20->player, VAR_11,
        (void*)&VAR_20->buffer_queue));
    FUNC_0((*VAR_20->buffer_queue)->RegisterCallback(VAR_20->buffer_queue,
        VAR_18, VAR_19));
    FUNC_0((*VAR_20->play)->SetPlayState(VAR_20->play, VAR_14));

    SLAndroidConfigurationItf VAR_29;
    SLuint32 VAR_30 = 0, VAR_31 = sizeof(SLuint32);

    SLint32 VAR_32 = (*VAR_20->player)->GetInterface(
        VAR_20->player,
        VAR_10,
        &VAR_29
    );

    if (VAR_32 == VAR_15) {
        SLint32 VAR_33 = (*VAR_29)->GetConfiguration(
            VAR_29,
            (const SLchar *)"androidGetAudioLatency",
            &VAR_31,
            &VAR_30
        );

        if (VAR_33 == VAR_15) {
            VAR_20->audio_latency = (double)VAR_30 / 1000.0;
            FUNC_3(VAR_19, "Device latency is %f\n", VAR_20->audio_latency);
        }
    }

    return 1;
error:
    FUNC_23(VAR_19);
    return -1;
}
