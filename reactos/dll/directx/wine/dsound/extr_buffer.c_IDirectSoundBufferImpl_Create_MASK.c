
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_9__ ;
typedef struct TYPE_39__ TYPE_8__ ;
typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_26__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_12__ ;
typedef struct TYPE_29__ TYPE_11__ ;
typedef struct TYPE_28__ TYPE_10__ ;


struct TYPE_40__ {int nBlockAlign; int nSamplesPerSec; int nChannels; int wBitsPerSample; } ;
struct TYPE_39__ {int * lpVtbl; } ;
struct TYPE_37__ {double x; double y; double z; } ;
struct TYPE_36__ {double x; double y; double z; } ;
struct TYPE_35__ {double x; double y; double z; } ;
struct TYPE_38__ {int dwSize; int dwMode; int flMaxDistance; int flMinDistance; int lConeOutsideVolume; TYPE_6__ vConeOrientation; void* dwOutsideConeAngle; void* dwInsideConeAngle; TYPE_5__ vVelocity; TYPE_4__ vPosition; } ;
struct TYPE_34__ {int nSamplesPerSec; } ;
struct TYPE_33__ {int dwFlags; } ;
struct TYPE_32__ {int dwFlags; } ;
struct TYPE_31__ {int dwFlags; } ;
struct TYPE_30__ {TYPE_3__* pwfx; TYPE_2__ drvdesc; scalar_t__ driver; TYPE_1__ drvcaps; } ;
struct TYPE_29__ {int ref; int numIfaces; int buflen; int freq; int freqAdjust; int nAvgBytesPerSec; struct TYPE_29__* pwfx; int lock; struct TYPE_29__* buffer; struct TYPE_29__* memory; int volpan; int ds3db_need_recalc; TYPE_7__ ds3db_ds3db; TYPE_26__ dsbd; int state; scalar_t__ sec_mixpos; scalar_t__ buf_mixpos; int entry; int buffers; int hwbuf; scalar_t__ hwnotify; scalar_t__ nrofnotifies; int * notifies; int * notify; int * iks; TYPE_8__ IDirectSoundBuffer8_iface; TYPE_12__* device; } ;
struct TYPE_28__ {scalar_t__ dwBufferBytes; int dwFlags; TYPE_9__* lpwfxFormat; int dwSize; } ;
typedef TYPE_9__* LPWAVEFORMATEX ;
typedef int LPVOID ;
typedef TYPE_10__* LPCDSBUFFERDESC ;
typedef TYPE_11__ IDirectSoundBufferImpl ;
typedef scalar_t__ HRESULT ;
typedef TYPE_12__ DirectSoundDevice ;
typedef int DWORD64 ;
typedef int DWORD ;
typedef int DS3DBUFFER ;


 int FUNC_0 (TYPE_26__*,TYPE_10__*,int ) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_1 (TYPE_11__*) ;
 TYPE_11__* FUNC_2 (TYPE_9__*) ;
 int VAR_19 ;
 int FUNC_3 (TYPE_11__*) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_20 ;
 scalar_t__ FUNC_5 (TYPE_12__*,TYPE_11__*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_21 ;
 int FUNC_7 (TYPE_11__*,int,int) ;
 int FUNC_8 () ;
 int VAR_22 ;
 void* FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int ,int ,TYPE_11__*) ;
 scalar_t__ FUNC_11 (scalar_t__,TYPE_9__*,int,int ,int*,TYPE_11__**,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int VAR_23 ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (char*,...) ;
 int VAR_24 ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *) ;

