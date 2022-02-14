
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int auhdr ;
typedef int WORD ;
typedef int WAVEFORMATEX ;
struct TYPE_17__ {int nChannels; int nSamplesPerSec; int wBitsPerSample; int nBlockAlign; int cbSize; int nAvgBytesPerSec; void* wFormatTag; } ;
struct TYPE_12__ {int cksize; void* dwDataOffset; } ;
struct TYPE_11__ {int dwStreams; int dwScale; int dwRate; int dwLength; } ;
struct TYPE_10__ {int dwScale; int dwRate; int dwLength; int dwSuggestedBufferSize; int dwSampleSize; scalar_t__ dwStart; scalar_t__ dwInitialFrames; scalar_t__ wLanguage; scalar_t__ wPriority; scalar_t__ dwFlags; scalar_t__ fccHandler; int fccType; } ;
struct TYPE_16__ {int cbFormat; TYPE_8__* lpFormat; TYPE_3__ ckData; TYPE_2__ fInfo; TYPE_1__ sInfo; int fDirty; int hmmio; } ;
struct TYPE_15__ {int nAuxBlockSize; } ;
struct TYPE_14__ {int nAuxBlockSize; int cbExtraSize; } ;
struct TYPE_13__ {int fccType; int offset; int size; int encoding; int sampleRate; int channels; } ;
typedef TYPE_4__ SUNAUDIOHEADER ;
typedef TYPE_5__* LPG723_ADPCMWAVEFORMAT ;
typedef TYPE_6__* LPG721_ADPCMWAVEFORMAT ;
typedef TYPE_7__ IAVIFileImpl ;
typedef int HRESULT ;
typedef int HPSTR ;
typedef int G723_ADPCMWAVEFORMAT ;
typedef int G721_ADPCMWAVEFORMAT ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 () ;
 TYPE_8__* FUNC_2 (int ,int ,int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int,int,int) ;
 int VAR_6 ;
 int FUNC_5 (char*,int) ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int FUNC_6 (char,char,char,char) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,int ) ;
 int VAR_12 ;

