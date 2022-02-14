
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct hdac_bus {int ppcap; } ;


 struct hdac_bus* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*,int) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0,
     int VAR_1)
{
 struct hdac_bus *VAR_2 = FUNC_0(VAR_0);

 if (!VAR_2->ppcap)
  return FUNC_1(VAR_0, VAR_1);

 return 0;
}
