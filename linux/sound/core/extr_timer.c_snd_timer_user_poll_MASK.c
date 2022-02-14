
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer_user {int qlock; scalar_t__ disconnected; scalar_t__ qused; int qchange_sleep; } ;
struct file {struct snd_timer_user* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file*,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static __poll_t FUNC_3(struct file *VAR_3, poll_table * VAR_4)
{
        __poll_t VAR_5;
        struct snd_timer_user *VAR_6;

        VAR_6 = VAR_3->private_data;

        FUNC_0(VAR_3, &VAR_6->qchange_sleep, VAR_4);

 VAR_5 = 0;
 FUNC_1(&VAR_6->qlock);
 if (VAR_6->qused)
  VAR_5 |= VAR_1 | VAR_2;
 if (VAR_6->disconnected)
  VAR_5 |= VAR_0;
 FUNC_2(&VAR_6->qlock);

 return VAR_5;
}
