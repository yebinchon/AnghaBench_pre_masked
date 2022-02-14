
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_10__ {TYPE_1__* DebugInfo; } ;
struct TYPE_8__ {size_t dnDevNode; } ;
struct TYPE_9__ {TYPE_2__ drvdesc; TYPE_6__ lock; struct TYPE_9__* pwfx; scalar_t__ driver; scalar_t__ capture_buffer; int ref; } ;
struct TYPE_7__ {scalar_t__* Spare; } ;
typedef int LPDIRECTSOUNDCAPTUREBUFFER8 ;
typedef TYPE_3__ DirectSoundCaptureDevice ;


 int ** VAR_0 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static ULONG FUNC_8(
    DirectSoundCaptureDevice * VAR_1)
{
    ULONG VAR_2 = FUNC_6(&(VAR_1->ref));
    FUNC_7("(%p) ref was %d\n", VAR_1, VAR_2 + 1);

    if (!VAR_2) {
        FUNC_7("deleting object\n");
        if (VAR_1->capture_buffer)
            FUNC_3(
  (LPDIRECTSOUNDCAPTUREBUFFER8) VAR_1->capture_buffer);

        if (VAR_1->driver) {
            FUNC_4(VAR_1->driver);
            FUNC_5(VAR_1->driver);
        }

        FUNC_2(FUNC_1(), 0, VAR_1->pwfx);
        VAR_1->lock.DebugInfo->Spare[0] = 0;
        FUNC_0( &(VAR_1->lock) );
        VAR_0[VAR_1->drvdesc.dnDevNode] = ((void*)0);
        FUNC_2(FUNC_1(), 0, VAR_1);
 FUNC_7("(%p) released\n", VAR_1);
    }
    return VAR_2;
}
