
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ao_push_state {int still_playing; int wait_on_ao; scalar_t__ expected_end_time; int buffer; scalar_t__ final_chunk; int ** silence; scalar_t__ paused; } ;
struct ao {int period_size; int device_buffer; int wakeup_ctx; int (* wakeup_cb ) (int ) ;TYPE_1__* driver; scalar_t__ stream_silence; struct ao_push_state* api_priv; } ;
struct TYPE_2__ {int (* get_space ) (struct ao*) ;int (* play ) (struct ao*,void**,int,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct ao*,char*,...) ;
 int FUNC_2 (struct ao*,char*) ;
 int FUNC_3 (struct ao*,char*,int,int,int,int,int,int,int,int) ;
 int FUNC_4 (struct ao*,void**,int) ;
 int FUNC_5 (int ,int ***,int*) ;
 int FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (struct ao*,int) ;
 int FUNC_8 (struct ao*) ;
 int FUNC_9 (struct ao*,void**,int,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct ao*) ;

__attribute__((used)) static void FUNC_12(struct ao *VAR_1)
{
    struct ao_push_state *VAR_2 = VAR_1->api_priv;
    int VAR_3 = VAR_1->driver->get_space(VAR_1);
    bool VAR_4 = VAR_2->paused || (VAR_1->stream_silence && !VAR_2->still_playing);
    VAR_3 = FUNC_0(VAR_3, 0);
    if (VAR_3 % VAR_1->period_size)
        FUNC_1(VAR_1, "Audio device reports unaligned available buffer size.\n");
    uint8_t **VAR_5;
    int VAR_6;
    if (VAR_4) {
        VAR_5 = VAR_2->silence;
        VAR_6 = FUNC_7(VAR_1, VAR_3) ? VAR_3 : 0;
    } else {
        FUNC_5(VAR_2->buffer, &VAR_5, &VAR_6);
    }
    int VAR_7 = VAR_6;
    if (VAR_6 > VAR_3)
        VAR_6 = VAR_3;
    int VAR_8 = 0;
    if (VAR_2->final_chunk && VAR_6 == VAR_7) {
        VAR_8 |= VAR_0;
    } else {
        VAR_6 = VAR_6 / VAR_1->period_size * VAR_1->period_size;
    }
    FUNC_2(VAR_1, "start ao fill");
    FUNC_4(VAR_1, (void **)VAR_5, VAR_6);
    int VAR_9 = 0;
    if (VAR_6)
        VAR_9 = VAR_1->driver->play(VAR_1, (void **)VAR_5, VAR_6, VAR_8);
    FUNC_2(VAR_1, "end ao fill");
    if (VAR_9 > VAR_6) {
        FUNC_1(VAR_1, "Audio device returned nonsense value.\n");
        VAR_9 = VAR_6;
    } else if (VAR_9 < 0) {
        FUNC_1(VAR_1, "Error writing audio to device.\n");
    } else if (VAR_9 != VAR_6) {
        FUNC_1(VAR_1, "Audio device returned broken buffer state (sent %d samples, "
               "got %d samples, %d period%s)!\n", VAR_6, VAR_9,
               VAR_1->period_size, VAR_8 & VAR_0 ? " final" : "");
    }
    VAR_9 = FUNC_0(VAR_9, 0);

    bool VAR_10 = VAR_9 <= 0 && VAR_3 >= VAR_7 && VAR_6 > 0;
    if ((VAR_8 & VAR_0) && VAR_10) {
        FUNC_1(VAR_1, "Audio output driver seems to ignore AOPLAY_FINAL_CHUNK.\n");
        VAR_9 = VAR_7;
    }
    if (!VAR_4)
        FUNC_6(VAR_2->buffer, VAR_9);
    if (VAR_9 > 0)
        VAR_2->expected_end_time = 0;


    bool VAR_11 = VAR_9 == 0 && VAR_7 >= VAR_3 && VAR_3 > 0;
    if (VAR_11)
        FUNC_1(VAR_1, "Audio output is reporting incorrect buffer status.\n");


    VAR_2->wait_on_ao = VAR_3 == 0 || VAR_9 > 0 || VAR_11;
    VAR_2->still_playing |= VAR_9 > 0 && !VAR_4;


    int VAR_12 = FUNC_11(VAR_1);
    bool VAR_13 = VAR_12 >= (VAR_9 == VAR_3 ? VAR_1->device_buffer / 4 : 1) && !VAR_11 &&
                !(VAR_8 & VAR_0);
    if (VAR_13)
        VAR_1->wakeup_cb(VAR_1->wakeup_ctx);
    FUNC_3(VAR_1, "in=%d flags=%d space=%d r=%d wa/pl=%d/%d needed=%d more=%d\n",
             VAR_7, VAR_8, VAR_3, VAR_9, VAR_2->wait_on_ao, VAR_2->still_playing, VAR_12, VAR_13);
}
