
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw_ptr_buffer_jiffies; int buffer_size; int rate; scalar_t__ silence_size; TYPE_1__* status; int hw_ptr_jiffies; } ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_pcm_substream*,int ) ;
 int FUNC_1 (struct snd_pcm_substream*,int ) ;
 int FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static void FUNC_3(struct snd_pcm_substream *VAR_5, int VAR_6)
{
 struct snd_pcm_runtime *VAR_7 = VAR_5->runtime;
 FUNC_2(VAR_5);
 VAR_7->hw_ptr_jiffies = VAR_4;
 VAR_7->hw_ptr_buffer_jiffies = (VAR_7->buffer_size * VAR_0) /
           VAR_7->rate;
 VAR_7->status->state = VAR_6;
 if (VAR_5->stream == VAR_1 &&
     VAR_7->silence_size > 0)
  FUNC_0(VAR_5, VAR_3);
 FUNC_1(VAR_5, VAR_2);
}
