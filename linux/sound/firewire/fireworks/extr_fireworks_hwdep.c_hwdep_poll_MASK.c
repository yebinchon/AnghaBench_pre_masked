
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_hwdep {struct snd_efw* private_data; } ;
struct snd_efw {scalar_t__ pull_ptr; scalar_t__ push_ptr; int lock; scalar_t__ dev_lock_changed; int hwdep_wait; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file*,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static __poll_t
FUNC_3(struct snd_hwdep *VAR_3, struct file *VAR_4, poll_table *VAR_5)
{
 struct snd_efw *VAR_6 = VAR_3->private_data;
 __poll_t VAR_7;

 FUNC_0(VAR_4, &VAR_6->hwdep_wait, VAR_5);

 FUNC_1(&VAR_6->lock);
 if (VAR_6->dev_lock_changed || VAR_6->pull_ptr != VAR_6->push_ptr)
  VAR_7 = VAR_0 | VAR_2;
 else
  VAR_7 = 0;
 FUNC_2(&VAR_6->lock);

 return VAR_7 | VAR_1;
}
