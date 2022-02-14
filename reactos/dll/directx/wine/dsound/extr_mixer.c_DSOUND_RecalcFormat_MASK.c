
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ wFormatTag; } ;
struct TYPE_15__ {int SubFormat; TYPE_1__ Format; } ;
typedef TYPE_5__ WAVEFORMATEXTENSIBLE ;
struct TYPE_16__ {int freq; int writelead; int max_buffer_len; int freqAcc; int freqAccNext; int freqneeded; int tmp_buffer_len; int buflen; int sec_mixpos; int buf_mixpos; void* resampleinmixer; TYPE_4__* device; int * tmp_buffer; TYPE_2__* pwfx; void* convert; } ;
struct TYPE_14__ {int buflen; TYPE_3__* pwfx; } ;
struct TYPE_13__ {int nSamplesPerSec; int nBlockAlign; int wBitsPerSample; scalar_t__ nChannels; } ;
struct TYPE_12__ {int nBlockAlign; int wBitsPerSample; scalar_t__ nChannels; } ;
typedef TYPE_6__ IDirectSoundBufferImpl ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*,int ,int ,int *) ;
 void* VAR_0 ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 () ;
 int * FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int VAR_1 ;
 int FUNC_7 (char*,TYPE_6__*) ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void*** VAR_5 ;
 int VAR_6 ;

void FUNC_8(IDirectSoundBufferImpl *VAR_7)
{
 BOOL VAR_8 = VAR_2, VAR_9 = (VAR_7->freq != VAR_7->device->pwfx->nSamplesPerSec);
 DWORD VAR_10 = VAR_7->pwfx->nBlockAlign, VAR_11 = VAR_7->device->pwfx->nBlockAlign;
 WAVEFORMATEXTENSIBLE *VAR_12;
 BOOL VAR_13 = VAR_0;

 FUNC_7("(%p)\n",VAR_7);

 VAR_12 = (WAVEFORMATEXTENSIBLE *) VAR_7->pwfx;

 if ((VAR_12->Format.wFormatTag == VAR_4) || ((VAR_12->Format.wFormatTag == VAR_3)
     && (FUNC_6(&VAR_12->SubFormat, &VAR_1))))
  VAR_13 = VAR_2;


 VAR_7->writelead = (VAR_7->freq / 100) * VAR_7->pwfx->nBlockAlign;

 if ((VAR_7->pwfx->wBitsPerSample == VAR_7->device->pwfx->wBitsPerSample) &&
     (VAR_7->pwfx->nChannels == VAR_7->device->pwfx->nChannels) && !VAR_9 && !VAR_13)
  VAR_8 = VAR_0;
 FUNC_5(FUNC_3(), 0, VAR_7->tmp_buffer);
 VAR_7->tmp_buffer = ((void*)0);
 VAR_7->max_buffer_len = VAR_7->freqAcc = VAR_7->freqAccNext = 0;
 VAR_7->freqneeded = VAR_9;

 if (VAR_13)
  VAR_7->convert = VAR_5[4][VAR_7->device->pwfx->wBitsPerSample/8 - 1];
 else
  VAR_7->convert = VAR_5[VAR_7->pwfx->wBitsPerSample/8 - 1][VAR_7->device->pwfx->wBitsPerSample/8 - 1];

 VAR_7->resampleinmixer = VAR_0;

 if (VAR_8)
 {
  if (VAR_9)
   FUNC_0(VAR_7);
  else
   VAR_7->tmp_buffer_len = VAR_7->buflen / VAR_10 * VAR_11;
  VAR_7->max_buffer_len = VAR_7->tmp_buffer_len;
  if ((VAR_7->max_buffer_len <= VAR_7->device->buflen || VAR_7->max_buffer_len < VAR_6 * 1024 * 1024) && VAR_6 >= 0)
   VAR_7->tmp_buffer = FUNC_4(FUNC_3(), 0, VAR_7->max_buffer_len);
  if (VAR_7->tmp_buffer)
   FUNC_2(VAR_7->tmp_buffer, VAR_7->tmp_buffer_len, VAR_7->device->pwfx->wBitsPerSample == 8 ? 128 : 0);
  else
   VAR_7->resampleinmixer = VAR_2;
 }
 else VAR_7->max_buffer_len = VAR_7->tmp_buffer_len = VAR_7->buflen;
 VAR_7->buf_mixpos = FUNC_1(VAR_7, VAR_7->sec_mixpos, 0, ((void*)0));
}
