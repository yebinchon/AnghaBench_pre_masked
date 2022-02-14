
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {int driver; } ;
struct TYPE_18__ {int ref; int numIfaces; struct TYPE_18__* pwfx; TYPE_1__* buffer; int entry; struct TYPE_18__* tmp_buffer; int lock; int buflen; int * iks; int * ds3db; TYPE_3__* device; scalar_t__ nrofnotifies; int * notifies; int * notify; scalar_t__ sec_mixpos; scalar_t__ buf_mixpos; int state; scalar_t__ hwbuf; } ;
struct TYPE_17__ {int ref; int buffers; } ;
typedef int LPVOID ;
typedef TYPE_2__ IDirectSoundBufferImpl ;
typedef scalar_t__ HRESULT ;
typedef TYPE_3__ DirectSoundDevice ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*,int) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_6 () ;
 TYPE_2__* FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,TYPE_2__*) ;
 scalar_t__ FUNC_9 (int ,scalar_t__,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_3 ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *) ;

HRESULT FUNC_16(
    DirectSoundDevice *VAR_4,
    IDirectSoundBufferImpl **VAR_5,
    IDirectSoundBufferImpl *VAR_6)
{
    IDirectSoundBufferImpl *VAR_7;
    HRESULT VAR_8 = VAR_1;
    FUNC_12("(%p,%p,%p)\n", VAR_4, VAR_5, VAR_6);

    VAR_7 = FUNC_7(FUNC_6(),0,sizeof(*VAR_7));
    if (VAR_7 == ((void*)0)) {
        FUNC_13("out of memory\n");
        *VAR_5 = ((void*)0);
        return VAR_0;
    }
    FUNC_0(VAR_7, VAR_6, sizeof(*VAR_7));

    VAR_7->pwfx = FUNC_1(VAR_6->pwfx);
    if (VAR_7->pwfx == ((void*)0)) {
        FUNC_8(FUNC_6(),0,VAR_7);
        *VAR_5 = ((void*)0);
        return VAR_0;
    }

    if (VAR_6->hwbuf) {
        FUNC_12("duplicating hardware buffer\n");

        VAR_8 = FUNC_9(VAR_4->driver, VAR_6->hwbuf,
                                              (LPVOID *)&VAR_7->hwbuf);
        if (FUNC_5(VAR_8)) {
            FUNC_13("IDsDriver_DuplicateSoundBuffer failed (%08x)\n", VAR_8);
            FUNC_8(FUNC_6(),0,VAR_7->pwfx);
            FUNC_8(FUNC_6(),0,VAR_7);
            *VAR_5 = ((void*)0);
            return VAR_8;
        }
    }

    VAR_7->buffer->ref++;
    FUNC_14(&VAR_7->buffer->buffers, &VAR_7->entry);
    VAR_7->ref = 1;
    VAR_7->numIfaces = 1;
    VAR_7->state = VAR_3;
    VAR_7->buf_mixpos = VAR_7->sec_mixpos = 0;
    VAR_7->notify = ((void*)0);
    VAR_7->notifies = ((void*)0);
    VAR_7->nrofnotifies = 0;
    VAR_7->device = VAR_4;
    VAR_7->ds3db = ((void*)0);
    VAR_7->iks = ((void*)0);
    VAR_7->tmp_buffer = ((void*)0);
    FUNC_3(VAR_7);
    FUNC_2(VAR_7, 0, VAR_7->buflen, VAR_2);

    FUNC_11(&VAR_7->lock);


    VAR_8 = FUNC_4(VAR_4, VAR_7);
    if (VAR_8 != VAR_1) {
        FUNC_10(&VAR_7->lock);
        FUNC_8(FUNC_6(),0,VAR_7->tmp_buffer);
        FUNC_15(&VAR_7->entry);
        VAR_7->buffer->ref--;
        FUNC_8(FUNC_6(),0,VAR_7->pwfx);
        FUNC_8(FUNC_6(),0,VAR_7);
        VAR_7 = ((void*)0);
    }

    *VAR_5 = VAR_7;
    return VAR_8;
}
