
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct priv {double frames_per_enqueue; int buffer_lock; int bytes_per_enqueue; int buf; scalar_t__ audio_latency; } ;
struct ao {scalar_t__ samplerate; struct priv* priv; } ;
struct TYPE_4__ {scalar_t__ (* Enqueue ) (TYPE_1__**,int ,int ) ;} ;
typedef scalar_t__ SLresult ;
typedef TYPE_1__** SLBufferQueueItf ;


 int FUNC_0 (struct ao*,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct ao*,int *,double,scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_1__**,int ,int ) ;

__attribute__((used)) static void FUNC_6(SLBufferQueueItf VAR_1, void *VAR_2)
{
    struct ao *VAR_3 = VAR_2;
    struct priv *VAR_4 = VAR_3->priv;
    SLresult VAR_5;
    double VAR_6;

    FUNC_3(&VAR_4->buffer_lock);

    VAR_6 = VAR_4->frames_per_enqueue / (double)VAR_3->samplerate;
    VAR_6 += VAR_4->audio_latency;
    FUNC_1(VAR_3, &VAR_4->buf, VAR_4->frames_per_enqueue,
        FUNC_2() + 1000000LL * VAR_6);

    VAR_5 = (*VAR_1)->Enqueue(VAR_1, VAR_4->buf, VAR_4->bytes_per_enqueue);
    if (VAR_5 != VAR_0)
        FUNC_0(VAR_3, "Failed to Enqueue: %d\n", VAR_5);

    FUNC_4(&VAR_4->buffer_lock);
}
