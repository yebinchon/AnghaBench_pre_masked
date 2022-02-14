
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_wss {int * capture_substream; } ;
struct snd_pcm_substream {int dummy; } ;


 int VAR_0 ;
 struct snd_wss* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_wss*,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct snd_wss *VAR_2 = FUNC_0(VAR_1);

 VAR_2->capture_substream = ((void*)0);
 FUNC_1(VAR_2, VAR_0);
 return 0;
}
