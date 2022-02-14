
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_client {int ioctl_mutex; } ;


 int FUNC_0 (int *) ;
 struct snd_seq_client* FUNC_1 (int) ;

bool FUNC_2(int VAR_0)
{
 struct snd_seq_client *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (!VAR_1)
  return 0;
 FUNC_0(&VAR_1->ioctl_mutex);

 return 1;
}
