
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ps3_card_info {int start_delay; struct snd_pcm_substream* substream; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ,int ,int) ;
 struct snd_ps3_card_info* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_4)
{
 struct snd_pcm_runtime *VAR_5 = VAR_4->runtime;
 struct snd_ps3_card_info *VAR_6 = FUNC_1(VAR_4);


 VAR_6->substream = VAR_4;

 VAR_5->hw = VAR_2;

 VAR_6->start_delay = VAR_3;


 FUNC_2(0);

 FUNC_0(VAR_5, 0, VAR_1,
       VAR_0 * 4 * 2);
 return 0;
}
