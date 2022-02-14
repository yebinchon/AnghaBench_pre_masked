
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct isight* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct isight {int pcm_active; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_substream*,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0,
       struct snd_pcm_hw_params *VAR_1)
{
 struct isight *VAR_2 = VAR_0->private_data;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0,
            FUNC_1(VAR_1));
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_0(VAR_2->pcm_active, 1);

 return 0;
}
