
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer_user {struct snd_timer_user* tqueue; struct snd_timer_user* queue; int ioctl_lock; scalar_t__ timeri; } ;
struct inode {int dummy; } ;
struct file {struct snd_timer_user* private_data; } ;


 int FUNC_0 (struct snd_timer_user*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_0, struct file *VAR_1)
{
 struct snd_timer_user *VAR_2;

 if (VAR_1->private_data) {
  VAR_2 = VAR_1->private_data;
  VAR_1->private_data = ((void*)0);
  FUNC_1(&VAR_2->ioctl_lock);
  if (VAR_2->timeri)
   FUNC_3(VAR_2->timeri);
  FUNC_2(&VAR_2->ioctl_lock);
  FUNC_0(VAR_2->queue);
  FUNC_0(VAR_2->tqueue);
  FUNC_0(VAR_2);
 }
 return 0;
}
