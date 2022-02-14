
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int * codec_dais; } ;


 int FUNC_0 (int ,int,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_pcm_runtime *VAR_0)
{
 int VAR_1;


 VAR_1 = FUNC_0(VAR_0->codec_dais[0], 0x01, 0x01, 2, 48);
 if (VAR_1 < 0)
  return VAR_1;


 VAR_1 = FUNC_0(VAR_0->codec_dais[1], 0x02, 0x02, 2, 48);
 if (VAR_1 < 0)
  return VAR_1;

 return VAR_1;
}
