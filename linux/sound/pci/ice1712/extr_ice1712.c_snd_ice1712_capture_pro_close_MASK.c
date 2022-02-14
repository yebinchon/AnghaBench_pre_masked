
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_ice1712 {int * capture_pro_substream; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct snd_ice1712*,int ,int ) ;
 struct snd_ice1712* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_2)
{
 struct snd_ice1712 *VAR_3 = FUNC_1(VAR_2);

 if (VAR_1)
  FUNC_0(VAR_3, VAR_0, 0);
 VAR_3->capture_pro_substream = ((void*)0);
 return 0;
}
