
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int WAVEFORMATEX ;
struct TYPE_23__ {int dwFlags; } ;
struct TYPE_26__ {scalar_t__ priolevel; scalar_t__ state; int nrofbuffers; int buffer_list_lock; int mixlock; TYPE_2__* pwfx; TYPE_4__** buffers; int normfunction; int mixfunction; int mix_buffer_len; int mix_buffer; int buflen; scalar_t__ buffer; scalar_t__ mixpos; scalar_t__ playpos; scalar_t__ pwqueue; scalar_t__ pwplay; scalar_t__ hwbuf; TYPE_1__ drvdesc; } ;
struct TYPE_25__ {int freqAdjust; int lock; scalar_t__ primary_mixpos; int buflen; scalar_t__ freq; } ;
struct TYPE_24__ {scalar_t__ nChannels; int nSamplesPerSec; scalar_t__ wBitsPerSample; int cbSize; int wFormatTag; int nBlockAlign; int nAvgBytesPerSec; } ;
typedef int PCMWAVEFORMAT ;
typedef TYPE_2__* LPWAVEFORMATEX ;
typedef int LPVOID ;
typedef TYPE_2__* LPCWAVEFORMATEX ;
typedef TYPE_4__ IDirectSoundBufferImpl ;
typedef scalar_t__ HRESULT ;
typedef TYPE_5__ DirectSoundDevice ;
typedef int DWORD64 ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_5__*) ;
 scalar_t__ FUNC_8 (TYPE_5__*,int ) ;
 int FUNC_9 (TYPE_5__*,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int VAR_11 ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int ,int ,TYPE_2__*) ;
 int FUNC_15 (int ,int ,int ,int ) ;
 int FUNC_16 (scalar_t__,int *,int *,int *,int *,int ,int ,int ) ;
 scalar_t__ FUNC_17 (scalar_t__,TYPE_2__*) ;
 int FUNC_18 (scalar_t__,scalar_t__,int ,int *,int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int *) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_22 (char*,TYPE_5__*,scalar_t__,...) ;
 int VAR_17 ;
 int FUNC_23 (char*,...) ;
 int VAR_18 ;
 int * VAR_19 ;
 int * VAR_20 ;

