
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_4)
{
 struct snd_pcm_runtime *VAR_5 = VAR_4->runtime;
 int VAR_6 = (VAR_4->stream == VAR_2) ?
    VAR_0 : VAR_1;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_4);
 if (VAR_7 < 0)
  return VAR_7;

 return FUNC_1(VAR_3, VAR_6, VAR_5->rate);
}
