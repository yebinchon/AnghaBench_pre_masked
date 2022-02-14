
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usX2Ydev {int * hwdep_pcm_shm; } ;
struct snd_usX2Y_hwdep_pcm_shm {int dummy; } ;
struct snd_hwdep {struct usX2Ydev* private_data; } ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(struct snd_hwdep *VAR_0)
{
 struct usX2Ydev *VAR_1 = VAR_0->private_data;
 if (((void*)0) != VAR_1->hwdep_pcm_shm)
  FUNC_0(VAR_1->hwdep_pcm_shm, sizeof(struct snd_usX2Y_hwdep_pcm_shm));
}
