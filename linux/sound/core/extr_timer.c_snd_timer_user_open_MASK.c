
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer_user {int ticks; int ioctl_lock; int qchange_sleep; int qlock; } ;
struct inode {int dummy; } ;
struct file {struct snd_timer_user* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_timer_user*) ;
 struct snd_timer_user* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct snd_timer_user*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_2, struct file *VAR_3)
{
 struct snd_timer_user *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_6(VAR_2, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_1);
 if (VAR_4 == ((void*)0))
  return -VAR_0;
 FUNC_5(&VAR_4->qlock);
 FUNC_0(&VAR_4->qchange_sleep);
 FUNC_3(&VAR_4->ioctl_lock);
 VAR_4->ticks = 1;
 if (FUNC_4(VAR_4, 128) < 0) {
  FUNC_1(VAR_4);
  return -VAR_0;
 }
 VAR_3->private_data = VAR_4;
 return 0;
}
