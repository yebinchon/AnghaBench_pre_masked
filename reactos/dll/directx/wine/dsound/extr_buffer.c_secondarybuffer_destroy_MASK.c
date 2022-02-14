
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int dwFlags; } ;
struct TYPE_10__ {TYPE_1__ drvdesc; } ;
struct TYPE_9__ {scalar_t__ ref; struct TYPE_9__* pwfx; struct TYPE_9__* notifies; struct TYPE_9__* tmp_buffer; struct TYPE_9__* buffer; struct TYPE_9__* memory; int entry; TYPE_6__* device; scalar_t__ hwbuf; int lock; } ;
typedef TYPE_2__ IDirectSoundBufferImpl ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*,TYPE_2__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,TYPE_2__*) ;
 int FUNC_6 (int *) ;

void FUNC_7(IDirectSoundBufferImpl *VAR_1)
{
    FUNC_0(VAR_1->device, VAR_1);
    FUNC_4(&VAR_1->lock);

    if (VAR_1->hwbuf)
        FUNC_3(VAR_1->hwbuf);
    if (!VAR_1->hwbuf || (VAR_1->device->drvdesc.dwFlags & VAR_0)) {
        VAR_1->buffer->ref--;
        FUNC_6(&VAR_1->entry);
        if (VAR_1->buffer->ref == 0) {
            FUNC_2(FUNC_1(), 0, VAR_1->buffer->memory);
            FUNC_2(FUNC_1(), 0, VAR_1->buffer);
        }
    }

    FUNC_2(FUNC_1(), 0, VAR_1->tmp_buffer);
    FUNC_2(FUNC_1(), 0, VAR_1->notifies);
    FUNC_2(FUNC_1(), 0, VAR_1->pwfx);
    FUNC_2(FUNC_1(), 0, VAR_1);

    FUNC_5("(%p) released\n", VAR_1);
}
