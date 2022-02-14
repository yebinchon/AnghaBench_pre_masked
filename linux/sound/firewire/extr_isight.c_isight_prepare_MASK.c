
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct isight* private_data; } ;
struct isight {int mutex; scalar_t__ period_counter; scalar_t__ buffer_pointer; } ;


 int FUNC_0 (struct isight*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct isight *VAR_1 = VAR_0->private_data;
 int VAR_2;

 VAR_1->buffer_pointer = 0;
 VAR_1->period_counter = 0;

 FUNC_1(&VAR_1->mutex);
 VAR_2 = FUNC_0(VAR_1);
 FUNC_2(&VAR_1->mutex);

 return VAR_2;
}
