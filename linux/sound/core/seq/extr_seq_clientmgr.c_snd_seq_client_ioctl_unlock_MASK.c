
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_client {int ioctl_mutex; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_seq_client*) ;
 struct snd_seq_client* FUNC_3 (int) ;

void FUNC_4(int VAR_0)
{
 struct snd_seq_client *VAR_1;

 VAR_1 = FUNC_3(VAR_0);
 if (FUNC_0(!VAR_1))
  return;
 FUNC_1(&VAR_1->ioctl_mutex);




 FUNC_2(VAR_1);
 FUNC_2(VAR_1);
}
