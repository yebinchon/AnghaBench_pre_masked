
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {struct snd_pcm* pcm; } ;
struct snd_pcm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm*,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_pcm_runtime *VAR_2)
{
 struct snd_pcm *VAR_3 = VAR_2->pcm;

 FUNC_1(VAR_3, VAR_1,
  FUNC_0(VAR_0), 65536, (4096 * 1024) - 1);

 return 0;
}