HRESULT FUNC_18(
 DirectSoundDevice * VAR_25,
 IDirectSoundBufferImpl **VAR_26,
 LPCDSBUFFERDESC VAR_27)
{
 IDirectSoundBufferImpl *VAR_28;
 LPWAVEFORMATEX VAR_29 = VAR_27->lpwfxFormat;
 HRESULT VAR_30 = VAR_20;
 DWORD VAR_31 = 0;
 int VAR_32;
 FUNC_14("(%p,%p,%p)\n",VAR_25,VAR_26,VAR_27);

 if (VAR_27->dwBufferBytes < VAR_9 || VAR_27->dwBufferBytes > VAR_8) {
  FUNC_15("invalid parameter: dsbd->dwBufferBytes = %d\n", VAR_27->dwBufferBytes);
  *VAR_26 = ((void*)0);
  return VAR_17;
 }

 VAR_28 = FUNC_9(FUNC_8(),VAR_22,sizeof(*VAR_28));

 if (VAR_28 == 0) {
  FUNC_15("out of memory\n");
  *VAR_26 = ((void*)0);
  return VAR_18;
 }

 FUNC_14("Created buffer at %p\n", VAR_28);

        VAR_28->ref = 1;
        VAR_28->numIfaces = 1;
 VAR_28->device = VAR_25;
        VAR_28->IDirectSoundBuffer8_iface.lpVtbl = &VAR_24;
 VAR_28->iks = ((void*)0);


 FUNC_0(&VAR_28->dsbd, VAR_27, VAR_27->dwSize);

 VAR_28->pwfx = FUNC_2(VAR_29);
 if (VAR_28->pwfx == ((void*)0)) {
  FUNC_10(FUNC_8(),0,VAR_28);
  *VAR_26 = ((void*)0);
  return VAR_18;
 }

 if (VAR_27->dwBufferBytes % VAR_27->lpwfxFormat->nBlockAlign)
  VAR_28->buflen = VAR_27->dwBufferBytes +
   (VAR_27->lpwfxFormat->nBlockAlign -
   (VAR_27->dwBufferBytes % VAR_27->lpwfxFormat->nBlockAlign));
 else
  VAR_28->buflen = VAR_27->dwBufferBytes;

 VAR_28->freq = VAR_27->lpwfxFormat->nSamplesPerSec;
 VAR_28->notify = ((void*)0);
 VAR_28->notifies = ((void*)0);
 VAR_28->nrofnotifies = 0;
 VAR_28->hwnotify = 0;


 if (VAR_29->nChannels==2) VAR_31 |= VAR_13;
 else VAR_31 |= VAR_12;
 if (VAR_29->wBitsPerSample==16) VAR_31 |= VAR_10;
 else VAR_31 |= VAR_11;

 VAR_32 = !!(VAR_27->dwFlags & VAR_6);
 FUNC_14("use_hw = %d, capf = 0x%08x, device->drvcaps.dwFlags = 0x%08x\n", VAR_32, VAR_31, VAR_25->drvcaps.dwFlags);
 if (VAR_32 && ((VAR_25->drvcaps.dwFlags & VAR_31) != VAR_31 || !VAR_25->driver))
 {
  if (VAR_25->driver)
   FUNC_15("Format not supported for hardware buffer\n");
  FUNC_10(FUNC_8(),0,VAR_28->pwfx);
  FUNC_10(FUNC_8(),0,VAR_28);
  *VAR_26 = ((void*)0);
  if ((VAR_25->drvcaps.dwFlags & VAR_31) != VAR_31)
   return VAR_15;
  return VAR_16;
 }







 VAR_28->buffer = FUNC_9(FUNC_8(),0,sizeof(*(VAR_28->buffer)));
 if (VAR_28->buffer == ((void*)0)) {
  FUNC_15("out of memory\n");
  FUNC_10(FUNC_8(),0,VAR_28->pwfx);
  FUNC_10(FUNC_8(),0,VAR_28);
  *VAR_26 = ((void*)0);
  return VAR_18;
 }


 if ((VAR_25->drvdesc.dwFlags & VAR_14) || !VAR_32) {
  VAR_28->buffer->memory = FUNC_9(FUNC_8(),0,VAR_28->buflen);
  if (VAR_28->buffer->memory == ((void*)0)) {
   FUNC_15("out of memory\n");
   FUNC_10(FUNC_8(),0,VAR_28->pwfx);
   FUNC_10(FUNC_8(),0,VAR_28->buffer);
   FUNC_10(FUNC_8(),0,VAR_28);
   *VAR_26 = ((void*)0);
   return VAR_18;
  }
 }


 if (VAR_32) {
  VAR_30 = FUNC_11(VAR_25->driver,VAR_29,VAR_27->dwFlags,0,
        &(VAR_28->buflen),&(VAR_28->buffer->memory),
        (LPVOID*)&(VAR_28->hwbuf));
  if (FUNC_6(VAR_30))
  {
   FUNC_15("Failed to create hardware secondary buffer: %08x\n", VAR_30);
   if (VAR_25->drvdesc.dwFlags & VAR_14)
    FUNC_10(FUNC_8(),0,VAR_28->buffer->memory);
   FUNC_10(FUNC_8(),0,VAR_28->buffer);
   FUNC_10(FUNC_8(),0,VAR_28->pwfx);
   FUNC_10(FUNC_8(),0,VAR_28);
   *VAR_26 = ((void*)0);
   return VAR_16;
  }
 }

 VAR_28->buffer->ref = 1;
 FUNC_17(&VAR_28->buffer->buffers);
 FUNC_16(&VAR_28->buffer->buffers, &VAR_28->entry);
 FUNC_7(VAR_28->buffer->memory, VAR_28->buflen, VAR_27->lpwfxFormat->wBitsPerSample == 8 ? 128 : 0);



 VAR_28->buf_mixpos = VAR_28->sec_mixpos = 0;
 VAR_28->state = VAR_23;

 VAR_28->freqAdjust = ((DWORD64)VAR_28->freq << VAR_19) / VAR_25->pwfx->nSamplesPerSec;
 VAR_28->nAvgBytesPerSec = VAR_28->freq *
  VAR_27->lpwfxFormat->nBlockAlign;


 FUNC_3(VAR_28);

 if (VAR_28->dsbd.dwFlags & VAR_5) {
  VAR_28->ds3db_ds3db.dwSize = sizeof(DS3DBUFFER);
  VAR_28->ds3db_ds3db.vPosition.x = 0.0;
  VAR_28->ds3db_ds3db.vPosition.y = 0.0;
  VAR_28->ds3db_ds3db.vPosition.z = 0.0;
  VAR_28->ds3db_ds3db.vVelocity.x = 0.0;
  VAR_28->ds3db_ds3db.vVelocity.y = 0.0;
  VAR_28->ds3db_ds3db.vVelocity.z = 0.0;
  VAR_28->ds3db_ds3db.dwInsideConeAngle = VAR_1;
  VAR_28->ds3db_ds3db.dwOutsideConeAngle = VAR_1;
  VAR_28->ds3db_ds3db.vConeOrientation.x = 0.0;
  VAR_28->ds3db_ds3db.vConeOrientation.y = 0.0;
  VAR_28->ds3db_ds3db.vConeOrientation.z = 0.0;
  VAR_28->ds3db_ds3db.lConeOutsideVolume = VAR_2;
  VAR_28->ds3db_ds3db.flMinDistance = VAR_4;
  VAR_28->ds3db_ds3db.flMaxDistance = VAR_3;
  VAR_28->ds3db_ds3db.dwMode = VAR_0;

  VAR_28->ds3db_need_recalc = VAR_21;
  FUNC_1(VAR_28);
 } else
  FUNC_4(&(VAR_28->volpan));

 FUNC_13(&VAR_28->lock);


 if (!(VAR_27->dwFlags & VAR_7)) {
  VAR_30 = FUNC_5(VAR_25, VAR_28);
  if (VAR_30 != VAR_20) {
   FUNC_10(FUNC_8(),0,VAR_28->buffer->memory);
   FUNC_10(FUNC_8(),0,VAR_28->buffer);
   FUNC_12(&VAR_28->lock);
   FUNC_10(FUNC_8(),0,VAR_28->pwfx);
   FUNC_10(FUNC_8(),0,VAR_28);
   VAR_28 = ((void*)0);
  }
 }

 *VAR_26 = VAR_28;
 return VAR_30;
}
