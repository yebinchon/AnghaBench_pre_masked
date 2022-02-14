
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer_user {int ioctl_lock; } ;
struct file {struct snd_timer_user* private_data; } ;


 long FUNC_0 (struct file*,unsigned int,unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static long FUNC_3(struct file *VAR_0, unsigned int VAR_1,
     unsigned long VAR_2)
{
 struct snd_timer_user *VAR_3 = VAR_0->private_data;
 long VAR_4;

 FUNC_1(&VAR_3->ioctl_lock);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_3->ioctl_lock);
 return VAR_4;
}