__attribute__((used)) static HRESULT FUNC_9(IAVIFileImpl *VAR_13)
{
  SUNAUDIOHEADER VAR_14;

  FUNC_8(VAR_13->hmmio, 0, VAR_6);
  if (FUNC_7(VAR_13->hmmio, (HPSTR)&VAR_14, sizeof(VAR_14)) != sizeof(VAR_14))
    return VAR_1;

  if (VAR_14.fccType == 0x0064732E) {

    VAR_13->ckData.dwDataOffset = FUNC_3(VAR_14.offset);
    VAR_13->ckData.cksize = FUNC_3(VAR_14.size);

    VAR_14.encoding = FUNC_3(VAR_14.encoding);
    VAR_14.sampleRate = FUNC_3(VAR_14.sampleRate);
    VAR_14.channels = FUNC_3(VAR_14.channels);
  } else if (VAR_14.fccType == FUNC_6('.','s','n','d')) {

    VAR_13->ckData.dwDataOffset = FUNC_0(VAR_14.offset);
    VAR_13->ckData.cksize = FUNC_0(VAR_14.size);

    VAR_14.encoding = FUNC_0(VAR_14.encoding);
    VAR_14.sampleRate = FUNC_0(VAR_14.sampleRate);
    VAR_14.channels = FUNC_0(VAR_14.channels);
  } else
    return VAR_1;

  if (VAR_14.channels < 1)
    return VAR_0;


  switch(VAR_14.encoding) {
  case 137:
    VAR_13->cbFormat = sizeof(G721_ADPCMWAVEFORMAT); break;
  case 135:
    VAR_13->cbFormat = sizeof(G723_ADPCMWAVEFORMAT); break;
  case 136:
  case 134:
    FUNC_5("unsupported Sun audio format %d\n", VAR_14.encoding);
    return VAR_4;
  default:
    VAR_13->cbFormat = sizeof(WAVEFORMATEX); break;
  };

  VAR_13->lpFormat = FUNC_2(FUNC_1(), 0, VAR_13->cbFormat);
  if (VAR_13->lpFormat == ((void*)0))
    return VAR_2;

  VAR_13->lpFormat->nChannels = VAR_14.channels;
  VAR_13->lpFormat->nSamplesPerSec = VAR_14.sampleRate;
  switch(VAR_14.encoding) {
  case 128:
    VAR_13->lpFormat->wFormatTag = VAR_10;
    VAR_13->lpFormat->wBitsPerSample = 8;
    break;
  case 129:
    VAR_13->lpFormat->wFormatTag = VAR_11;
    VAR_13->lpFormat->wBitsPerSample = 8;
    break;
  case 132:
    VAR_13->lpFormat->wFormatTag = VAR_11;
    VAR_13->lpFormat->wBitsPerSample = 16;
    break;
  case 131:
    VAR_13->lpFormat->wFormatTag = VAR_11;
    VAR_13->lpFormat->wBitsPerSample = 24;
    break;
  case 130:
    VAR_13->lpFormat->wFormatTag = VAR_11;
    VAR_13->lpFormat->wBitsPerSample = 32;
    break;
  case 133:
    VAR_13->lpFormat->wFormatTag = VAR_7;
    VAR_13->lpFormat->wBitsPerSample = 8;
    break;
  case 137:
    VAR_13->lpFormat->wFormatTag = VAR_8;
    VAR_13->lpFormat->wBitsPerSample = (3*5*8);
    VAR_13->lpFormat->nBlockAlign = 15*15*8;
    VAR_13->lpFormat->cbSize = sizeof(WORD);
    ((LPG721_ADPCMWAVEFORMAT)VAR_13->lpFormat)->nAuxBlockSize = 0;
    break;
  case 135:
    VAR_13->lpFormat->wFormatTag = VAR_9;
    VAR_13->lpFormat->wBitsPerSample = (3*5*8);
    VAR_13->lpFormat->nBlockAlign = 15*15*8;
    VAR_13->lpFormat->cbSize = 2*sizeof(WORD);
    ((LPG723_ADPCMWAVEFORMAT)VAR_13->lpFormat)->cbExtraSize = 0;
    ((LPG723_ADPCMWAVEFORMAT)VAR_13->lpFormat)->nAuxBlockSize = 0;
    break;
  default:
    FUNC_5("unsupported Sun audio format %d\n", VAR_14.encoding);
    return VAR_4;
  };

  VAR_13->lpFormat->nBlockAlign =
    (VAR_13->lpFormat->nChannels * VAR_13->lpFormat->wBitsPerSample) / 8;
  if (VAR_13->lpFormat->nBlockAlign == 0 && VAR_13->lpFormat->wBitsPerSample < 8)
    VAR_13->lpFormat->nBlockAlign++;
  VAR_13->lpFormat->nAvgBytesPerSec =
    VAR_13->lpFormat->nBlockAlign * VAR_13->lpFormat->nSamplesPerSec;

  VAR_13->fDirty = VAR_5;

  VAR_13->sInfo.fccType = VAR_12;
  VAR_13->sInfo.fccHandler = 0;
  VAR_13->sInfo.dwFlags = 0;
  VAR_13->sInfo.wPriority = 0;
  VAR_13->sInfo.wLanguage = 0;
  VAR_13->sInfo.dwInitialFrames = 0;
  VAR_13->sInfo.dwScale = VAR_13->lpFormat->nBlockAlign;
  VAR_13->sInfo.dwRate = VAR_13->lpFormat->nAvgBytesPerSec;
  VAR_13->sInfo.dwStart = 0;
  VAR_13->sInfo.dwLength =
    VAR_13->ckData.cksize / VAR_13->lpFormat->nBlockAlign;
  VAR_13->sInfo.dwSuggestedBufferSize = VAR_13->sInfo.dwLength;
  VAR_13->sInfo.dwSampleSize = VAR_13->lpFormat->nBlockAlign;

  VAR_13->fInfo.dwStreams = 1;
  VAR_13->fInfo.dwScale = 1;
  VAR_13->fInfo.dwRate = VAR_13->lpFormat->nSamplesPerSec;
  VAR_13->fInfo.dwLength =
    FUNC_4(VAR_13->ckData.cksize, VAR_13->lpFormat->nSamplesPerSec,
    VAR_13->lpFormat->nAvgBytesPerSec);

  return VAR_3;
}