HRESULT FUNC_24(DirectSoundDevice *VAR_21, LPCWAVEFORMATEX VAR_22)
{
 HRESULT VAR_23 = VAR_3;
 int VAR_24;
 DWORD VAR_25, VAR_26, VAR_27;
 LPWAVEFORMATEX VAR_28;
        BOOL VAR_29 = VAR_21->priolevel == VAR_9;

 FUNC_22("(%p,%p)\n", VAR_21, VAR_22);

 if (VAR_21->priolevel == VAR_8) {
  FUNC_23("failed priority check!\n");
  return VAR_6;
 }


 if (VAR_22 == ((void*)0)) {
  FUNC_23("invalid parameter: wfex==NULL!\n");
  return VAR_4;
 }
 FUNC_22("(formattag=0x%04x,chans=%d,samplerate=%d,"
              "bytespersec=%d,blockalign=%d,bitspersamp=%d,cbSize=%d)\n",
       VAR_22->wFormatTag, VAR_22->nChannels, VAR_22->nSamplesPerSec,
       VAR_22->nAvgBytesPerSec, VAR_22->nBlockAlign,
       VAR_22->wBitsPerSample, VAR_22->cbSize);


 FUNC_20(&(VAR_21->buffer_list_lock), VAR_17);
 FUNC_10(&(VAR_21->mixlock));

 VAR_25 = VAR_21->pwfx->nSamplesPerSec;
 VAR_26 = VAR_21->pwfx->wBitsPerSample;
 VAR_27 = VAR_21->pwfx->nChannels;

 VAR_28 = VAR_21->pwfx;
 VAR_21->pwfx = FUNC_1(VAR_22);
 if (VAR_21->pwfx == ((void*)0)) {
  VAR_21->pwfx = VAR_28;
  VAR_28 = ((void*)0);
  VAR_23 = VAR_5;
  goto done;
 }

 if (!(VAR_21->drvdesc.dwFlags & VAR_1) && VAR_21->hwbuf) {
  VAR_23 = FUNC_17(VAR_21->hwbuf, VAR_21->pwfx);


  if (VAR_29 && (VAR_21->pwfx->nSamplesPerSec/100 != VAR_22->nSamplesPerSec/100 || VAR_23 == VAR_2))
  {
   DWORD VAR_30 = VAR_22->wFormatTag == VAR_18 ?
    sizeof(PCMWAVEFORMAT) : sizeof(WAVEFORMATEX) + VAR_22->cbSize;
   VAR_23 = VAR_3;
   FUNC_0(VAR_21->pwfx, VAR_22, VAR_30);
  }

  if (VAR_23 != VAR_3 && FUNC_11(VAR_23)) {
   DWORD VAR_31 = FUNC_2(VAR_28);
   FUNC_23("IDsDriverBuffer_SetFormat failed\n");
   if (!VAR_29) {
    FUNC_0(VAR_21->pwfx, VAR_28, VAR_31);
    VAR_23 = VAR_10;
   }
   goto done;
  }

  if (VAR_23 == VAR_16)
  {





   FUNC_16(VAR_21->hwbuf, (LPVOID *)&VAR_21->buffer, &VAR_21->buflen, ((void*)0), ((void*)0), 0, 0, VAR_0);
   FUNC_18(VAR_21->hwbuf, VAR_21->buffer, 0, ((void*)0), 0);

   if (VAR_21->state == VAR_12) VAR_21->state = VAR_13;
   else if (VAR_21->state == VAR_15) VAR_21->state = VAR_14;
   VAR_21->pwplay = VAR_21->pwqueue = VAR_21->playpos = VAR_21->mixpos = 0;
   VAR_23 = VAR_10;
  }
  FUNC_7(VAR_21);
 }

 if (VAR_23 == VAR_3)
 {
  FUNC_4(VAR_21);

  VAR_23 = FUNC_8(VAR_21, VAR_11);
  if (FUNC_11(VAR_23))
  {
   FUNC_23("DSOUND_ReopenDevice failed: %08x\n", VAR_23);
   goto done;
  }
  VAR_23 = FUNC_5(VAR_21);
  if (VAR_23 != VAR_10) {
   FUNC_23("DSOUND_PrimaryOpen failed\n");
   goto done;
  }

  if (VAR_22->nSamplesPerSec/100 != VAR_21->pwfx->nSamplesPerSec/100 && VAR_29 && VAR_21->buffer)
  {
   FUNC_4(VAR_21);
   VAR_21->pwfx->nSamplesPerSec = VAR_22->nSamplesPerSec;
   VAR_23 = FUNC_8(VAR_21, VAR_17);
   if (FUNC_11(VAR_23))
    FUNC_23("DSOUND_ReopenDevice(2) failed: %08x\n", VAR_23);
   else if (FUNC_11((VAR_23 = FUNC_5(VAR_21))))
    FUNC_23("DSOUND_PrimaryOpen(2) failed: %08x\n", VAR_23);
  }
 }

 VAR_21->mix_buffer_len = FUNC_9(VAR_21, VAR_21->buflen);
 VAR_21->mix_buffer = FUNC_15(FUNC_13(), 0, VAR_21->mix_buffer, VAR_21->mix_buffer_len);
 FUNC_12(VAR_21->mix_buffer, VAR_21->mix_buffer_len, 0);
 VAR_21->mixfunction = VAR_19[VAR_21->pwfx->wBitsPerSample/8 - 1];
 VAR_21->normfunction = VAR_20[VAR_21->pwfx->wBitsPerSample/8 - 1];

 if (VAR_25 != VAR_21->pwfx->nSamplesPerSec || VAR_26 != VAR_21->pwfx->wBitsPerSample || VAR_27 != VAR_21->pwfx->nChannels) {
  IDirectSoundBufferImpl** VAR_32 = VAR_21->buffers;
  for (VAR_24 = 0; VAR_24 < VAR_21->nrofbuffers; VAR_24++, VAR_32++) {

   FUNC_20(&(*VAR_32)->lock, VAR_17);

   (*VAR_32)->freqAdjust = ((DWORD64)(*VAR_32)->freq << VAR_7) / VAR_21->pwfx->nSamplesPerSec;
   FUNC_6((*VAR_32));
   FUNC_3((*VAR_32), 0, (*VAR_32)->buflen, VAR_11);
   (*VAR_32)->primary_mixpos = 0;

   FUNC_21(&(*VAR_32)->lock);

  }
 }

done:
 FUNC_19(&(VAR_21->mixlock));
 FUNC_21(&(VAR_21->buffer_list_lock));


 FUNC_14(FUNC_13(), 0, VAR_28);
 return VAR_23;
}
