
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct isight* private_data; } ;
struct isight {int mutex; int pcm_active; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct isight*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_0)
{
 struct isight *VAR_1 = VAR_0->private_data;

 FUNC_0(VAR_1->pcm_active, 0);

 FUNC_2(&VAR_1->mutex);
 FUNC_1(VAR_1);
 FUNC_3(&VAR_1->mutex);

 return FUNC_4(VAR_0);
}
