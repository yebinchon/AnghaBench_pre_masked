
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mpv_global {int dummy; } ;
struct mp_chmap {int num; } ;
struct encode_lavc_context {int dummy; } ;
struct ao {int samplerate; int format; int init_flags; char* device; int stream_silence; int period_size; char* redirect; int sstride; int num_planes; int bps; int device_buffer; int buffer; int def_buffer; TYPE_2__* api; TYPE_1__* driver; struct mp_chmap channels; int api_priv; struct encode_lavc_context* encode_lavc_ctx; } ;
typedef int redirect ;
typedef int rdevice ;
struct TYPE_5__ {scalar_t__ (* init ) (struct ao*) ;int options; int priv_defaults; int priv_size; } ;
struct TYPE_4__ {int encode; int (* init ) (struct ao*) ;int (* get_space ) (struct ao*) ;scalar_t__ play; } ;


 int VAR_0 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (struct ao*,char*) ;
 int FUNC_2 (struct ao*,char*,int,...) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 struct ao* FUNC_7 (int,struct mpv_global*,void (*) (void*),void*,char*) ;
 TYPE_2__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct mp_chmap*) ;
 int FUNC_10 (char*,int,char*,char*) ;
 int FUNC_11 (struct ao*) ;
 int FUNC_12 (struct ao*) ;
 scalar_t__ FUNC_13 (struct ao*) ;
 int FUNC_14 (struct ao*) ;
 char* FUNC_15 (struct ao*,char*) ;
 int FUNC_16 (struct ao*,int ) ;

__attribute__((used)) static struct ao *FUNC_17(bool VAR_3, struct mpv_global *VAR_4,
                          void (*VAR_5)(void *VAR_6), void *VAR_7,
                          struct encode_lavc_context *VAR_8, int VAR_9,
                          int VAR_10, int VAR_11, struct mp_chmap VAR_12,
                          char *VAR_13, char *VAR_14)
{
    struct ao *VAR_15 = FUNC_7(VAR_3, VAR_4, VAR_5, VAR_7, VAR_14);
    if (!VAR_15)
        return ((void*)0);
    VAR_15->samplerate = VAR_10;
    VAR_15->channels = VAR_12;
    VAR_15->format = VAR_11;
    VAR_15->encode_lavc_ctx = VAR_8;
    VAR_15->init_flags = VAR_9;
    if (VAR_15->driver->encode != !!VAR_15->encode_lavc_ctx)
        goto fail;

    FUNC_2(VAR_15, "requested format: %d Hz, %s channels, %s\n",
               VAR_15->samplerate, FUNC_9(&VAR_15->channels),
               FUNC_5(VAR_15->format));

    VAR_15->device = FUNC_15(VAR_15, VAR_13);

    VAR_15->api = VAR_15->driver->play ? &VAR_2 : &VAR_1;
    VAR_15->api_priv = FUNC_16(VAR_15, VAR_15->api->priv_size);
    FUNC_8(!VAR_15->api->priv_defaults && !VAR_15->api->options);

    VAR_15->stream_silence = VAR_9 & VAR_0;

    VAR_15->period_size = 1;

    int VAR_16 = VAR_15->driver->init(VAR_15);
    if (VAR_16 < 0) {

        if (VAR_15->redirect) {
            char VAR_17[80], VAR_18[80];
            FUNC_10(VAR_17, sizeof(VAR_17), "%s", VAR_15->redirect);
            FUNC_10(VAR_18, sizeof(VAR_18), "%s", VAR_15->device ? VAR_15->device : "");
            FUNC_14(VAR_15);
            return FUNC_17(VAR_3, VAR_4, VAR_5, VAR_7,
                           VAR_8, VAR_9, VAR_10, VAR_11, VAR_12,
                           VAR_18, VAR_17);
        }
        goto fail;
    }

    if (VAR_15->period_size < 1) {
        FUNC_1(VAR_15, "Invalid period size set.\n");
        goto fail;
    }

    VAR_15->sstride = FUNC_4(VAR_15->format);
    VAR_15->num_planes = 1;
    if (FUNC_3(VAR_15->format)) {
        VAR_15->num_planes = VAR_15->channels.num;
    } else {
        VAR_15->sstride *= VAR_15->channels.num;
    }
    VAR_15->bps = VAR_15->samplerate * VAR_15->sstride;

    if (!VAR_15->device_buffer && VAR_15->driver->get_space)
        VAR_15->device_buffer = VAR_15->driver->get_space(VAR_15);
    if (VAR_15->device_buffer)
        FUNC_2(VAR_15, "device buffer: %d samples.\n", VAR_15->device_buffer);
    VAR_15->buffer = FUNC_0(VAR_15->device_buffer, VAR_15->def_buffer * VAR_15->samplerate);
    VAR_15->buffer = FUNC_0(VAR_15->buffer, 1);

    int VAR_19 = FUNC_6(VAR_15->format);
    VAR_15->buffer = (VAR_15->buffer + VAR_19 - 1) / VAR_19 * VAR_19;
    FUNC_2(VAR_15, "using soft-buffer of %d samples.\n", VAR_15->buffer);

    if (VAR_15->api->init(VAR_15) < 0)
        goto fail;
    return VAR_15;

fail:
    FUNC_14(VAR_15);
    return ((void*)0);
}
