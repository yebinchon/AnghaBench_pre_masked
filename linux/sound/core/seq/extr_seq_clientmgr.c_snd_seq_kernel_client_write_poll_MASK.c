
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_client {int pool; } ;
struct file {int dummy; } ;
typedef int poll_table ;


 int VAR_0 ;
 struct snd_seq_client* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,struct file*,int *) ;
 int FUNC_2 (struct snd_seq_client*) ;

int FUNC_3(int VAR_1, struct file *VAR_2, poll_table *VAR_3)
{
 struct snd_seq_client *VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4 == ((void*)0))
  return -VAR_0;

 if (! FUNC_2(VAR_4))
  return 1;
 if (FUNC_1(VAR_4->pool, VAR_2, VAR_3))
  return 1;
 return 0;
}
