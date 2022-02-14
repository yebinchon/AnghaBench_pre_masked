
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ua101 {int mutex; int states; } ;
struct snd_pcm_substream {struct ua101* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ua101*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_2)
{
 struct ua101 *VAR_3 = VAR_2->private_data;

 FUNC_1(&VAR_3->mutex);
 FUNC_0(VAR_0, &VAR_3->states);
 if (!FUNC_4(VAR_1, &VAR_3->states))
  FUNC_3(VAR_3);
 FUNC_2(&VAR_3->mutex);
 return 0;
}
