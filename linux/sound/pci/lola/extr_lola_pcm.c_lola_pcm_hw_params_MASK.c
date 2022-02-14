
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct lola_stream {scalar_t__ format_verb; scalar_t__ period_bytes; scalar_t__ bufsize; } ;


 struct lola_stream* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_substream*,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0,
         struct snd_pcm_hw_params *VAR_1)
{
 struct lola_stream *VAR_2 = FUNC_0(VAR_0);

 VAR_2->bufsize = 0;
 VAR_2->period_bytes = 0;
 VAR_2->format_verb = 0;
 return FUNC_2(VAR_0,
     FUNC_1(VAR_1));
}
