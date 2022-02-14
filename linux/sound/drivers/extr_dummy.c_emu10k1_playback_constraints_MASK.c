
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_runtime {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_runtime *VAR_3)
{
 int VAR_4;
 VAR_4 = FUNC_0(VAR_3, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;
 VAR_4 = FUNC_1(VAR_3, VAR_0, 256, VAR_2);
 if (VAR_4 < 0)
  return VAR_4;
 return 0;
}
