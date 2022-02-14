
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ resampleinmixer; int buflen; int freqAdjust; TYPE_4__* buffer; int sec_mixpos; TYPE_3__* device; int freq; int * tmp_buffer; TYPE_1__* pwfx; } ;
struct TYPE_12__ {int * memory; } ;
struct TYPE_11__ {int tmp_buffer_len; TYPE_2__* pwfx; int * tmp_buffer; } ;
struct TYPE_10__ {int nBlockAlign; int nSamplesPerSec; } ;
struct TYPE_9__ {int nBlockAlign; } ;
typedef int INT ;
typedef TYPE_5__ IDirectSoundBufferImpl ;
typedef int DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__ const*,int,int ,int*) ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,int) ;
 int * FUNC_3 (int ,int ,int *,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_5__ const*,int *,int *,int,int,int,int,int) ;

void FUNC_7(const IDirectSoundBufferImpl *VAR_1, DWORD VAR_2, DWORD VAR_3, BOOL VAR_4)
{
 INT VAR_5;
 BYTE *VAR_6, *VAR_7, *VAR_8;
 INT VAR_9 = VAR_1->pwfx->nBlockAlign;
 INT VAR_10 = VAR_1->device->pwfx->nBlockAlign;
 DWORD VAR_11, VAR_12 = 0, VAR_13, VAR_14;


 if ((VAR_1->tmp_buffer && VAR_4) || (!VAR_1->tmp_buffer && !VAR_4) || VAR_1->resampleinmixer != VAR_4)
  return;

 FUNC_5(VAR_2 + VAR_3 <= VAR_1->buflen);
 if (VAR_4 && VAR_2 + VAR_3 < VAR_1->buflen)
  VAR_3 += VAR_1->pwfx->nBlockAlign;

 VAR_14 = FUNC_0(VAR_1, VAR_3, 0, ((void*)0));

 VAR_6 = VAR_1->buffer->memory + VAR_2;
 if (!VAR_4)
  VAR_8 = VAR_1->tmp_buffer;
 else if (VAR_1->device->tmp_buffer_len < VAR_14 || !VAR_1->device->tmp_buffer)
 {
  VAR_1->device->tmp_buffer_len = VAR_14;
  if (VAR_1->device->tmp_buffer)
   VAR_1->device->tmp_buffer = FUNC_3(FUNC_1(), 0, VAR_1->device->tmp_buffer, VAR_14);
  else
   VAR_1->device->tmp_buffer = FUNC_2(FUNC_1(), 0, VAR_14);
  VAR_8 = VAR_1->device->tmp_buffer;
 }
 else
  VAR_8 = VAR_1->device->tmp_buffer;

 FUNC_4("(%p, %p)\n", VAR_1, VAR_6);
 VAR_5 = VAR_3 / VAR_9;


 if (VAR_1->freq == VAR_1->device->pwfx->nSamplesPerSec) {
  FUNC_4("(%p) Same sample rate %d = primary %d\n", VAR_1,
   VAR_1->freq, VAR_1->device->pwfx->nSamplesPerSec);
  VAR_7 = VAR_8;
  if (!VAR_4)
    VAR_7 += VAR_2/VAR_9*VAR_10;

  FUNC_6(VAR_1, VAR_6, VAR_7, VAR_9, VAR_10, VAR_5, 0, 1 << VAR_0);
  return;
 }


 FUNC_4("(%p) Adjusting frequency: %d -> %d\n", VAR_1, VAR_1->freq, VAR_1->device->pwfx->nSamplesPerSec);

 VAR_12 = FUNC_0(VAR_1, VAR_2, VAR_1->sec_mixpos, &VAR_11);
 VAR_13 = VAR_11 >> VAR_0;
 if (VAR_13)
 {
  if (VAR_13 >= VAR_5)
   return;
  VAR_5 -= VAR_13;
  VAR_2 += VAR_13 * VAR_9;
  if (VAR_2 >= VAR_1->buflen)
   return;
  VAR_6 = VAR_1->buffer->memory + VAR_2;
  VAR_11 &= (1 << VAR_0) - 1;
  FUNC_4("Overshot: %d, freqAcc: %04x\n", VAR_13, VAR_11);
 }

 if (!VAR_4)
  VAR_7 = VAR_8 + VAR_12;
 else VAR_7 = VAR_8;


 FUNC_6(VAR_1, VAR_6, VAR_7, VAR_9, VAR_10, VAR_5, VAR_11, VAR_1->freqAdjust);
}
