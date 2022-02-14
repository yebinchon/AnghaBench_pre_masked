
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int silence_size; int boundary; scalar_t__ silence_start; scalar_t__ silence_filled; scalar_t__ buffer_size; scalar_t__ silence_threshold; TYPE_2__* status; TYPE_1__* control; } ;
typedef scalar_t__ snd_pcm_uframes_t ;
typedef scalar_t__ snd_pcm_sframes_t ;
struct TYPE_4__ {int hw_ptr; } ;
struct TYPE_3__ {int appl_ptr; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct snd_pcm_substream*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct snd_pcm_runtime*) ;

void FUNC_4(struct snd_pcm_substream *VAR_1, snd_pcm_uframes_t VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 snd_pcm_uframes_t VAR_4, VAR_5, VAR_6;
 int VAR_7;

 if (VAR_3->silence_size < VAR_3->boundary) {
  snd_pcm_sframes_t VAR_8, VAR_9;
  snd_pcm_uframes_t VAR_10 = FUNC_0(VAR_3->control->appl_ptr);
  if (VAR_3->silence_start != VAR_10) {
   VAR_9 = VAR_10 - VAR_3->silence_start;
   if (VAR_9 < 0)
    VAR_9 += VAR_3->boundary;
   if ((snd_pcm_uframes_t)VAR_9 < VAR_3->silence_filled)
    VAR_3->silence_filled -= VAR_9;
   else
    VAR_3->silence_filled = 0;
   VAR_3->silence_start = VAR_10;
  }
  if (VAR_3->silence_filled >= VAR_3->buffer_size)
   return;
  VAR_8 = FUNC_3(VAR_3) + VAR_3->silence_filled;
  if (VAR_8 >= (snd_pcm_sframes_t) VAR_3->silence_threshold)
   return;
  VAR_4 = VAR_3->silence_threshold - VAR_8;
  if (VAR_4 > VAR_3->silence_size)
   VAR_4 = VAR_3->silence_size;
 } else {
  if (VAR_2 == VAR_0) {
   snd_pcm_sframes_t VAR_11 = FUNC_3(VAR_3);
   if (VAR_11 > VAR_3->buffer_size)
    VAR_11 = VAR_3->buffer_size;
   VAR_3->silence_filled = VAR_11 > 0 ? VAR_11 : 0;
   VAR_3->silence_start = (VAR_3->status->hw_ptr +
        VAR_3->silence_filled) %
       VAR_3->boundary;
  } else {
   VAR_5 = VAR_3->status->hw_ptr;
   VAR_4 = VAR_2 - VAR_5;
   if ((snd_pcm_sframes_t)VAR_4 < 0)
    VAR_4 += VAR_3->boundary;
   VAR_3->silence_filled -= VAR_4;
   if ((snd_pcm_sframes_t)VAR_3->silence_filled < 0) {
    VAR_3->silence_filled = 0;
    VAR_3->silence_start = VAR_2;
   } else {
    VAR_3->silence_start = VAR_5;
   }
  }
  VAR_4 = VAR_3->buffer_size - VAR_3->silence_filled;
 }
 if (FUNC_2(VAR_4 > VAR_3->buffer_size))
  return;
 if (VAR_4 == 0)
  return;
 VAR_5 = VAR_3->silence_start % VAR_3->buffer_size;
 while (VAR_4 > 0) {
  VAR_6 = VAR_5 + VAR_4 > VAR_3->buffer_size ? VAR_3->buffer_size - VAR_5 : VAR_4;
  VAR_7 = FUNC_1(VAR_1, VAR_5, VAR_6);
  FUNC_2(VAR_7 < 0);
  VAR_3->silence_filled += VAR_6;
  VAR_4 -= VAR_6;
  VAR_5 = 0;
 }
}
