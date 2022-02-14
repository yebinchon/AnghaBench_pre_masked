
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ctl_file {int events; int change_sleep; int subscribed; } ;
struct file {struct snd_ctl_file* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_2(struct file *VAR_2, poll_table * VAR_3)
{
 __poll_t VAR_4;
 struct snd_ctl_file *VAR_5;

 VAR_5 = VAR_2->private_data;
 if (!VAR_5->subscribed)
  return 0;
 FUNC_1(VAR_2, &VAR_5->change_sleep, VAR_3);

 VAR_4 = 0;
 if (!FUNC_0(&VAR_5->events))
  VAR_4 |= VAR_0 | VAR_1;

 return VAR_4;
}
